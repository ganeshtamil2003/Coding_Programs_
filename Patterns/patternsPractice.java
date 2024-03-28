class patternsPractice{
    public static void main(String args[]){
        pattern30(5);
    }
    static void pattern1(int n){
        for(int row=1;row<=n;row++){
            for(int col=1;col<=row;col++){
                System.out.print("* ");
            }
            System.out.println();
        }
    } 
    static void pattern2(int n){
        for(int row=1;row<=n;row++){
            for(int col=1;col<=n;col++){
                System.out.print("* ");
            }
            System.out.println();
        }
    } 
    static void pattern3(int n){
        for(int row=0;row<=n;row++){
            for(int col=0;col<n-row;col++){
                System.out.print("* ");
            }
            System.out.println();
        }
    } 
    static void pattern4(int n){
        for(int row=1;row<=n;row++){
            for(int col=1;col<=row;col++){
                System.out.print(col+" ");
            }
            System.out.println();
        }
    } 
    static void pattern5(int n){
        for(int row=1;row<2*n;row++){
            int colsinrow=row>n?2*n-row:row;
            for(int col=0;col<colsinrow;col++){
                System.out.print("* ");
            }
            System.out.println();
        }
    } 
    static void pattern28(int n){
        for(int row=0;row<2*n;row++){
            int colsinrow=row>n?2*n-row:row;
            int spaces=n-colsinrow;
            for(int s=0;s<spaces;s++){
                System.out.print(" ");
            }
            for(int col=0;col<colsinrow;col++){
                System.out.print("* ");

            }
            System.out.println();
        }
    }
    static void pattern6(int n){
        for(int row=1;row<=n;row++){
            int spaces=n-row;
            for(int s=0;s<spaces;s++){
                System.out.print(" ");
            }
            for(int col=1;col<=row;col++){
                System.out.print("*");
            }
            System.out.println();
        }
    } 

    static void pattern30(int n){
    for(int row=1;row<=n;row++){
        for(int s=0;s<n-row;s++){
            System.out.print("  ");
        }
        for(int col=row;col>=1;col--){
            System.out.print(col+" ");
        }
        for(int col=2;col<=row;col++){
            System.out.print(col+" ");
        }
        System.out.println();
    }
}
}

