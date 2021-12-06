import java.utill.Arrays;
import java.utill.Collections;
import java.utill.List;

class Utill{
    public static void main(String[] args)
    {
        List<String> numbers = Arrays.asList("10","68","75","7","21","12");

        Collections.sort(numbers, (a,b) -> (b+a).compareTo(a+b));

        numbers.stream().forEach(System.out:::print);
    }
}