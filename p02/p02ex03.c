/***  p02ex03.c  ***/
/***  s12169  2J34  �����S��  ***/

#include <stdio.h>

int main()
{
    int x,y,y2,y3,y4;
    printf("   x   y1   y2   y3     y4\n");
    for (x=1; x<=100; x++) {
        y1 = 101-x;
        y2 = 3*x;
        y3 = 4*x-3;
        y4 = 5*x*x;
        printf("%4d %4d %4d %4d %6d\n",x,y1,y2,y3,y4);
    }
    return 0;
}


/**************** ���s���� *****************

   x   y1   y2   y3     y4
   1  100    3    1      5
   2   99    6    5     20
   3   98    9    9     45
   4   97   12   13     80
   5   96   15   17    125
   6   95   18   21    180
   7   94   21   25    245
   8   93   24   29    320
   9   92   27   33    405
  10   91   30   37    500
  11   90   33   41    605
  12   89   36   45    720
  13   88   39   49    845
  14   87   42   53    980
  15   86   45   57   1125
  16   85   48   61   1280
  17   84   51   65   1445
  18   83   54   69   1620
  19   82   57   73   1805
  20   81   60   77   2000
  21   80   63   81   2205
  22   79   66   85   2420
  23   78   69   89   2645
  24   77   72   93   2880
  25   76   75   97   3125
  26   75   78  101   3380
  27   74   81  105   3645
  28   73   84  109   3920
  29   72   87  113   4205
  30   71   90  117   4500
  31   70   93  121   4805
  32   69   96  125   5120
  33   68   99  129   5445
  34   67  102  133   5780
  35   66  105  137   6125
  36   65  108  141   6480
  37   64  111  145   6845
  38   63  114  149   7220
  39   62  117  153   7605
  40   61  120  157   8000
  41   60  123  161   8405
  42   59  126  165   8820
  43   58  129  169   9245
  44   57  132  173   9680
  45   56  135  177  10125
  46   55  138  181  10580
  47   54  141  185  11045
  48   53  144  189  11520
  49   52  147  193  12005
  50   51  150  197  12500
  51   50  153  201  13005
  52   49  156  205  13520
  53   48  159  209  14045
  54   47  162  213  14580
  55   46  165  217  15125
  56   45  168  221  15680
  57   44  171  225  16245
  58   43  174  229  16820
  59   42  177  233  17405
  60   41  180  237  18000
  61   40  183  241  18605
  62   39  186  245  19220
  63   38  189  249  19845
  64   37  192  253  20480
  65   36  195  257  21125
  66   35  198  261  21780
  67   34  201  265  22445
  68   33  204  269  23120
  69   32  207  273  23805
  70   31  210  277  24500
  71   30  213  281  25205
  72   29  216  285  25920
  73   28  219  289  26645
  74   27  222  293  27380
  75   26  225  297  28125
  76   25  228  301  28880
  77   24  231  305  29645
  78   23  234  309  30420
  79   22  237  313  31205
  80   21  240  317  32000
  81   20  243  321  32805
  82   19  246  325  33620
  83   18  249  329  34445
  84   17  252  333  35280
  85   16  255  337  36125
  86   15  258  341  36980
  87   14  261  345  37845
  88   13  264  349  38720
  89   12  267  353  39605
  90   11  270  357  40500
  91   10  273  361  41405
  92    9  276  365  42320
  93    8  279  369  43245
  94    7  282  373  44180
  95    6  285  377  45125
  96    5  288  381  46080
  97    4  291  385  47045
  98    3  294  389  48020
  99    2  297  393  49005
 100    1  300  397  50000
 
*******************************************/
