//week06-4a array x y int N for mousePressed
void setup(){
  size(600,400);
}
float [] x = new float[100];
float [] y = new float[100];
int N = 0;
void draw(){
  background(#c0ffee);
  for(int i=0; i<N; i++){
  ellipse(x[i],y[i], 8, 8);
  }
}
void mousePressed(){
  x[N] = mouseX;
  y[N] = mouseY;
  N++;
}
