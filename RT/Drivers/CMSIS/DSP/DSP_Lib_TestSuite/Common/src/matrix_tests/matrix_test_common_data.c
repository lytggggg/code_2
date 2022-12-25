�?# i n c l u d e   " a r m _ m a t h . h "  
 # i n c l u d e   " m a t r i x _ t e s t _ d a t a . h "  
 # i n c l u d e   " t y p e _ a b b r e v . h "  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   I n p u t / O u t p u t   B u f f e r s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 M A T R I X _ T E S T _ B I G G E S T _ I N P U T _ T Y P E   m a t r i x _ o u t p u t _ f u t _ d a t a [ 2 * M A T R I X _ T E S T _ M A X _ E L T S ]   =   { 0 } ;  
 M A T R I X _ T E S T _ B I G G E S T _ I N P U T _ T Y P E   m a t r i x _ o u t p u t _ r e f _ d a t a [ 2 * M A T R I X _ T E S T _ M A X _ E L T S ]   =   { 0 } ;  
 M A T R I X _ T E S T _ B I G G E S T _ I N P U T _ T Y P E   m a t r i x _ o u t p u t _ s c r a t c h [ M A T R I X _ T E S T _ M A X _ E L T S ]   =   { 0 } ;  
  
 M A T R I X _ T E S T _ B I G G E S T _ I N P U T _ T Y P E   m a t r i x _ o u t p u t _ f 3 2 _ f u t [ M A T R I X _ T E S T _ M A X _ E L T S ] ;  
 M A T R I X _ T E S T _ B I G G E S T _ I N P U T _ T Y P E   m a t r i x _ o u t p u t _ f 3 2 _ r e f [ M A T R I X _ T E S T _ M A X _ E L T S ] ;  
  
 a r m _ m a t r i x _ i n s t a n c e _ f 3 2   m a t r i x _ o u t p u t _ f u t   =   {  
         0 ,  
         0 ,  
         ( f l o a t 3 2 _ t   * )   & m a t r i x _ o u t p u t _ f u t _ d a t a  
 } ;  
  
 a r m _ m a t r i x _ i n s t a n c e _ f 3 2   m a t r i x _ o u t p u t _ r e f   =   {  
         0 ,  
         0 ,  
         ( f l o a t 3 2 _ t   * )   & m a t r i x _ o u t p u t _ r e f _ d a t a  
 } ;  
  
 a r m _ m a t r i x _ i n s t a n c e _ f 6 4   m a t r i x _ o u t p u t _ f u t 6 4   =   {  
         0 ,  
         0 ,  
         ( f l o a t 6 4 _ t   * )   & m a t r i x _ o u t p u t _ f u t _ d a t a  
 } ;  
  
 a r m _ m a t r i x _ i n s t a n c e _ f 6 4   m a t r i x _ o u t p u t _ r e f 6 4   =   {  
         0 ,  
         0 ,  
         ( f l o a t 6 4 _ t   * )   & m a t r i x _ o u t p u t _ r e f _ d a t a  
 } ;  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   D a t a   B u c k e t s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *  
   *     P o o l   o f   r a n d o m   d a t a   t o   b a s e   m a t r i x   i n p u t s   f r o m .  
   * /  
 f l o a t 3 2 _ t   m a t r i x _ f 3 2 _ 1 0 0 _ r a n d [ 1 0 0 ]   =   {  
         - 4 5 . 0 3 4 5 5 6 9 6 7 4 2 5 8 ,     - 1 1 . 0 2 6 1 1 6 3 0 3 8 7 4 7 ,   - 1 4 . 6 8 4 1 4 2 8 7 7 7 9 2 9 ,  
         0 . 0 3 4 5 5 6 9 6 7 4 2 5 8 ,         - 1 1 . 0 2 6 1 1 6 3 0 3 8 7 4 7 ,   - 1 4 . 6 8 4 1 4 2 8 7 7 7 9 2 9 ,  
         - 2 0 . 3 6 7 9 1 9 4 3 9 2 2 2 7 ,     2 7 . 5 7 1 2 6 7 8 6 0 8 4 0 2 ,     - 1 2 . 1 3 9 0 6 1 7 3 3 9 7 3 2 ,  
         - 1 9 . 8 7 5 3 6 6 9 7 2 0 5 0 9 ,     4 2 . 3 3 7 9 6 4 2 1 0 3 2 4 4 ,     - 2 3 . 7 7 8 8 2 5 2 2 1 9 1 5 5 ,  
         - 2 3 . 7 5 1 7 7 6 5 3 0 1 6 6 7 ,     4 0 . 2 7 1 6 1 0 9 9 1 5 2 8 1 ,     - 2 5 . 8 3 0 8 7 1 4 0 8 6 1 6 7 ,  
         3 2 . 1 1 9 4 0 4 0 1 9 7 9 5 9 ,       2 4 . 4 6 9 2 8 0 7 0 7 4 1 5 6 ,     - 1 . 3 2 0 8 3 6 7 5 9 6 8 2 7 6 ,  
         3 1 . 1 5 8 0 4 5 8 2 8 2 4 7 7 ,       - 2 . 9 0 7 6 6 5 1 4 8 2 4 0 9 3 ,   - 6 . 9 7 9 2 6 0 8 6 7 0 4 1 6 0 ,  
         1 0 . 2 8 4 3 0 8 9 3 8 2 0 8 3 ,       3 0 . 1 0 1 4 6 2 2 7 6 9 7 3 9 ,     4 4 . 4 7 8 7 1 8 9 7 2 1 6 4 6 ,  
         - 9 . 6 0 8 7 8 5 4 4 1 1 8 8 5 3 ,     - 4 8 . 4 5 9 6 5 6 2 3 4 8 4 4 5 ,   - 3 1 . 1 0 4 4 9 8 4 9 6 7 4 5 6 ,  
         - 6 . 4 1 4 1 4 1 1 4 1 9 0 8 0 9 ,     3 . 2 8 2 5 5 8 8 7 9 9 4 5 4 9 ,     - 2 6 . 9 5 1 1 8 3 9 7 8 8 4 4 2 ,  
         - 3 1 . 5 1 8 3 6 7 9 8 7 5 8 6 4 ,     2 1 . 1 2 1 5 7 8 0 4 3 3 6 8 3 ,     - 4 7 . 0 7 7 9 7 2 2 4 3 7 8 5 4 ,  
         - 0 . 9 1 3 5 9 0 7 5 3 1 9 2 0 0 6 ,   - 4 0 . 3 5 4 5 4 7 4 8 3 1 6 1 1 ,   - 4 5 . 6 9 7 6 1 9 8 3 4 2 1 9 2 ,  
         1 8 . 6 7 7 5 4 3 3 3 6 5 3 1 5 ,       - 5 . 3 2 1 6 2 5 0 5 7 0 1 9 3 8 ,   - 1 4 . 9 2 7 2 8 9 6 4 2 3 1 1 7 ,  
         3 4 . 4 3 0 8 7 9 2 6 9 5 3 8 9 ,       4 0 . 4 8 8 0 9 6 8 6 7 9 8 9 3 ,     - 2 7 . 8 2 5 3 2 6 5 9 8 2 7 6 0 ,  
         4 2 . 8 8 5 4 1 3 9 4 7 8 0 4 5 ,       - 1 . 0 7 4 7 3 6 1 5 9 9 9 8 1 1 ,   - 3 6 . 8 0 2 6 7 0 7 3 9 3 6 6 5 ,  
         - 3 3 . 1 0 0 9 9 7 0 5 3 7 2 9 6 ,     - 3 1 . 6 4 8 8 8 4 4 2 6 2 7 3 0 ,   - 1 9 . 3 6 5 0 5 2 7 9 8 3 4 4 3 ,  
         4 3 . 9 0 0 1 5 6 1 9 9 9 8 8 7 ,       - 3 0 . 5 2 3 5 7 1 0 4 3 2 9 5 1 ,   4 7 . 9 7 4 8 3 7 8 3 5 6 0 8 5 ,  
         - 3 8 . 2 5 8 2 3 4 9 1 4 4 1 9 4 ,     2 3 . 0 3 3 0 8 6 2 8 5 5 4 5 3 ,     - 1 6 . 2 2 8 0 5 9 0 1 7 8 6 2 3 ,  
         4 4 . 2 0 5 0 5 9 0 7 7 5 4 8 5 ,       1 4 . 9 1 1 5 4 7 4 9 5 6 4 5 2 ,     - 1 3 . 1 5 1 5 4 0 3 5 0 9 6 6 4 ,  
         0 . 8 5 0 8 6 5 5 3 8 1 1 2 7 0 0 ,     3 7 . 5 9 4 2 8 1 1 4 9 2 9 8 4 ,     - 2 7 . 4 0 7 8 2 1 9 0 2 7 6 0 1 ,  
         - 6 . 1 1 3 0 0 2 6 8 7 3 8 9 6 8 ,     - 2 0 . 3 3 2 4 1 2 6 7 8 1 6 7 3 ,   - 1 . 1 3 9 1 0 2 6 1 9 6 4 2 0 9 ,  
         4 0 . 0 0 5 3 8 4 6 4 1 7 6 6 2 ,       4 5 . 6 1 3 4 5 4 0 2 2 9 8 0 2 ,     2 3 . 1 7 2 2 3 8 5 6 5 8 6 7 0 ,  
         1 2 . 5 6 1 8 5 6 0 7 2 9 6 9 0 ,       1 . 0 7 7 1 5 6 4 1 7 2 1 0 9 7 ,     5 . 0 1 5 6 3 4 2 8 9 8 4 2 2 2 ,  
         - 3 2 . 9 2 9 1 9 5 2 8 5 2 1 4 1 ,     - 3 8 . 8 8 8 0 7 7 6 5 5 9 4 0 1 ,   - 1 8 . 1 2 2 1 6 9 8 0 7 4 1 1 8 ,  
         7 . 8 5 2 5 0 6 1 0 2 3 4 3 8 9 ,       - 1 3 . 0 7 5 3 2 1 8 8 7 9 7 8 5 ,   7 . 5 2 0 8 5 9 5 0 7 8 4 6 5 6 ,  
         1 4 . 7 7 4 5 9 6 3 1 3 6 3 0 7 ,       2 8 . 0 2 2 7 4 3 5 1 5 1 3 7 7 ,     3 1 . 7 6 2 7 7 0 8 3 2 2 2 6 2 ,  
         1 2 . 2 4 7 5 0 8 6 0 0 1 2 2 7 ,       - 2 7 . 2 3 3 5 7 0 2 1 8 3 4 4 7 ,   - 2 4 . 1 9 3 5 3 0 4 0 8 7 9 3 3 ,  
         - 7 . 5 8 3 3 2 4 0 2 8 6 1 9 2 8 ,     - 2 6 . 2 7 1 6 4 2 0 2 2 8 4 7 9 ,   - 3 8 . 8 7 9 7 2 4 4 7 0 6 2 1 3 ,  
         - 4 4 . 0 2 2 0 4 5 7 0 5 2 8 4 4 ,     - 4 . 9 0 7 6 2 9 3 5 6 9 0 5 5 1 ,   - 4 1 . 8 8 7 4 2 3 1 1 3 4 2 1 5 ,  
         2 9 . 4 8 3 1 4 1 6 8 8 3 4 5 3 ,       8 . 7 0 4 4 7 0 4 5 3 1 4 1 6 8 ,     - 6 . 4 3 0 1 3 1 5 8 9 6 1 0 0 9 ,  
         - 9 . 1 2 8 0 1 5 3 8 8 7 4 4 7 9 ,     0 . 7 8 5 8 2 8 4 6 6 1 1 1 8 1 5 ,   - 4 . 1 1 5 1 1 7 1 8 2 0 0 6 8 9 ,  
         2 8 . 0 2 5 2 0 6 8 3 2 1 1 3 8 ,       - 2 6 . 5 2 2 0 0 8 6 6 2 7 5 9 4 ,   4 . 7 0 0 8 8 9 2 2 8 6 3 4 5 0 ,  
         4 2 . 9 3 8 5 9 7 0 9 6 8 7 3 0 ,       1 4 . 4 3 1 8 1 3 0 1 9 3 6 9 2 ,     - 2 9 . 2 2 5 7 7 0 7 2 6 6 9 7 2 ,  
         4 6 . 3 0 8 8 5 3 9 2 8 6 9 1 3  
 } ;  
  
 f l o a t 6 4 _ t   m a t r i x _ f 6 4 _ 1 0 0 _ r a n d [ 1 0 0 ]   =   {  
         - 4 5 . 0 3 4 5 5 6 9 6 7 4 2 5 8 ,     - 1 1 . 0 2 6 1 1 6 3 0 3 8 7 4 7 ,   - 1 4 . 6 8 4 1 4 2 8 7 7 7 9 2 9 ,  
         0 . 0 3 4 5 5 6 9 6 7 4 2 5 8 ,         - 1 1 . 0 2 6 1 1 6 3 0 3 8 7 4 7 ,   - 1 4 . 6 8 4 1 4 2 8 7 7 7 9 2 9 ,  
         - 2 0 . 3 6 7 9 1 9 4 3 9 2 2 2 7 ,     2 7 . 5 7 1 2 6 7 8 6 0 8 4 0 2 ,     - 1 2 . 1 3 9 0 6 1 7 3 3 9 7 3 2 ,  
         - 1 9 . 8 7 5 3 6 6 9 7 2 0 5 0 9 ,     4 2 . 3 3 7 9 6 4 2 1 0 3 2 4 4 ,     - 2 3 . 7 7 8 8 2 5 2 2 1 9 1 5 5 ,  
         - 2 3 . 7 5 1 7 7 6 5 3 0 1 6 6 7 ,     4 0 . 2 7 1 6 1 0 9 9 1 5 2 8 1 ,     - 2 5 . 8 3 0 8 7 1 4 0 8 6 1 6 7 ,  
         3 2 . 1 1 9 4 0 4 0 1 9 7 9 5 9 ,       2 4 . 4 6 9 2 8 0 7 0 7 4 1 5 6 ,     - 1 . 3 2 0 8 3 6 7 5 9 6 8 2 7 6 ,  
         3 1 . 1 5 8 0 4 5 8 2 8 2 4 7 7 ,       - 2 . 9 0 7 6 6 5 1 4 8 2 4 0 9 3 ,   - 6 . 9 7 9 2 6 0 8 6 7 0 4 1 6 0 ,  
         1 0 . 2 8 4 3 0 8 9 3 8 2 0 8 3 ,       3 0 . 1 0 1 4 6 2 2 7 6 9 7 3 9 ,     4 4 . 4 7 8 7 1 8 9 7 2 1 6 4 6 ,  
         - 9 . 6 0 8 7 8 5 4 4 1 1 8 8 5 3 ,     - 4 8 . 4 5 9 6 5 6 2 3 4 8 4 4 5 ,   - 3 1 . 1 0 4 4 9 8 4 9 6 7 4 5 6 ,  
         - 6 . 4 1 4 1 4 1 1 4 1 9 0 8 0 9 ,     3 . 2 8 2 5 5 8 8 7 9 9 4 5 4 9 ,     - 2 6 . 9 5 1 1 8 3 9 7 8 8 4 4 2 ,  
         - 3 1 . 5 1 8 3 6 7 9 8 7 5 8 6 4 ,     2 1 . 1 2 1 5 7 8 0 4 3 3 6 8 3 ,     - 4 7 . 0 7 7 9 7 2 2 4 3 7 8 5 4 ,  
         - 0 . 9 1 3 5 9 0 7 5 3 1 9 2 0 0 6 ,   - 4 0 . 3 5 4 5 4 7 4 8 3 1 6 1 1 ,   - 4 5 . 6 9 7 6 1 9 8 3 4 2 1 9 2 ,  
         1 8 . 6 7 7 5 4 3 3 3 6 5 3 1 5 ,       - 5 . 3 2 1 6 2 5 0 5 7 0 1 9 3 8 ,   - 1 4 . 9 2 7 2 8 9 6 4 2 3 1 1 7 ,  
         3 4 . 4 3 0 8 7 9 2 6 9 5 3 8 9 ,       4 0 . 4 8 8 0 9 6 8 6 7 9 8 9 3 ,     - 2 7 . 8 2 5 3 2 6 5 9 8 2 7 6 0 ,  
         4 2 . 8 8 5 4 1 3 9 4 7 8 0 4 5 ,       - 1 . 0 7 4 7 3 6 1 5 9 9 9 8 1 1 ,   - 3 6 . 8 0 2 6 7 0 7 3 9 3 6 6 5 ,  
         - 3 3 . 1 0 0 9 9 7 0 5 3 7 2 9 6 ,     - 3 1 . 6 4 8 8 8 4 4 2 6 2 7 3 0 ,   - 1 9 . 3 6 5 0 5 2 7 9 8 3 4 4 3 ,  
         4 3 . 9 0 0 1 5 6 1 9 9 9 8 8 7 ,       - 3 0 . 5 2 3 5 7 1 0 4 3 2 9 5 1 ,   4 7 . 9 7 4 8 3 7 8 3 5 6 0 8 5 ,  
         - 3 8 . 2 5 8 2 3 4 9 1 4 4 1 9 4 ,     2 3 . 0 3 3 0 8 6 2 8 5 5 4 5 3 ,     - 1 6 . 2 2 8 0 5 9 0 1 7 8 6 2 3 ,  
         4 4 . 2 0 5 0 5 9 0 7 7 5 4 8 5 ,       1 4 . 9 1 1 5 4 7 4 9 5 6 4 5 2 ,     - 1 3 . 1 5 1 5 4 0 3 5 0 9 6 6 4 ,  
         0 . 8 5 0 8 6 5 5 3 8 1 1 2 7 0 0 ,     3 7 . 5 9 4 2 8 1 1 4 9 2 9 8 4 ,     - 2 7 . 4 0 7 8 2 1 9 0 2 7 6 0 1 ,  
         - 6 . 1 1 3 0 0 2 6 8 7 3 8 9 6 8 ,     - 2 0 . 3 3 2 4 1 2 6 7 8 1 6 7 3 ,   - 1 . 1 3 9 1 0 2 6 1 9 6 4 2 0 9 ,  
         4 0 . 0 0 5 3 8 4 6 4 1 7 6 6 2 ,       4 5 . 6 1 3 4 5 4 0 2 2 9 8 0 2 ,     2 3 . 1 7 2 2 3 8 5 6 5 8 6 7 0 ,  
         1 2 . 5 6 1 8 5 6 0 7 2 9 6 9 0 ,       1 . 0 7 7 1 5 6 4 1 7 2 1 0 9 7 ,     5 . 0 1 5 6 3 4 2 8 9 8 4 2 2 2 ,  
         - 3 2 . 9 2 9 1 9 5 2 8 5 2 1 4 1 ,     - 3 8 . 8 8 8 0 7 7 6 5 5 9 4 0 1 ,   - 1 8 . 1 2 2 1 6 9 8 0 7 4 1 1 8 ,  
         7 . 8 5 2 5 0 6 1 0 2 3 4 3 8 9 ,       - 1 3 . 0 7 5 3 2 1 8 8 7 9 7 8 5 ,   7 . 5 2 0 8 5 9 5 0 7 8 4 6 5 6 ,  
         1 4 . 7 7 4 5 9 6 3 1 3 6 3 0 7 ,       2 8 . 0 2 2 7 4 3 5 1 5 1 3 7 7 ,     3 1 . 7 6 2 7 7 0 8 3 2 2 2 6 2 ,  
         1 2 . 2 4 7 5 0 8 6 0 0 1 2 2 7 ,       - 2 7 . 2 3 3 5 7 0 2 1 8 3 4 4 7 ,   - 2 4 . 1 9 3 5 3 0 4 0 8 7 9 3 3 ,  
         - 7 . 5 8 3 3 2 4 0 2 8 6 1 9 2 8 ,     - 2 6 . 2 7 1 6 4 2 0 2 2 8 4 7 9 ,   - 3 8 . 8 7 9 7 2 4 4 7 0 6 2 1 3 ,  
         - 4 4 . 0 2 2 0 4 5 7 0 5 2 8 4 4 ,     - 4 . 9 0 7 6 2 9 3 5 6 9 0 5 5 1 ,   - 4 1 . 8 8 7 4 2 3 1 1 3 4 2 1 5 ,  
         2 9 . 4 8 3 1 4 1 6 8 8 3 4 5 3 ,       8 . 7 0 4 4 7 0 4 5 3 1 4 1 6 8 ,     - 6 . 4 3 0 1 3 1 5 8 9 6 1 0 0 9 ,  
         - 9 . 1 2 8 0 1 5 3 8 8 7 4 4 7 9 ,     0 . 7 8 5 8 2 8 4 6 6 1 1 1 8 1 5 ,   - 4 . 1 1 5 1 1 7 1 8 2 0 0 6 8 9 ,  
         2 8 . 0 2 5 2 0 6 8 3 2 1 1 3 8 ,       - 2 6 . 5 2 2 0 0 8 6 6 2 7 5 9 4 ,   4 . 7 0 0 8 8 9 2 2 8 6 3 4 5 0 ,  
         4 2 . 9 3 8 5 9 7 0 9 6 8 7 3 0 ,       1 4 . 4 3 1 8 1 3 0 1 9 3 6 9 2 ,     - 2 9 . 2 2 5 7 7 0 7 2 6 6 9 7 2 ,  
         4 6 . 3 0 8 8 5 3 9 2 8 6 9 1 3  
 } ;  
  
 M A T R I X _ T E S T _ B I G G E S T _ I N P U T _ T Y P E   m a t r i x _ z e r o s [ M A T R I X _ T E S T _ M A X _ E L T S ]   =   { 0 } ;  
  
 c o n s t   f l o a t 3 2 _ t   m a t r i x _ f 3 2 _ s c a l e _ v a l u e s [ M A T R I X _ M A X _ C O E F F S _ L E N ]   =  
 {  
                 4 3 . 0 2 6 4 2 7 5 6 3 9     ,   - 1 7 . 0 5 2 5 2 1 5 5 7 0   ,   - 9 4 . 8 4 8 8 9 7 3 9 1 0   ,   - 8 . 1 9 2 4 9 8 9 5 8 0     ,  
                 7 . 2 8 3 0 3 2 6 0 9 1       ,   6 6 . 8 3 6 8 7 1 9 3 1 4     ,   3 3 . 9 7 7 8 1 9 0 6 7 1     ,   1 1 7 . 8 6 5 2 2 8 9 7 7 2   ,  
                 - 1 2 9 . 6 0 7 7 7 9 7 4 6 5 ,   - 1 4 . 6 4 2 0 8 1 5 3 6 8   ,   1 8 . 0 2 3 9 2 2 3 2 7 8     ,   1 . 0 0 0 0 0 0 0 0 0 0       ,  
                 5 5 . 0 3 7 5 0 3 7 6 5 1     ,   1 . 8 6 7 4 6 0 9 8 6 2       ,   0 . 0 0 0 0 0 0 0 0 0 0 0     ,   - 3 3 . 5 7 5 0 3 6 4 9 0 9  
 } ;  
  
 c o n s t   q 3 1 _ t   m a t r i x _ q 3 1 _ s c a l e _ v a l u e s [ M A T R I X _ M A X _ C O E F F S _ L E N ]   =  
 {  
         0 x 0 2 0 1 D C 9 0 ,   0 x 2 1 1 F 0 D 7 C ,   0 x 8 0 0 0 0 0 0 0 ,   0 x F 5 7 3 B 8 2 4 ,  
         0 x E 8 5 E D 0 5 B ,   0 x 3 1 1 D F B 5 2 ,   0 x 3 5 2 9 E 7 5 0 ,   0 x 0 0 0 0 0 0 0 0 ,  
         0 x 7 F F F F F F F ,   0 x 2 1 F A 5 2 5 A ,   0 x 0 9 7 1 F D 4 5 ,   0 x 0 5 5 4 7 B 6 8 ,  
         0 x 2 7 0 C 6 3 6 6 ,   0 x 0 6 F D D 5 A 6 ,   0 x F 7 0 2 5 3 1 5 ,   0 x B 1 1 5 5 A 1 E  
 } ;  
  
 c o n s t   q 1 5 _ t   m a t r i x _ q 1 5 _ s c a l e _ v a l u e s [ M A T R I X _ M A X _ C O E F F S _ L E N ]   =  
 {  
         0 x 0 2 0 1 ,   0 x 2 1 1 F ,   0 x 8 0 0 0 ,   0 x F 5 7 3 ,  
         0 x E 8 5 E ,   0 x 3 1 1 D ,   0 x 3 5 2 9 ,   0 x 0 0 0 0 ,  
         0 x 7 F F F ,   0 x 2 1 F A ,   0 x 0 9 7 1 ,   0 x 0 5 5 4 ,  
         0 x 2 7 0 C ,   0 x 0 6 F D ,   0 x F 7 0 2 ,   0 x B 1 1 5  
 } ;  
  
 c o n s t   i n t 3 2 _ t   m a t r i x _ s h i f t _ v a l u e s [ M A T R I X _ M A X _ S H I F T S _ L E N ]   =  
 {  
         - 1 6 ,   - 7 ,   0 ,   7 ,   1 6  
 } ;  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   M a t r i x   D e f i n i t i o n s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *  
   *     D e f i n e   m a t r i c e s   b y   s u f f i x   ( f 3 2 ,   q 3 1 ,   q 1 5 )   f o r   u s e   i n   t e s t   c a s e s .  
   *  
   *     T h e   r a n d 1   a n d   r a n d 2   s u f f i x e s   g e t   t h e i r   d a t a   f r o m   t h e   s a m e   p o o l   o f   r a n d o m  
   *     d a t a ,   b u t   t h e i r   s t a r t i n g   p o i n t s   d i f f e r   b y   1   e l e m e n t .  
   *  
   *     M a k e s   a v a i l a b l e :  
   *     -   m a t r i x _ ` s u f f i x ` _ 1 x 1 _ r a n d 1 / 2  
   *     -   m a t r i x _ ` s u f f i x ` _ 1 x 4 _ r a n d 1 / 2  
   *     -   m a t r i x _ ` s u f f i x ` _ 2 x 4 _ r a n d 1 / 2  
   *     -   m a t r i x _ ` s u f f i x ` _ 4 x 4 _ r a n d 1 / 2  
   * /  
 # d e f i n e   M A T R I X _ D E F I N E _ M A T R I C E S ( s u f f i x )                                                             \  
         a r m _ m a t r i x _ i n s t a n c e _ # # s u f f i x   m a t r i x _ # # s u f f i x # # _ 1 x 1 _ r a n d 1   =             \  
                 { 1 ,   1 ,   ( T Y P E _ F R O M _ A B B R E V ( s u f f i x )   * )   m a t r i x _ f 3 2 _ 1 0 0 _ r a n d   } ;     \  
         a r m _ m a t r i x _ i n s t a n c e _ # # s u f f i x   m a t r i x _ # # s u f f i x # # _ 1 x 1 _ r a n d 2   =             \  
                 { 1 ,   1 ,   ( T Y P E _ F R O M _ A B B R E V ( s u f f i x )   * )   ( m a t r i x _ f 3 2 _ 1 0 0 _ r a n d + 1 ) } ;   \  
         a r m _ m a t r i x _ i n s t a n c e _ # # s u f f i x   m a t r i x _ # # s u f f i x # # _ 1 x 1 _ z e r o s   =             \  
                 { 1 ,   1 ,   ( T Y P E _ F R O M _ A B B R E V ( s u f f i x )   * )   m a t r i x _ z e r o s } ;                     \  
                                                                                                                                         \  
         a r m _ m a t r i x _ i n s t a n c e _ # # s u f f i x   m a t r i x _ # # s u f f i x # # _ 1 x 4 _ r a n d 1   =             \  
                 { 1 ,   4 ,   ( T Y P E _ F R O M _ A B B R E V ( s u f f i x )   * )   m a t r i x _ f 3 2 _ 1 0 0 _ r a n d   } ;     \  
         a r m _ m a t r i x _ i n s t a n c e _ # # s u f f i x   m a t r i x _ # # s u f f i x # # _ 1 x 4 _ r a n d 2   =             \  
                 { 1 ,   4 ,   ( T Y P E _ F R O M _ A B B R E V ( s u f f i x )   * )   ( m a t r i x _ f 3 2 _ 1 0 0 _ r a n d + 1 ) } ;   \  
         a r m _ m a t r i x _ i n s t a n c e _ # # s u f f i x   m a t r i x _ # # s u f f i x # # _ 1 x 4 _ z e r o s   =             \  
                 { 1 ,   4 ,   ( T Y P E _ F R O M _ A B B R E V ( s u f f i x )   * )   m a t r i x _ z e r o s } ;                     \  
                                                                                                                                         \  
         a r m _ m a t r i x _ i n s t a n c e _ # # s u f f i x   m a t r i x _ # # s u f f i x # # _ 2 x 4 _ r a n d 1   =             \  
                 { 2 ,   4 ,   ( T Y P E _ F R O M _ A B B R E V ( s u f f i x )   * )   m a t r i x _ f 3 2 _ 1 0 0 _ r a n d   } ;     \  
         a r m _ m a t r i x _ i n s t a n c e _ # # s u f f i x   m a t r i x _ # # s u f f i x # # _ 2 x 4 _ r a n d 2   =             \  
                 { 2 ,   4 ,   ( T Y P E _ F R O M _ A B B R E V ( s u f f i x )   * )   ( m a t r i x _ f 3 2 _ 1 0 0 _ r a n d + 1 ) } ;   \  
         a r m _ m a t r i x _ i n s t a n c e _ # # s u f f i x   m a t r i x _ # # s u f f i x # # _ 2 x 4 _ z e r o s   =             \  
                 { 2 ,   4 ,   ( T Y P E _ F R O M _ A B B R E V ( s u f f i x )   * )   m a t r i x _ z e r o s } ;                     \  
                                                                                                                                         \  
         a r m _ m a t r i x _ i n s t a n c e _ # # s u f f i x   m a t r i x _ # # s u f f i x # # _ 4 x 4 _ r a n d 1   =             \  
                 { 4 ,   4 ,   ( T Y P E _ F R O M _ A B B R E V ( s u f f i x )   * )   m a t r i x _ f 3 2 _ 1 0 0 _ r a n d   } ;     \  
         a r m _ m a t r i x _ i n s t a n c e _ # # s u f f i x   m a t r i x _ # # s u f f i x # # _ 4 x 4 _ r a n d 2   =             \  
                 { 4 ,   4 ,   ( T Y P E _ F R O M _ A B B R E V ( s u f f i x )   * )   ( m a t r i x _ f 3 2 _ 1 0 0 _ r a n d + 1 ) } ;   \  
         a r m _ m a t r i x _ i n s t a n c e _ # # s u f f i x   m a t r i x _ # # s u f f i x # # _ 4 x 4 _ z e r o s   =             \  
                 { 4 ,   4 ,   ( T Y P E _ F R O M _ A B B R E V ( s u f f i x )   * )   m a t r i x _ z e r o s }  
  
 M A T R I X _ D E F I N E _ M A T R I C E S ( f 6 4 ) ;  
 M A T R I X _ D E F I N E _ M A T R I C E S ( f 3 2 ) ;  
 M A T R I X _ D E F I N E _ M A T R I C E S ( q 3 1 ) ;  
 M A T R I X _ D E F I N E _ M A T R I C E S ( q 1 5 ) ;  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   M a t r i x - I n p u t   A r r a y s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   D e f i n e   I n p u t   # A R R _ D E S C _ t   b y   s u f f i x .  
   *  
   *   T a k i n g   i n p u t s   i n   p a r a l l e l   f r o m   t h e   ' a '   a n d   ' b '   a r r a y s   y i e l d s   t h e   f o l l o w i n g  
   *   t e s t   c a s e s :  
   *   -   1 x 1   m u l t i p l i c a t i o n   b y   z e r o  
   *   -   1 x 1   m u l t i p l i c a t i o n   b e t w e e n   r a n d o m   n u m b e r s  
   *   -   1 x 1   *   1 x 4   v a l i d   d i m e n s i o n   i n t e r a c t i o n  
   *   -   1 x 1   *   2 x 4   i n v a l i d   d i m e n s i o n   i n t e r a c t i o n  
   *   -   2 x 4   *   4 x 4   l a r g e r   v a l i d   d i m e n s i o n   i n t e r a c t i o n  
   *   -   4 x 4   *   4 x 4   l a r g e r   v a l i d   d i m e n s i o n   i n t e r a c t i o n  
   * /  
 # d e f i n e   M A T R I X _ D E F I N E _ I N P U T S ( s u f f i x )                                                 \  
         A R R _ D E S C _ D E F I N E ( a r m _ m a t r i x _ i n s t a n c e _ # # s u f f i x   * ,                   \  
                                         m a t r i x _ # # s u f f i x # # _ a _ i n p u t s ,                           \  
                                         6 ,                                                                             \  
                                         C U R L Y (                                                                     \  
                                                 & m a t r i x _ # # s u f f i x # # _ 1 x 1 _ r a n d 1 ,               \  
                                                 & m a t r i x _ # # s u f f i x # # _ 1 x 1 _ r a n d 1 ,               \  
                                                 & m a t r i x _ # # s u f f i x # # _ 1 x 1 _ r a n d 1 ,               \  
                                                 & m a t r i x _ # # s u f f i x # # _ 1 x 1 _ r a n d 1 ,               \  
                                                 & m a t r i x _ # # s u f f i x # # _ 2 x 4 _ r a n d 1 ,               \  
                                                 & m a t r i x _ # # s u f f i x # # _ 4 x 4 _ r a n d 1                 \  
                                                 ) ) ;                                                                   \  
                                                                                                                         \  
         A R R _ D E S C _ D E F I N E ( a r m _ m a t r i x _ i n s t a n c e _ # # s u f f i x   * ,                   \  
                                         m a t r i x _ # # s u f f i x # # _ b _ i n p u t s ,                           \  
                                         6 ,                                                                             \  
                                         C U R L Y (                                                                     \  
                                                 & m a t r i x _ # # s u f f i x # # _ 1 x 1 _ z e r o s ,               \  
                                                 & m a t r i x _ # # s u f f i x # # _ 1 x 1 _ r a n d 2 ,               \  
                                                 & m a t r i x _ # # s u f f i x # # _ 1 x 4 _ r a n d 2 ,               \  
                                                 & m a t r i x _ # # s u f f i x # # _ 2 x 4 _ r a n d 2 ,               \  
                                                 & m a t r i x _ # # s u f f i x # # _ 4 x 4 _ r a n d 2 ,               \  
                                                 & m a t r i x _ # # s u f f i x # # _ 4 x 4 _ r a n d 2                 \  
                                                 ) ) ;                                                                   \  
                                                                                                                         \  
         A R R _ D E S C _ D E F I N E ( a r m _ m a t r i x _ i n s t a n c e _ # # s u f f i x   * ,                   \  
                                         m a t r i x _ # # s u f f i x # # _ i n v e r t i b l e _ i n p u t s ,         \  
                                         4 ,                                                                             \  
                                         C U R L Y (                                                                     \  
                                                 & m a t r i x _ # # s u f f i x # # _ 1 x 1 _ r a n d 1 ,               \  
                                                 & m a t r i x _ # # s u f f i x # # _ 1 x 1 _ r a n d 2 ,               \  
                                                 & m a t r i x _ # # s u f f i x # # _ 4 x 4 _ r a n d 1 ,               \  
                                                 & m a t r i x _ # # s u f f i x # # _ 4 x 4 _ r a n d 2                 \  
                                                 ) )                                                                     \  
  
 M A T R I X _ D E F I N E _ I N P U T S ( f 6 4 ) ;  
 M A T R I X _ D E F I N E _ I N P U T S ( f 3 2 ) ;  
 M A T R I X _ D E F I N E _ I N P U T S ( q 3 1 ) ;  
 M A T R I X _ D E F I N E _ I N P U T S ( q 1 5 ) ;  