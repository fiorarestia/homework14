#include <iostream>  



int main()

{

    int Sidelength1,Sidelength2,Sidelength3; 

    printf("三根木條能不能拼成一個三角形。\n");

	printf("定義：三角形的三邊長一定滿足任兩邊邊長和大於第三邊。\n");

	printf("請輸入三邊長的長度：");

	scanf("%d%d%d",&Sidelength1,&Sidelength2,&Sidelength3);

        if( Sidelength1+Sidelength2>Sidelength3 && Sidelength1+Sidelength3>Sidelength2 && Sidelength2+Sidelength3>Sidelength1 ) 

        {

        printf("結果：可以滿足\n"); 

        }

        else

        {

        printf("結果：不可以滿足\n");

        }

    system("pause"); 

	return 0; 

}
