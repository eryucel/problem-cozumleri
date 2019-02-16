/**********************************************************
*	GİRİLEN SAYININ BASAMAKLARI TOPLAMINI BULMA
*		Author: Hakan Eryücel
**********************************************************/
package basamaktoplam;
import java.util.Scanner;
public class BasamakToplam 
{
    public static void main(String[] args) 
    {
        Scanner scan= new Scanner(System.in);
        int num,sum=0;
        System.out.println("Basamaklari toplamini ogrenmek istediginiz sayiyi giriniz");
        num=scan.nextInt();
        while(num!=0)
        {
            sum+=num%10;
            num/=10;
        }
        System.out.println("Girdiginiz sayinin basamaklari toplami : "+sum);
    }
    
}
