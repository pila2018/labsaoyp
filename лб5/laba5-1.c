//Найти в матрице первый столбец, все элементы которого положительны.
//Знаки элементов предыдущего столбца изменить на противоположные.
#include &lt;stdio.h&gt;
void main(){
int matrix[3][3];
int i; int j;
for(i=0; i&lt;3; i++){
for(j=0; j&lt;3; j++){

printf(&quot;[%d-%d]: &quot;,i+1,j+1);
scanf(&quot;%d&quot;, &amp;matrix[i][j]);
}
}
int n = 0; int z;
for(i=0; i&lt;3; i++){
z = 0;
for(j=0; j&lt;3; j++){
if(matrix[j][i]&gt;0){
z = 1;
}
}
if(z==1){

n = i-2;
}

}
for(i=0; i&lt;3; i++){
matrix[i][n] *= -1;
}
for(i=0; i&lt;3; i++){
for(j=0; j&lt;3; j++){
printf(&quot;%d &quot;, matrix[i][j]);
}
printf(&quot;\n&quot;);
}
}