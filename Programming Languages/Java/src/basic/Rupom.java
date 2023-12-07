package basic;

public class Rupom {
    public static void main(String[] args) {
        String week = "Friday Saturday Sunday Monday";
        String[] days = week.split("\\s");
        StringBuilder sb = new StringBuilder();
        String rev = "";
        for(String day:days) {
            rev = day+" "+rev;
        }
        System.out.println(rev);

        for(int i=0;i<days.length;i++) {
            sb.insert(0,days[i]);
            if(i<days.length -1) {
                sb.insert(0," ");
            }
        }

        String strReverse = sb.toString();
        System.out.println(strReverse);

        String str = "My name is Rakib Talukder Rupom";
        StringBuilder s = new StringBuilder(str);
        s.reverse();
        System.out.println(str.toLowerCase().compareToIgnoreCase(s.toString()));
    }
}
