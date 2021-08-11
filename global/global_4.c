
int g=3;
int* obj = &g; 
void Zulu(int**p, int *q);

void Xray(){

	int **x,*b,*w,d=5;
	x = &b; 
	w = &d; 
	Zulu(x,w);
	if(b==&g)
        __VERIFIER_error();//unsafe
}


void Zulu(int**p,int *q){
	*p = q;
	*p = obj;
}

int main(){
	Xray();
	return 0;
}
