//week09-4好玩的程式設計(用陣列,for迴圈,畫很多氣球)
PImage img;//宣告變數
void setup() {//設定的函式
  size(600, 500);//視窗大小
  img = loadImage("balloon.png");//讀入圖片
}
float [] x = new float[200];//Java 陣列 x座標
float [] y = new float[200];//Java 陣列 x座標
float [] s = new float[200];//Java 陣列 x座標
int N = 0;//一開始 mouse 壓下去時的大小
float s2 = 0.1;
void draw() {
  background(#FFFFF2);
  for (int i=0; i<N; i++) {
    image(img, x[i], y[i], 96*s[i], 132*s[i]);
    if (y[i]>0) y[i]--;
  }
  if (mousePressed) {
    s2 = s2*1.02;
    image(img, mouseX-96/2*s2, mouseY-132*s2, 96*s2, 132*s2);
  }else s2=0.1;
}
void mouseReleased(){
  x[N] = mouseX-96/2*s2;
  y[N] = mouseY-132*s2;
  s[N] =s2;
  N++;
}
