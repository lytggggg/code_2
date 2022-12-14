??# i n c l u d e   " j t e s t . h "  
 # i n c l u d e   " r e f . h "  
 # i n c l u d e   " a r r _ d e s c . h "  
 # i n c l u d e   " t r a n s f o r m _ t e m p l a t e s . h "  
 # i n c l u d e   " t r a n s f o r m _ t e s t _ d a t a . h "  
 # i n c l u d e   " t y p e _ a b b r e v . h "  
  
 / *  
     F F T   f u n c t i o n   t e s t   t e m p l a t e .   A r g u m e n t s   a r e :   f u n c t i o n   s u f f i x   ( q 7 / q 1 5 / q 3 1 / f 3 2 )  
     f u n c t i o n   c o n f i g u r a t i o n   s u f f i x   ( s a m e   a s   f u n c t i o n   s u f f i x ) ,   i n v e r s e - t r a n s f o r m   f l a g ,  
     i n p u t   a n d   o u t p u t   t y p e   ( b o t h   q 7 _ t / q 1 5 _ t / q 3 1 _ t / f l o a t 3 2 _ t )  
 * /  
 # d e f i n e   R F F T _ D E F I N E _ T E S T ( s u f f i x ,   c o n f i g _ s u f f i x ,                                                   \  
                                                   i f f t _ f l a g ,   i n p u t _ t y p e ,   o u t p u t _ t y p e )                         \  
         J T E S T _ D E F I N E _ T E S T ( a r m _ r f f t _ # # s u f f i x # # _ # # c o n f i g _ s u f f i x # # _ t e s t ,               \  
                                             a r m _ r f f t _ # # s u f f i x )                                                                 \  
         {                                                                                                                                       \  
                 C O N C A T ( a r m _ r f f t _ i n s t a n c e _ ,   s u f f i x )   r f f t _ i n s t _ f u t   =   { 0 } ;                   \  
                 C O N C A T ( a r m _ r f f t _ i n s t a n c e _ ,   s u f f i x )   r f f t _ i n s t _ r e f   =   { 0 } ;                   \  
                                                                                                                                                 \  
                 / *   G o   t h r o u g h   a l l   a r m _ r f f t   l e n g t h s   * /                                                       \  
                 T E M P L A T E _ D O _ A R R _ D E S C (                                                                                       \  
                         f f t l e n _ i d x ,   u i n t 1 6 _ t ,   f f t l e n ,   t r a n s f o r m _ r f f t _ f f t l e n s                 \  
                         ,                                                                                                                       \  
                                                                                                                                                 \  
                         / *   I n i t i a l i z e   t h e   R F F T   a n d   C F F T   I n s t a n c e s   * /                                 \  
                         a r m _ r f f t _ i n i t _ # # s u f f i x (                                                                           \  
                                 & r f f t _ i n s t _ f u t ,                                                                                   \  
                                 ( u i n t 3 2 _ t )   f f t l e n ,   i f f t _ f l a g ,   1 U ) ;                                             \  
                                                                                                                                                 \  
                         a r m _ r f f t _ i n i t _ # # s u f f i x (                                                                           \  
                                 & r f f t _ i n s t _ r e f ,                                                                                   \  
                                 ( u i n t 3 2 _ t )   f f t l e n ,   i f f t _ f l a g ,   1 U ) ;                                             \  
                                                                                                                                                 \  
                         i f   ( i f f t _ f l a g )                                                                                               \  
                         {                                                                                                                       \  
                               T R A N S F O R M _ P R E P A R E _ I N V E R S E _ I N P U T S (                                                 \  
                                       t r a n s f o r m _ f f t _ # # s u f f i x # # _ i n p u t s ,                                           \  
                                       f f t l e n ,   i n p u t _ t y p e ,                                                                     \  
                                       f f t l e n   *                                                                                           \  
                                       s i z e o f ( i n p u t _ t y p e ) ) ;                                                                   \  
                         }                                                                                                                       \  
                         e l s e                                                                                                                 \  
                         {                                                                                                                       \  
                               T R A N S F O R M _ C O P Y _ I N P U T S (                                                                       \  
                                       t r a n s f o r m _ f f t _ # # s u f f i x # # _ i n p u t s ,                                           \  
                                       f f t l e n   *                                                                                           \  
                                       s i z e o f ( i n p u t _ t y p e ) ) ;                                                                   \  
                         }                                                                                                                       \  
                                                                                                                                                 \  
                         / *   D i s p l a y   p a r a m e t e r   v a l u e s   * /                                                             \  
                         J T E S T _ D U M P _ S T R F ( " B l o c k   S i z e :   % d \ n "                                                     \  
                                                         " I n v e r s e - t r a n s f o r m   f l a g :   % d \ n " ,                           \  
                                                   ( i n t ) f f t l e n ,                                                                       \  
                                                   ( i n t ) i f f t _ f l a g ) ;                                                               \  
                                                                                                                                                 \  
                         / *   D i s p l a y   c y c l e   c o u n t   a n d   r u n   t e s t   * /                                             \  
                         J T E S T _ C O U N T _ C Y C L E S (                                                                                   \  
                                 a r m _ r f f t _ # # s u f f i x (                                                                             \  
                                         & r f f t _ i n s t _ f u t ,                                                                           \  
                                         ( v o i d   * )   t r a n s f o r m _ f f t _ i n p u t _ f u t ,                                       \  
                                         ( v o i d   * )   t r a n s f o r m _ f f t _ o u t p u t _ f u t ) ) ;                                 \  
                                                                                                                                                 \  
                         r e f _ r f f t _ # # s u f f i x (                                                                                     \  
                                 & r f f t _ i n s t _ r e f ,                                                                                   \  
                                 ( v o i d   * )   t r a n s f o r m _ f f t _ i n p u t _ r e f ,                                               \  
                                 ( v o i d   * )   t r a n s f o r m _ f f t _ o u t p u t _ r e f ) ;                                           \  
                                                                                                                                                 \  
                         / *   T e s t   c o r r e c t n e s s   * /                                                                             \  
                         T R A N S F O R M _ S N R _ C O M P A R E _ I N T E R F A C E (                                                         \  
                                 f f t l e n ,                                                                                                   \  
                                 o u t p u t _ t y p e ) ) ;                                                                                     \  
                                                                                                                                                 \  
                         r e t u r n   J T E S T _ T E S T _ P A S S E D ;                                                                       \  
         }  
  
 R F F T _ D E F I N E _ T E S T ( q 3 1 ,   f o r w a r d ,   0 U ,   T Y P E _ F R O M _ A B B R E V ( q 3 1 ) ,   T Y P E _ F R O M _ A B B R E V ( q 3 1 ) ) ;  
 R F F T _ D E F I N E _ T E S T ( q 1 5 ,   f o r w a r d ,   0 U ,   T Y P E _ F R O M _ A B B R E V ( q 1 5 ) ,   T Y P E _ F R O M _ A B B R E V ( q 1 5 ) ) ;  
 / / R F F T _ D E F I N E _ T E S T ( f 3 2 ,   i n v e r s e ,   1 U ,   T Y P E _ F R O M _ A B B R E V ( f 3 2 ) ,   T Y P E _ F R O M _ A B B R E V ( f 3 2 ) ) ;  
 R F F T _ D E F I N E _ T E S T ( q 3 1 ,   i n v e r s e ,   1 U ,   T Y P E _ F R O M _ A B B R E V ( q 3 1 ) ,   T Y P E _ F R O M _ A B B R E V ( q 3 1 ) ) ;  
 R F F T _ D E F I N E _ T E S T ( q 1 5 ,   i n v e r s e ,   1 U ,   T Y P E _ F R O M _ A B B R E V ( q 1 5 ) ,   T Y P E _ F R O M _ A B B R E V ( q 1 5 ) ) ;  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   C o l l e c t   a l l   t e s t s   i n   a   g r o u p   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 J T E S T _ D E F I N E _ G R O U P ( r f f t _ t e s t s )  
 {  
         J T E S T _ T E S T _ C A L L ( a r m _ r f f t _ q 3 1 _ f o r w a r d _ t e s t ) ;  
         J T E S T _ T E S T _ C A L L ( a r m _ r f f t _ q 1 5 _ f o r w a r d _ t e s t ) ;  
         / / J T E S T _ T E S T _ C A L L ( a r m _ r f f t _ f 3 2 _ i n v e r s e _ t e s t ) ;  
         J T E S T _ T E S T _ C A L L ( a r m _ r f f t _ q 3 1 _ i n v e r s e _ t e s t ) ;  
         J T E S T _ T E S T _ C A L L ( a r m _ r f f t _ q 1 5 _ i n v e r s e _ t e s t ) ;  
 }  