//week06-2好玩的程式設計
void setup() {
  size(800, 500);//視窗大小800*500
}
int[][] a=new int[10][16];
void mouseDragged() {//如果mouse 按下去時,執行這段
  int i=mouseY/50, j=mouseX/50;//計算i,j座標
  a[i][j] =120;//數字變大了
}
void draw () {
  background(255);
  for (int i=0; i<10; i++)  {//上週是for y 現在for i 左手
    for (int j=0; j<16; j++) {//上週是for x 現在for j 右手
      if (a[i][j]>0){
      fill(#5DFF1F,a[i][j]*4);
      a[i][j]--;
      }else fill(255);//沒有值 ,設白色
      rect(j*50, i*50, 50, 50);//畫四邊形
    }
  }
}
