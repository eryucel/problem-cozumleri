/**********************************************************
*	FAKTORIYEL HESAPLAMA VE FONKSIYON HALİNE GETİRME
*		Author: Hakan Eryücel
**********************************************************/
package faktoriyelfonksiyon;
import java.util.Scanner;
public class FaktoriyelFonksiyon
{
    static int Faktoriyel(int num)
    {
        int fac=1;
        for(int i=1;i<=num;i++)
        {
            fac*=i;
        }
        return fac;
    }
    public static void main(String[] args) 
    {
        Scanner scan= new Scanner(System.in);
        int num;
        System.out.println("Faktoriyel almak istediginiz sayiyi giriniz");
        num=scan.nextInt();
        System.out.println("Girdiginiz sayinin faktoriyeli: "+Faktoriyel(num));
    }
    
}
