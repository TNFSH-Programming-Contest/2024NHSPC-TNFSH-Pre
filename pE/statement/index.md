# 下雨天

「下雨天了怎麼辦　我好想你\
我不敢打給你　我找不到原因\
為什麼失眠的聲音　變得好熟悉\
沉默的場景　做你的代替 陪我等雨停」

窗外下起瓢潑大雨，這時宜漾收到來自男朋友的訊息，猛然想起，今天是他們的一周年紀念日，他們預定了要前往灣歐萬大樓上的高檔餐廳「想A喬伊」慶祝。\
因此宜漾隨手回覆了訊息，就匆匆出門了。

「怎樣的雨　怎樣的夜\
怎樣的我能讓你更想念\
雨要多大　天要多黑\
才能夠有你的體貼」

隨後宜漾走到了路上，由於大雨下不停，路上已經積滿了大大小小的水坑。宜漾的家與餐廳的位置可以視為在一條數線上，宜漾的家位於原點，即座標 $0$，而餐廳位於座標 $n$。另外路上的每個整數點，包含宜漾的家與餐廳，都有水坑，座標 $i$ 上的水坑大小為 $a_i$。\
現在，宜漾從家裡也就是座標 $0$ 出發，最初她身上的潮濕度為 $0$。接著她開始走向餐廳，每一步她可以選擇跨出任意整數距離，假設她跨出距離為 $k$ 的一步，則她可以從座標 $i$ 移動到座標 $i+k$。\
由於宜漾不想浪費時間，因此她不會走出座標 $0$ 到座標 $n$ 的範圍，但她\textcolor{red}{可以朝數線負的方向走}。

只不過根據祖沖之的圓周率帶入反三角函數，以及將哈伯常數帶入波茲曼定律，再加上一點波以耳氫原子模型的修正，可以得到以下結論。\
倘若宜漾從大小為 $x$ 的水坑跨出步伐，那她會激起大小為 $x$ 的水花，並且在她跨入另一個大小為 $y$ 的水坑時，會再激起大小為 $y$ 的水花，當距離為 $1$ 時，碰撞產生的水花會使宜漾增加 $xy$ 的潮濕度。然而當兩個水花距離越遠，水花們碰撞在一起會產生越大的加成效果，每當距離增加 $1$，水花使宜漾增加的潮濕度便會加倍。也就是說，當宜漾從座標 $i$ 跨出距離為 $k$ 的步伐到座標 $i+k$，他的潮濕度會增加 $2^{k-1}a_ia_{i+k}$。

由於宜漾是要去高檔餐廳吃飯，因此她希望到達餐廳時潮濕度越低越好，請你告訴她當她到達座標 $n$ 時，潮濕度最低可以是多少。

\clearpage

## 輸入
輸入有兩行。\
第一行包含一個正整數 $n$，代表餐廳的座標。\
第二行包含 $n+1$ 個正整數 $a_0,a_1,a_2,...,a_n$，代表每個整數點上水坑的大小。

## 輸出
輸出一個整數，代表宜漾到達餐廳時可能的最小潮濕度。

## 輸入限制
 - $1\le n\le 2\times 10^6$
 - $1\le a_i\le 10^6$

## 子任務
\subtasks

\clearpage

## 範例輸入
\testfile{0-01.in}

## 範例輸出
\testfile{0-01.out}
