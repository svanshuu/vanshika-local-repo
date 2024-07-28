import tkinter as tk
from tkinter import messagebox

def check_win():
    for i in range(3):
        if board[i][0] == board[i][1] == board[i][2] != "":
            return True
        if board[0][i] == board[1][i] == board[2][i] != "":
            return True
    if board[0][0] == board[1][1] == board[2][2] != "":
        return True
    if board[0][2] == board[1][1] == board[2][0] != "":
        return True
    return False

def check_draw():
    return all(board[i][j] != "" for i in range(3) for j in range(3))

def on_click(row, col):
    global current_player
    if board[row][col] == "" and not game_over:
        board[row][col] = current_player
        buttons[row][col].config(text=current_player)
        if check_win():
            messagebox.showinfo("Tic-Tac-Toe", f"Player {current_player} wins!")
            reset_game()
        elif check_draw():
            messagebox.showinfo("Tic-Tac-Toe", "It's a draw!")
            reset_game()
        else:
            current_player = "O" if current_player == "X" else "X"

def reset_game():
    global board, current_player, game_over
    board = [["" for _ in range(3)] for _ in range(3)]
    current_player = "X"
    game_over = False
    for i in range(3):
        for j in range(3):
            buttons[i][j].config(text="", state=tk.NORMAL)

root = tk.Tk()
root.title("Tic-Tac-Toe")

board = [["" for _ in range(3)] for _ in range(3)]
current_player = "X"
game_over = False

buttons[i][j] = tk.Button(root, text="", font=("Helvetica", 20), width=5, height=2,
                                  command=lambda row=i, col=j: on_click(row, col))
buttons[i][j].grid(row=i, column=j)

reset_button = tk.Button(root, text="Reset", font=("Helvetica", 14), command=reset_game)
reset_button.grid(row=3, column=0, columnspan=3)

root.mainloop()
