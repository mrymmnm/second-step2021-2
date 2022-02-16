#include <stdio.h>
#include <math.h>

int main(){
   float sci[20] = {65, 80, 67, 35, 58, 60, 72, 75, 68, 92, 36, 50, 25, 85, 46, 42, 78, 62, 84, 70};
   float eng[20] = {44, 87, 100, 63, 52, 60, 58, 73, 55, 86, 29, 56, 89, 23, 65, 84, 64, 27, 86, 84};
   int s_sum = 0, e_sum = 0;
   float s_nomal = 0.0, e_nomal = 0.0, s_ave = 0.0, e_ave = 0.0;
   int s_sum2 = 0, e_sum2 = 0;
   float  s_hen[20] = {}, e_hen[20] = {};

   int i, n = 20;
   for(i = 0;i < n;i++){
      s_sum += sci[i];
      e_sum += eng[i];
      s_sum2 += sci[i] * sci[i];
      e_sum2 += eng[i] * eng[i];
   }
   s_ave = (double)s_sum / n;
   e_ave = (double)e_sum / n;
   s_nomal = sqrt(s_sum2 / n - s_ave * s_ave);
   e_nomal = sqrt(e_sum2 / n - e_ave * e_ave);

   printf("合計点(理科)：%d, 平均点(理科)：%.3f, 標準偏差(理科)：%.3f\n合計点(英語)：%d, 平均点(英語)：%.3f, 標準偏差(英語)：%.3f\n", s_sum, s_ave, s_nomal, e_sum, e_ave, e_nomal);
  
   for(i = 0;i < n;i++){
      s_hen[i] = (sci[i] - s_ave) / s_nomal * 10 + 50;
      e_hen[i] = (eng[i] - e_ave) / e_nomal * 10 + 50;
      printf("偏差値(理科)：%.3f", s_hen[i]);
      printf("偏差値(英語)：%.3f", e_hen[i]);
      printf("\n");
   }

   int s_tmp = 0, e_tmp = 0;
   printf("点数高い順\n");
   printf("理科　英語\n");
   for(i = 0;i < n;i++){
      for(int j = i + 1;j < n;j++){
	 if(sci[i] > sci[j]){
	   s_tmp = sci[i];
	   sci[i] = sci[j];
	   sci[j] = s_tmp;
	 }else if(eng[i] > eng[j]){
	   e_tmp = eng[i];
	   eng[i] = eng[j];
	   eng[j] = e_tmp;
	 }
      }
   }
   for(i = 0;i < n;i++){
      for(int j = i + 1;j < n;j++){
	 if(eng[i] > eng[j]){
	   e_tmp = eng[i];
	   eng[i] = eng[j];
	   eng[j] = e_tmp;
	 }
      }
   }

   for(i = 0;i < n;i++){
      printf("% .0f    %.0f", sci[i], eng[i]);
      printf("\n");
   }

   return 0;
}
