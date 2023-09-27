說明連結：https://youtu.be/qPizemCuIfg  
此為3-bit Histroy Predictor  
共有8條的預測000、001、010、011、100、101、110、111  
每條有SN、WN、WT、ST四種預測結果  
對比input跟預測結果，逐漸改變預測結果，最後會發現預測越來越準確  
  
  
Input: TTTTNNTNTNTNTNTNT  
  
Output:  
(000, SN, SN, SN, SN, SN, SN, SN, SN) N T  misprediction: 1  
(001, WN, SN, SN, SN, SN, SN, SN, SN) N T  misprediction: 1  
(011, WN, WN, SN, SN, SN, SN, SN, SN) N T  misprediction: 1  
(111, WN, WN, SN, WN, SN, SN, SN, SN) N T  misprediction: 1  
(111, WN, WN, SN, WN, SN, SN, SN, WN) N N  misprediction: 1  
(110, WN, WN, SN, WN, SN, SN, SN, SN) N N  misprediction: 0  
(100, WN, WN, SN, WN, SN, SN, SN, SN) N T  misprediction: 1  
(001, WN, WN, SN, WN, WN, SN, SN, SN) N N  misprediction: 1  
(010, WN, SN, SN, WN, WN, SN, SN, SN) N T  misprediction: 1  
(101, WN, SN, WN, WN, WN, SN, SN, SN) N N  misprediction: 0  
(010, WN, SN, WN, WN, WN, SN, SN, SN) N T  misprediction: 2  
(101, WN, SN, WT, WN, WN, SN, SN, SN) N N  misprediction: 0  
(010, WN, SN, WT, WN, WN, SN, SN, SN) T T  misprediction: 2  
(101, WN, SN, ST, WN, WN, SN, SN, SN) N N  misprediction: 0  
(010, WN, SN, ST, WN, WN, SN, SN, SN) T T  misprediction: 2  
(101, WN, SN, ST, WN, WN, SN, SN, SN) N N  misprediction: 0  
(010, WN, SN, ST, WN, WN, SN, SN, SN) T T  misprediction: 2  

