//Задание: Для заданной матрицы размером 8 на 8 найти такие k, что k-я
//строка матрицы совпадает с k-м столбцом. Найти сумму элементов в тех
//строках, которые содержат хотя бы один отрицательный элемент.
#include &lt;stdio.h&gt;
void main(){
int rm = 8;
int matrix[rm][rm];
int i; int j;
for(i=0; i&lt;rm; i++){
for(j=0; j&lt;rm; j++){
printf(&quot;[%d-%d]: &quot;,i+1,j+1);
scanf(&quot;%d&quot;, &amp;matrix[i][j]);
}
}
int k[rm];
for (int i = 0; i &lt; rm; i++)
{
k[i] = 1;
for (int j = 0; j &lt; rm; j++)
if (matrix[i][j] != matrix[j][i])
{

k[i] = 0;
break;
}
}
for(i=0; i&lt;rm; i++){
if( k[i] == 1){
printf(&quot;Строка и столбец под номером %d совпадают \n&quot;, i+1);
}
}
int sum; int p;
for(i=0; i&lt;rm; i++){
sum = 0;
p = 0;
for(j=0; j&lt;rm; j++){
if(matrix[i][j] &lt; 0){
p = 1;
for(int s=0; s&lt;rm; s++){
sum += matrix[i][s];
}
}
}
if(p==1){
printf(&quot;Строка %d отрицательная. Сумма её эдементов равна %d .\n&quot;, i+1, sum);
}
}
}