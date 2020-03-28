//
// Created by 15au116nl on 27/03/2020.
//



using namespace std;
void simulate(double a, double b, double x, double u, double dt){
    double dx ;
    dx = a*x + b*u;
    x += dt*dx;

cout << x;



}
