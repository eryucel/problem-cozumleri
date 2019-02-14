/**********************************************************
*	GİRİLEN SAYININ ASAL OLUP OLMADIĞIINI KONTROL ETME
*		Author: Hakan Eryücel
**********************************************************/
package asalkontrol;
import java.util.Scanner;
public class AsalKontrol {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num,ctrl=0;
        System.out.println("Asalligini kontrol etmek istediğiniz sayiyi giriniz : ");
        num=scan.nextInt();
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                ctrl++;
            }
        }
        if(ctrl==0)
        {
            System.out.println(num+" asal bir sayidir.");
        }
        else
        {
            System.out.println(num+" asal bir sayi degildir.");
        }
    }
}
