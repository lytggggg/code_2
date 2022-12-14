??# i f n d e f   F I L T E R I N G _ T E S T _ D A T A _ H  
 # d e f i n e   F I L T E R I N G _ T E S T _ D A T A _ H  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   I n c l u d e s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 # i n c l u d e   " a r r _ d e s c . h "  
 # i n c l u d e   " a r m _ m a t h . h "  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   M a c r o s   a n d   D e f i n e s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 # d e f i n e   F I L T E R I N G _ M A X _ B L O C K S I Z E     3 3  
 # d e f i n e   L M S _ M A X _ B L O C K S I Z E                 5 1 2  
 # d e f i n e   F I L T E R I N G _ M A X _ N U M T A P S 	 	 3 4  
 # d e f i n e   F I L T E R I N G _ M A X _ N U M S T A G E S     1 4  
 # d e f i n e   F I L T E R I N G _ M A X _ P O S T S H I F T     8  
 # d e f i n e   F I L T E R I N G _ M A X _ T A P _ D E L A Y 	 0 x F F  
 # d e f i n e   F I L T E R I N G _ M A X _ L 	 	 	 	 3  
 # d e f i n e   F I L T E R I N G _ M A X _ M 	 	 	 	 3 3  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   D e c l a r e   V a r i a b l e s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   I n p u t / O u t p u t   B u f f e r s   * /  
 e x t e r n   f l o a t 3 2 _ t   f i l t e r i n g _ o u t p u t _ f u t [ L M S _ M A X _ B L O C K S I Z E * 2 ] ;  
 e x t e r n   f l o a t 3 2 _ t   f i l t e r i n g _ o u t p u t _ r e f [ L M S _ M A X _ B L O C K S I Z E * 2 ] ;  
 e x t e r n   f l o a t 3 2 _ t   f i l t e r i n g _ o u t p u t _ f 3 2 _ f u t [ L M S _ M A X _ B L O C K S I Z E * 2 ] ;  
 e x t e r n   f l o a t 3 2 _ t   f i l t e r i n g _ o u t p u t _ f 3 2 _ r e f [ L M S _ M A X _ B L O C K S I Z E * 2 ] ;  
 e x t e r n   f l o a t 3 2 _ t   f i l t e r i n g _ i n p u t _ l m s [ L M S _ M A X _ B L O C K S I Z E * 2 ] ;  
 e x t e r n   f l o a t 3 2 _ t   f i l t e r i n g _ p S t a t e [ L M S _ M A X _ B L O C K S I Z E   +   F I L T E R I N G _ M A X _ N U M T A P S ] ;  
 e x t e r n   f l o a t 3 2 _ t   f i l t e r i n g _ s c r a t c h [ F I L T E R I N G _ M A X _ B L O C K S I Z E   *   3 ] ;  
 e x t e r n   f l o a t 3 2 _ t   f i l t e r i n g _ s c r a t c h 2 [ F I L T E R I N G _ M A X _ B L O C K S I Z E   *   3 ] ;  
 e x t e r n   f l o a t 3 2 _ t   f i l t e r i n g _ c o e f f s _ l m s [ F I L T E R I N G _ M A X _ N U M T A P S ] ;  
  
 e x t e r n   c o n s t   f l o a t 6 4 _ t   f i l t e r i n g _ f 6 4 _ i n p u t s [ F I L T E R I N G _ M A X _ B L O C K S I Z E   *   F I L T E R I N G _ M A X _ M   +   F I L T E R I N G _ M A X _ N U M T A P S ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   f i l t e r i n g _ f 3 2 _ i n p u t s [ F I L T E R I N G _ M A X _ B L O C K S I Z E   *   F I L T E R I N G _ M A X _ M   +   F I L T E R I N G _ M A X _ N U M T A P S ] ;  
 e x t e r n   c o n s t   q 3 1 _ t   f i l t e r i n g _ q 3 1 _ i n p u t s [ F I L T E R I N G _ M A X _ B L O C K S I Z E   *   F I L T E R I N G _ M A X _ M   +   F I L T E R I N G _ M A X _ N U M T A P S ] ;  
 e x t e r n   c o n s t   q 1 5 _ t   *   f i l t e r i n g _ q 1 5 _ i n p u t s ;  
 e x t e r n   c o n s t   q 7 _ t   *   f i l t e r i n g _ q 7 _ i n p u t s ;  
  
 / *   B l o c k   S i z e s   * /  
 A R R _ D E S C _ D E C L A R E ( f i l t e r i n g _ b l o c k s i z e s ) ;  
 A R R _ D E S C _ D E C L A R E ( l m s _ b l o c k s i z e s ) ;  
 A R R _ D E S C _ D E C L A R E ( f i l t e r i n g _ n u m t a p s ) ;  
 A R R _ D E S C _ D E C L A R E ( f i l t e r i n g _ n u m t a p s 2 ) ;  
 A R R _ D E S C _ D E C L A R E ( f i l t e r i n g _ p o s t s h i f t s ) ;  
 A R R _ D E S C _ D E C L A R E ( f i l t e r i n g _ n u m s t a g e s ) ;  
 A R R _ D E S C _ D E C L A R E ( f i l t e r i n g _ L s ) ;  
 A R R _ D E S C _ D E C L A R E ( f i l t e r i n g _ M s ) ;  
  
 / *   C o e f f i c i e n t   L i s t s   * /  
 e x t e r n   c o n s t   f l o a t 6 4 _ t   f i l t e r i n g _ c o e f f s _ f 6 4 [ F I L T E R I N G _ M A X _ N U M S T A G E S   *   6   +   2 ] ;  
 e x t e r n   c o n s t   f l o a t 6 4 _ t   f i l t e r i n g _ c o e f f s _ b _ f 6 4 [ F I L T E R I N G _ M A X _ N U M S T A G E S   *   6   +   2 ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   f i l t e r i n g _ c o e f f s _ f 3 2 [ F I L T E R I N G _ M A X _ N U M S T A G E S   *   6   +   2 ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   f i l t e r i n g _ c o e f f s _ b _ f 3 2 [ F I L T E R I N G _ M A X _ N U M S T A G E S   *   6   +   2 ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   * f i l t e r i n g _ c o e f f s _ c _ f 3 2 ;  
 e x t e r n   f l o a t 3 2 _ t   f i l t e r i n g _ c o e f f s _ l m s _ f 3 2 [ F I L T E R I N G _ M A X _ N U M T A P S ] ;  
 e x t e r n   c o n s t   q 3 1 _ t   f i l t e r i n g _ c o e f f s _ q 3 1 [ F I L T E R I N G _ M A X _ N U M S T A G E S   *   6   +   2 ] ;  
 e x t e r n   c o n s t   q 3 1 _ t   * f i l t e r i n g _ c o e f f s _ b _ q 3 1 ;  
 e x t e r n   c o n s t   q 3 1 _ t   * f i l t e r i n g _ c o e f f s _ c _ q 3 1 ;  
 e x t e r n   q 3 1 _ t   f i l t e r i n g _ c o e f f s _ l m s _ q 3 1 [ F I L T E R I N G _ M A X _ N U M T A P S ] ;  
 e x t e r n   c o n s t   q 1 5 _ t   f i l t e r i n g _ c o e f f s _ q 1 5 [ F I L T E R I N G _ M A X _ N U M S T A G E S   *   6   +   4 ] ;  
 e x t e r n   c o n s t   q 1 5 _ t   * f i l t e r i n g _ c o e f f s _ b _ q 1 5 ;  
 e x t e r n   c o n s t   q 1 5 _ t   * f i l t e r i n g _ c o e f f s _ c _ q 1 5 ;  
 e x t e r n   q 1 5 _ t   f i l t e r i n g _ c o e f f s _ l m s _ q 1 5 [ F I L T E R I N G _ M A X _ N U M T A P S ] ;  
 e x t e r n   c o n s t   q 7 _ t   f i l t e r i n g _ c o e f f s _ q 7 [ F I L T E R I N G _ M A X _ N U M S T A G E S   *   6   +   8 ] ;  
 e x t e r n   c o n s t   q 7 _ t   * f i l t e r i n g _ c o e f f s _ b _ q 7 ;  
 e x t e r n   c o n s t   q 7 _ t   * f i l t e r i n g _ c o e f f s _ c _ q 7 ;  
  
 / *   T a p   D e l a y   L i s t s   * /  
 e x t e r n   c o n s t   i n t 3 2 _ t   f i l t e r i n g _ t a p _ d e l a y [ F I L T E R I N G _ M A X _ N U M T A P S ] ;  
  
 / *   N u m b e r s   * /  
  
 / *   F l o a t   I n p u t s   * /  
  
 # e n d i f  