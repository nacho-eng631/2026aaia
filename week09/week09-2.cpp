//week09-2好玩的程式設計(互動氣球)
PImage img;//宣告變數
void setup() {//設定的函式
  size(600, 500);//視窗大小
  img = loadImage("balloon.png");//讀入圖片
}

void draw() {//畫圖的函式
  background(#FFFFF2);//背景是淡黃色
  image(img, mouseX-96/2, mouseY-132, 96, 132);
}//座標稍微改一下
