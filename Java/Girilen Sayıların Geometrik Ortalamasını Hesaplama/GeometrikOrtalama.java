/*******************************************************
*	GİRİLEN SAYILARIN GEOMETRİK ORTALAMASINI HESAPLAMA
*		Author: Hakan Eryücel
*******************************************************/
package geometrikortalama;
import java.util.Scanner;
public class GeometrikOrtalama {
    public static void main(String[] args) {
        Scanner scan = new Scanner (System.in);
        double mean = 1.0;
        int n=0, num = 0;
        do
        {
         System.out.println("Bir sayi giriniz, cikmak icin 0 giriniz: ");
         num=scan.nextInt();
         if(num!=0)
         {
          mean*=num;
          n++;
         }
        }
        while(num!=0);
        mean = Math.pow(mean, 1.0/(double)n);
        System.out.println("Geometrik Ortalama : "+mean);
        }
    }
