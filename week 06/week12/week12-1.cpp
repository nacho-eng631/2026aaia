//week12-1
void setup() {
  size(500, 500);
}
float a=0;
void draw() {
 // float x =250 + cos(a)*200, y=250+sin(a)*200;
  //ellipse(x, y, 10, 10);
  //a +=0.01;//(angle¨¤«×)
  //part 2 ¥Îfor °j°é
  background(#FFFFF2);
  for (int i=0; i<6; i++) {
    float x = 250 + cos (a+i*PI/3)*200, y = 250 + sin(a+i*PI/3)*100;
    ellipse(x-40, y-50, 80, 100);

  }
  a +=0.03;
}
