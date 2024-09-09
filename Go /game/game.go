package game

import "fmt"

type Board [][]int

func NewBoard() Board {
	return Board{
		{4, 4, 4},
		{4, 4, 4},
		{4, 4, 4},
	}
}

func BoardOperation(player int, move [2]int, board Board) int {
	if board[move[0]][move[1]] == 4 {
		board[move[0]][move[1]] = player
	} else {
		fmt.Println("Invalid move!! Block already occupied.")
		return -1
	}
	PrintBoard(board)
	return 0
}

func PrintBoard(board Board) {
	for i := 0; i < 3; i++ {
		for j := 0; j < 3; j++ {
			if board[i][j] == 4 {
				fmt.Print("- ")
			} else if board[i][j] == 0 {
				fmt.Print("X ")
			} else {
				fmt.Print("O ")
			}
		}
		fmt.Println()
	}
}

func CheckWinner(board Board) int {
	for i := 0; i < 3; i++ {
		if board[i][0] != 4 && board[i][0] == board[i][1] && board[i][1] == board[i][2] {
			return board[i][0]
		}
		if board[0][i] != 4 && board[0][i] == board[1][i] && board[1][i] == board[2][i] {
			return board[0][i]
		}
	}

	if board[0][0] != 4 && board[0][0] == board[1][1] && board[1][1] == board[2][2] {
		return board[0][0]
	}
	if board[0][2] != 4 && board[0][2] == board[1][1] && board[1][1] == board[2][0] {
		return board[0][2]
	}

	return -1
}

func Menu() {
	board := NewBoard()
	currentPlayer := 0
	moves := 0

	for {
		fmt.Printf("Player %d's move (enter row and column): \n", currentPlayer+1)
		var row, col int
		fmt.Scan(&row, &col)
		if row > 2 || row < 0 || col > 2 || col < 0 {
			fmt.Println("Error!! Invalid column or row number.")
			continue
		}
		valid := BoardOperation(currentPlayer, [2]int{row, col}, board)
		if valid == -1 {
			continue
		}
		moves++

		winner := CheckWinner(board)
		if winner != -1 {
			fmt.Printf("Player %d wins!\n", winner+1)
			break
		}
		if moves == 9 {
			fmt.Println("It's a draw!")
			break
		}
		currentPlayer = 1 - currentPlayer
	}
}
