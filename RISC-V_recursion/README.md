在main中用jal進start  
start判斷input a0的範圍進不同函式  
用   
loop1:	&nbsp;# t1>=21  
  &nbsp;addi &nbsp; sp, sp, -8	  	
	&emsp;sw  a0, 4(sp)      &emsp; #進函式先sw a0(存開始的x值)  
	&emsp;sw  ra, 0(sp)       &emsp;#和sw ra(為x1:存jalr回jal下一個的地址)  
	&emsp;div  a0, a0, a3    &emsp; #x/5 再jal進start判斷x/5的範圍進不同函式  
	&emsp;jal ra, start      &emsp; #x/5最完後回傳  
	&emsp;lw  a0, 4(sp)      &emsp; #拿回開始的x值(第6行存的)  
	&emsp;lw  ra, 0(sp)       &emsp;#拿回存jal下一個的地址，這樣做完jalr才能跳回上一個呼叫函式的x1(第7行存的)  
	&emsp;mul  a0, a0, a4     &emsp;#2*x  
	&emsp;add  t0, t0, a0    &emsp; #加入t0  
	&emsp;addi  sp, sp, 8     &emsp;#還記憶體位置  
	&emsp;jalr  zero, 0(ra)  &emsp; #jalr跳回main並beq zero,zero,end(如果此loop是最開始進去的)  
為例               &emsp;   #或jalr跳回上一個呼叫他的jal(如果此loop不是最開始進去的)  
  
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
  
