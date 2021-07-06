import java.util.*;
 
public class Main{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(),ans = 0,countOfActivePolice = 0;
        ArrayList<Integer> arr = new ArrayList<Integer>(n);
        
        for(int i=0;i<n;i++)
        {
            arr.add(sc.nextInt());
            
            if(arr.get(i) == -1 && countOfActivePolice == 0)
            {
                ans++;
            }
            else if(arr.get(i) == -1)
            {
                countOfActivePolice--;
            }
            else
            {
                countOfActivePolice += arr.get(i);
            }
        }
        
        System.out.println(ans);
    }
}
