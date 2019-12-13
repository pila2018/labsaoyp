//Задание: Проверить, все ли строки матрицы упорядочены по убыванию.
//Если нет, найти первую неупорядоченную строку и упорядочить.
#include &lt;stdio.h&gt;
void main(){
int rm=3;
int matrix[rm][rm];
int i; int j;
for(i=0; i&lt;rm; i++){
for(j=0; j&lt;rm; j++){
printf(&quot;[%d-%d]: &quot;,i+1,j+1);
scanf(&quot;%d&quot;, &amp;matrix[i][j]);
}
}
int n;
for(i=0; i&lt;rm; i++){

for(j=0; j&lt;rm-1; j++){
if( matrix[i][j] &gt; matrix[i][j+1]){
n=i;
}
}
}
int z;
for(i=0; i&lt;rm-1; i++){
for(j=0; j&lt;rm-1; j++){
if(matrix[n][j]&gt;matrix[n][j+1]){
z = matrix[n][j];
matrix[n][j] = matrix[n][j+1];
matrix[n][j+1] = z;
}
}
}
for(i=0; i&lt;rm; i++){
for(j=0; j&lt;rm; j++){
printf(&quot;%d &quot;, matrix[i][j]);
}
printf(&quot;\n&quot;);
}
}