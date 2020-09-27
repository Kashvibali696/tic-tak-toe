
board={'1':' ','2':' ','3':' ',
       '4':' ','5':' ','6':' ',
       '7':' ','8':' ','9':' '}
boardkeys=[]
for key in board:
    boardkeys.append(key)
          
def show(a):
  print(a['1']+'|'+ a['2']+'|'+ a['3'])
  print("-+-+-")
  print(a['4'] +'|'+ a['5']+'|'+ a['6'])
  print("-+-+-")
  print(a['7']+'|'+ a['7']+'|'+ a['9'])

 
def game():
     turn = 'X'
     count = 0 
     
     for i in range(10):
         show(board)
         print("Its your turn,"+ turn + ".Move to which place?")
         
         move=input()
         if board[move]==' ':
             board[move]=turn
             count+=1
         else:
             print("place is already filled")
             continue
         if count >= 5:
             if(board['1'] == board['2'] == board['3']!=' '):
                show(board)
                print(".\nGame.....Over\n")
                print("-----"+ turn +"won. -----")
                break
             elif(board['4'] == board['5'] == board['6']!=' '):
                show(board)
                print(".\nGame.....Over\n")
                print("-----"+ turn +"won. -----")
                break
             elif(board['7'] == board['8'] == board['9']!=' '):
                show(board)
                print(".\nGame.....Over\n")
                print("-----"+ turn +"won. -----")
                break
             elif(board['1'] == board['5'] == board['9']!=' '):
                show(board)
                print(".\nGame.....Over\n")
                print("-----"+ turn +"won. -----")
                break
             elif(board['3'] == board['5'] == board['7']!=' '):
                show(board)
                print(".\nGame.....Over\n")
                print("*****"+ turn + "Won.*****")
                break
         if count == 9:
               print("\nGame Over\n")
               print("It is a tie")
         if turn == 'X':
             turn ='O'
         else :
            turn = 'X'
     restart=input("Do you want to play again? (y/n)")
     if restart =="y" or restart =="Y":
         for key in boardkeys:
              board[key]=" "
         game()
if __name__ == "__main__":
    game()
     
             
         
            

             
