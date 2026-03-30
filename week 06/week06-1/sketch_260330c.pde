//week06-01好玩的程式設計
//ctrl+N新視窗
void setup() {
  size(800, 500);//視窗大小800*500
}
int[][] a=new int[10][16];
void mousePressed() {
  int i=mouseY/50, j=mouseX/50;
  a[i][j] = 1;
}
void draw () {
  for (int i=0; i<10; i++)  {//上週是for y 現在for i 左手
    for (int j=0; j<16; j++) {//上週是for x 現在for j 右手
      if (a[i][j]==1)fill(#5DFF1F);
      else fill(255);//沒有值 ,設白色
      rect(j*50, i*50, 50, 50);//畫四邊形
    }
  }
}
