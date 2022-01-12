class loop
{
    public static void main(String[] args) {
        int i=0,j,k,h;
        //for(;;)  infinite loop
        // for(i=0,j=0,k=9;;) //multiple initialization
        //for(;i>=0 && i==0;) //multiple condition 
        for(;;i++,j++,k++) //multiple inc/dec
        {
            System.out.println(i);
            i++;
            if (i==10) {
                break;
                //to break infinity loop
            }

        }
        //int i=11;
        // while (i<10) {
        //     System.out.println(i);
        //     i++;
        // }

        /*
        do {
            System.out.println(i);
            i++;
        } while (i<10);
*/
    }
}