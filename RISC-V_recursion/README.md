在main中用jal進start
start判斷input a0的範圍進不同函式
用 
loop1:	# t1>=21
  addi  sp, sp, -8		
	sw  a0, 4(sp)       #進函式先sw a0(存開始的x值)
	sw  ra, 0(sp)       #和sw ra(為x1:存jalr回jal下一個的地址)
	div  a0, a0, a3     #x/5 再jal進start判斷x/5的範圍進不同函式
	jal ra, start       #x/5最完後回傳
	lw  a0, 4(sp)       #拿回開始的x值(第6行存的)
	lw  ra, 0(sp)       #拿回存jal下一個的地址，這樣做完jalr才能跳回上一個呼叫函式的x1(第7行存的)
	mul  a0, a0, a4     #2*x
	add  t0, t0, a0     #加入t0
	addi  sp, sp, 8     #還記憶體位置
	jalr  zero, 0(ra)   #jalr跳回main並beq zero,zero,end(如果此loop是最開始進去的)
為例                  #或jalr跳回上一個呼叫他的jal(如果此loop不是最開始進去的)

進end後輸出The damage:跟t0
再exit


Input/Output：
Input a number:
21
The damage:
59

Input a number:
20
The damage:
4472

Input a number:
15
The damage:
1118

Input a number:
10
The damage:
309

Input a number:
5
The damage:
28

Input a number:
3
The damage:
11

Input a number:
2
The damage:
6

Input a number:
1
The damage:
5

Input a number:
0
The damage:
1

Input a number:
-1
The damage:
-1
