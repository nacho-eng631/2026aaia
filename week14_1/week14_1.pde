//Week14-1好玩的程式設計 真的有地鼠
PImage img ;//(圖片物件)宣告變數
void setup() {
  size(300, 400);
  img = loadImage("gopher.png");//
}
int [][] a = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };
void draw() {
  background(#FFFFF2);//淡黃色
  if (frameCount%60==0) {
    int i = int(random(3)), j = int(random(3));
    a[i][j] = 60;
  }
  for (int i=0; i<3; i++) {//左手i 對應y座標
    for (int j=0; j<3; j++) {//右手j對應x座標
      float x = j*100, y = i*100;//換算座標
      y -= 100 * sin(a[i][j]*PI/60);
      if(a[i][j]>0)a[i][j]--;
      image(img, x, y, 100, 100);//在(x,y)
    }
    rect(0, i*100+100, 300, 100);
  }
}
