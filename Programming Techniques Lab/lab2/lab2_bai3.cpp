#include<stdio.h>
#include<math.h>
struct POINT{
	
	int x;
	int y;
};
void inputPOINT(struct POINT &P){
	printf("Input point coordinates: ");
	scanf("%d%d", &P.x, &P.y);
}

void outputPOINT(struct POINT P){
	printf("(%d, %d)", P.x, P.y);
}
bool checkTwoPoint(POINT A, POINT B){
	if(A.x == B.x && A.y == B.y)
		return true;
	else
		return false;
}
float distance(struct POINT A, struct POINT B){
	float distance = sqrt((A.x-B.x)*(A.x-B.x) + (A.y-B.y)*(A.y-B.y));
	return distance;
}
int checkTriangleTypes(POINT A, POINT B, POINT C){
	float AB = distance(A,B);
	float AC = distance(A,C);
	float BC = distance(B,C);
	printf("%f,%f,%f\n", AB, AC, BC);
	if((AB+AC>BC) && (AC+BC>AB) && (BC+AB>AC)){
		if(AB==AC && AC==BC)
			return 1; 
		else if (AB==AC || AC==BC || AB==BC)
			if(AB*AB==(AC*AC+BC*BC) || AC*AC==(AB*AB+BC*BC) || BC*BC==(AC*AC+AB*AB))
				return 2;
			else
				return 3;
	else if(AB*AB==AC*AC+BC*BC || AC*AC==AB*AB+BC*BC || BC*BC==AC*AC+AB*AB)
		return 4;
	else return 5;
	}
	else 
		return 0;
}
int main()
 {
 	struct POINT A, B, C;
 	printf("Input coodinate axis A:\n");
 	inputPOINT(A);
 	printf("Input coodinate axis B:\n");
	inputPOINT(B);
	printf("\nCoodinate axis A:"); 
	outputPOINT(A);
	printf("\nCoodinate axis B:");
	outputPOINT(B);
	if(checkTwoPoint(A,B) == true)
		printf("A and B are the same\n");
	else
		printf("\nA and B are't the same\n");
	printf("Input coodinate axis C:\n");
	inputPOINT(C);
	int type=checkTriangleTypes(A,B,C);
	if (type == 1)
		printf("Equilateral triangle");
	else if (type == 2)
		printf("Isoseles right triangle");
	else if (type == 3)
		printf("Isoseles triangle");
	else if (type == 4)	
		printf("Right triangle");
	else if (type == 5)	
		printf("Not a triangle");	
	return 0;
 }
