/**********************************************************
*	BİR KELİMEDE HANGİ HARFTEN KAÇ TANE OLDUĞUNU BULMA
*		Author: Hakan Eryücel
**********************************************************/
package harfbulma;
import java.util.Scanner;
public class HarfBulma 
{
    public static void main(String[] args) 
    {
        Scanner scan =new Scanner(System.in);
        System.out.println("Bir kelime giriniz : ");
        String kelime =scan.next();
        int[]s=new int [26];//26 Farklı harf olabilir;
        for(int i=0;i<kelime.length();i++)
        {
            s[((int)kelime.charAt(i))-97]++;
        }
        for(int i=0;i<26;i++)
        {
            System.out.println(((char)(i+97))+" harfi "+s[i]+" tane var.");
        }
    }
}
