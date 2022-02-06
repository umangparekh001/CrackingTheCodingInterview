public class URLify {

    public static void main(String[] args) {

        System.out.println("===== Cracking The Coding Interview Problem 1.3 =====");
        String url = "Mr John Smith   ";
        int actualLength = 13;
        System.out.println("Given URL is :-> "+url+" && actual length :-> "+actualLength);
        System.out.println("****** URLify String is :-> "+replaceSpacesWithPercentage20(url.toCharArray(), actualLength)+" *******");

    }

    public static String replaceSpacesWithPercentage20(char[] urlChars, int correctLength){

        int actualLength = urlChars.length;
        //System.out.println("Actual Length of URL :->> "+actualLength);
        //System.out.println("True Length of URL :->> "+correctLength);

        int spaceCount = 0;
        int i;
        for(i=0; i<correctLength; i++)
            if (urlChars[i] == ' ') spaceCount++;

        //System.out.println("Total # of Spaces in URL :-> "+spaceCount);

        int newLength = correctLength + spaceCount * 2;

        //System.out.println("newLength of Str including %20 :-> "+newLength);
        if(correctLength < urlChars.length)
            urlChars[correctLength] = '\0';



        char[] newURL = new char[newLength];

        for(i=correctLength-1; i >= 0; i--) {

            if(urlChars[i] == ' ') {
                newURL[newLength-1] = '0';
                newURL[newLength-2] = '2';
                newURL[newLength-3] = '%';
                newLength = newLength -3;
            } else {
                newURL[newLength-1] = urlChars[i];
                newLength--;
            }
        }

        return new String(newURL);
    }
}
