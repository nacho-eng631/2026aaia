//week09-3好玩的程式設計(氣球會變大)
PImage img;//宣告變數
void setup() {//設定的函式
  size(600, 500);//視窗大小
  img = loadImage("balloon.png");//讀入圖片
}
float x, y, s = 0.1;//一開始氣球小
void draw() {//畫圖的函式(每秒60次)
  background(#FFFFF2);//背景是淡黃色
  if(mousePressed){
    s = s*1.02;
    image(img, mouseX-96/2*s, mouseY-132*s,96*s,132*s);
  } else s =0.1;//放開mouse氣球變小
}//座標稍微改一下
