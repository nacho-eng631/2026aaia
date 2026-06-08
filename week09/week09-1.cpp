//week09-1好玩的程式設計
PImage img;//宣告圖
size(600,500);//視窗大小
//balloon.png 圖檔(在桌面)把圖檔拉進程式碼
img = loadImage("balloon.png");//讀入圖檔
image(img, 0, 0, 96, 132);//氣球
image(img, 96, 0, 96*2, 132*2);
