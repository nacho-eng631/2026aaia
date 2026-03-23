//week05-2好玩的程式設計
//ctrl-n新視窗
void  setup(){
  size(800,500);
}
  void draw(){
  for (int y=0;y<500;y+=50){//外面 for 迴圈 y座標
    for(int x=0;x<800;x+=50){//裡面 for 迴圈 x座標
      if (x<mouseX && mouseX <x+50) fill(#5DFF1F);
      else if  (y<mouseY && mouseY <y+50) fill(#5DFF1F);
      else fill(255);//有三行判斷 決定填充色彩
      rect(x,y,50,50);
    }
  }
 }
