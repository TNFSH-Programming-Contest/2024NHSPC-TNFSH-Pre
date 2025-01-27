# 猜猜拳

小杰非常喜歡玩猜猜拳，因此你發起了猜拳挑戰！

猜猜拳一共有以下三種型態：\
1.剪刀：近距離類型招式，手成剪刀姿勢，變成像剪刀般銳利，可直接斬殺對手，不過是三種型態中威力最弱的。\
2.石頭：近距離類型招式，手成拳頭姿勢出拳，是猜猜拳中威力最大的招式。\
3.布：遠距離類型招式，手成布姿勢射出念能力球，擊中目標後會爆炸。

然而，考慮到你會被秒殺，小杰決定用最原始的猜拳規則和你一較高下，也就是「剪刀贏布，布贏石頭，石頭贏剪刀」，勝者獲得一分，敗者分數不變，若為平局則雙方分數皆不變。

猜拳比賽結束後，然而你卻忘記了小杰到底贏了你幾分，你只記得自己出了 $a$ 次剪刀、$b$ 次石頭、$c$ 次布，而小杰出了 $d$ 次剪刀、$e$ 次石頭、$f$ 次布。\
請你算出在最佳情況下，你最多能贏小杰幾分，若你無論如何都會輸給小杰，則輸出你最少輸他幾分，也就是說，輸出必不為負。

## 輸入
輸入有兩行。\
第一行包括三個正整數 $a,b,c$，分別代表你出了幾次剪刀、石頭和布。\
第二行包括三個正整數 $d,e,f$，分別代表小杰出了幾次剪刀、石頭和布。

## 輸出
輸出一個整數，代表你最多能贏小杰幾分，若你無論如何都會輸給小杰，則輸出你最少輸他幾分。

## 輸入限制
 - $0\le a,  b,  c,  d,  e,  f\le 10^{18}$
 - $a+b+c=d+e+f$
\clearpage

## 子任務
\subtasks

## 範例輸入
\testfile{0-01.in}

## 範例輸出
\testfile{0-01.out}
