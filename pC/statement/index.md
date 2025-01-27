# 友誼悖論

你是否曾經感覺，你的朋友人緣普遍都比你好，他們平均的朋友數量比你的朋友數量多？\
如果有的話，也許這不是錯覺，由於取樣上的偏差，這確實有不小的機率會發生。如果在一個很大的群體中，有些人朋友很多，有些人朋友比較少，那麼在朋友關係是隨機分配的情況下，你交朋友時也會有比較高的機率與這些朋友很多的人當朋友，而相對的，你與朋友比較少的人當朋友的機率也比較低。因此，你最終有很高的機率感覺到「你的朋友」的平均朋友數量，比你的朋友數量還多。\
以上看似違背常理的狀況，稱作「友誼悖論(Friendship Paradox)」。

類似的例子還有，在一間學校中，假設有兩個班級，人數分別為 $40$ 與 $10$，顯然每個班級的平均人數為 $25$。但如果你隨機抽樣來進行調查，也就是隨機抓人問他「你的班級有多少人？」，然後將統計到的結果進行平均的話，事實上會與實際結果有所偏差，以上述例子而言，你有 $0.8$ 的機率得到 $40$ 的答案、$0.2$ 的機率得到 $10$ 的答案，最終統計結果的期望平均為 $0.8\times 40+0.2\times 10=34$。\
除此之外，在塞車時容易感覺自己的車道總是塞車，別的車道很暢通也是如此，如果在一個範圍內，塞車的車道有 $15$ 台車，另一個車道只有 $5$ 台車，乍看之下只有 $\frac{1}{2}$ 的機會會在塞車的車道，但倘若身陷車流中，我們有 $\frac{3}{4}$ 的機率是在塞車車道的車。

所以，讓我們回到友誼悖論。\
在你的生活圈中，共有 $n$ 個人，將其編號為 $1$ 到 $n$，並且其中有 $m$ 對朋友關係，每對朋友關係包含數字 $a_i,b_i$，代表 $a_i$ 是 $b_i$ 的朋友，而朋友關係都是互相的，因此 $b_i$ 也會是 $a_i$ 的朋友。可以保證朋友關係不會重複，亦即有朋友關係 $a_i,b_i$ 時，不會存在另一個朋友關係 $a_j,b_j(i\ne j)$ 使得 $(a_i,b_i)=(a_j,b_j)$ 或 $(a_i,b_i)=(b_j,a_j)$。另外也保證每個人至少有一個朋友，即對於在 $[1,n]$ 區間內的整數 $x$，必然存在 $(a_i,b_i)$ 滿足 $a_i=x$ 或 $b_i=x$。\
注意這裡的 $x$ 是 $y$ 的朋友，只有在 $x,y$ 之間存在直接的朋友關係才成立，也就是如果 $x,z$、$z,y$ 存在朋友關係，但 $x,y$ 沒有朋友關係的話 $x$ 跟 $y$ 就不會是朋友。\
現在你想要知道，在你生活圈的這 $n$ 個人中，有多少人會符合「友誼悖論」，也就是有多少人「朋友的平均朋友數量」大於「自己的朋友數量」。請你統計出符合友誼悖論的人數，並依序輸出這些人的編號。

\clearpage

## 輸入
輸入有多行。\
第一行包含兩個正整數 $n,m$，分別代表生活圈中的人數以及朋友關係的數量。\
接下來有 $m$ 行，每行包含兩個正整數 $a_i,b_i$，代表 $a_i,b_i$ 間存在朋友關係。\

## 輸出
輸出兩行。\
第一行包含一個整數 $k$，代表生活圈中符合朋友悖論的人數。\
第二行包含 $k$ 個整數，代表 $k$ 個符合朋友悖論的人的編號，由小到大輸出。\
若 $k=0$，則可以只輸出第一行。

## 輸入限制
 - $1\le n\le 2\times 10^5$
 - $0\le m\le min(\frac{n(n-1)}{2},10^6)$
 - $1\le a_i,b_i\le n$

## 子任務
\subtasks

\clearpage

## 範例輸入1
\testfile{0-01.in}

## 範例輸出1
\testfile{0-01.out}

## 範例輸入2
\testfile{0-02.in}

## 範例輸出2
\testfile{0-02.out}

\clearpage

## 範例說明
範例測資1說明:\
編號為 $1$ 到 $5$ 的人分別有 $2,2,3,3,2$ 個朋友。\
其中編號為 $1$ 的人跟編號為 $2,3$ 的人是朋友，他的「朋友的平均朋友數」為 $\frac{2+3}{2}=\frac{5}{2}$，大於他的朋友數 $2$。\
其中編號為 $2$ 的人跟編號為 $1,4$ 的人是朋友，他的「朋友的平均朋友數」為 $\frac{2+3}{2}=\frac{5}{2}$，大於他的朋友數 $2$。\
其中編號為 $3$ 的人跟編號為 $1,4,5$ 的人是朋友，他的「朋友的平均朋友數」為 $\frac{2+3+2}{3}=\frac{7}{3}$，小於他的朋友數 $3$。\
其中編號為 $4$ 的人跟編號為 $2,3,5$ 的人是朋友，他的「朋友的平均朋友數」為 $\frac{2+3+2}{3}=\frac{7}{3}$，小於他的朋友數 $3$。\
其中編號為 $5$ 的人跟編號為 $3,4$ 的人是朋友，他的「朋友的平均朋友數」為 $\frac{3+3}{2}=3$，大於他的朋友數 $2$。\
因此最終有 $3$ 個人的「朋友的平均朋友數」嚴格大於自己的朋友數，分別為編號為 $1,2,5$ 的人。

範例測資2說明:\
編號為 $1$ 到 $9$ 的人分別有 $1,1,2,1,2,2,3,3,1$ 個朋友。\
因此最終有 $6$ 個人的「朋友的平均朋友數」嚴格大於自己的朋友數，分別為編號為 $1,2,3,4,6,9$ 的人。
