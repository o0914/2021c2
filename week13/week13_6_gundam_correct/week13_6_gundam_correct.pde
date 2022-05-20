PShape gundam;
void setup()
{
  size(500,500,P3D);
  gundam = loadShape("Gundam.obj");
}
void draw()
{
  background(#F8FFAF);
  translate(250,500);
  scale(20,-20,20);
  rotateY(radians(frameCount));
  shape(gundam);
}
