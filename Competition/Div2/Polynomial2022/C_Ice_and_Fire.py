# for each test case:
#     initialize an array "winners" with n elements, all initialized to 0
#     for i = 2 to n:
#         initialize a variable "remaining_players" to the number of players with temperature value <= i
#         while remaining_players > 1:
#             pick two players at random from the remaining players
#             if the environment type for this battle is 0:
#                 the player with the lower temperature value wins
#             else:
#                 the player with the higher temperature value wins
#             eliminate the losing player from the remaining players
#         winners[i] = remaining_players
#     print the elements of the "winners" array, separated by spaces
#     print a newline

import random

def solve():
    n = int(input())
    winners = [0] * (n + 1)
    for i in range(2, n + 1):
        remaining_players = 0
        for j in range(1, n + 1):
            if j <= i:
                remaining_players += 1
        while remaining_players > 1:
            player1 = random.randint(1, n)
            player2 = random.randint(1, n)
            if player1 <= i and player2 <= i:
                if player1 <= player2:
                    remaining_players -= 1
                else:
                    remaining_players -= 1
        winners[i] = remaining_players
    for i in range(2, n + 1):
        print(winners[i], end = " ")
    print()

def main():
    t = int(input())
    for i in range(t):
        solve()

if __name__ == "__main__":
    main()

    
