??# i n c l u d e   " j t e s t . h "  
 # i n c l u d e   " a r r _ d e s c . h "  
 # i n c l u d e   " a r m _ m a t h . h "  
 # i n c l u d e   " r e f . h "  
 # i n c l u d e   " t y p e _ a b b r e v . h "  
 # i n c l u d e   " t e s t _ t e m p l a t e s . h "  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   I n p u t   D a t a   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 A R R _ D E S C _ D E F I N E ( f l o a t 3 2 _ t ,  
                                 a r m _ s i n _ c o s _ d e g r e e s _ f 3 2 ,  
                                 9 ,  
                                 C U R L Y (  
                                         0 ,  
                                         1 7 ,  
                                         4 5 ,  
                                         9 0 ,  
                                         1 8 0 ,  
                                         3 6 0 ,  
                                         3 6 2 ,  
                                         - 7 3 ,  
                                         - 1 9 1 . 1 1 1  
                                             ) ) ;  
  
 / *   T h e   Q 3 1   v e r s i o n   o f   t h e   f u n c t i o n   m a p s   n u m b e r s   i n   t h e   r a n g e   [ - 1 ,   0 . 9 9 9 9 9 9 9 ]  
   *   t o   d e g r e e s   i n   t h e   r a n g e   [ - 1 8 0 ,   1 7 9 ] * /  
 A R R _ D E S C _ D E F I N E ( q 3 1 _ t ,  
                                 a r m _ s i n _ c o s _ d e g r e e s _ q 3 1 ,  
                                 6 ,  
                                 C U R L Y (  
                                         0 ,  
                                         0 x 8 0 0 0 0 0 0 0 ,   / *   - 1   * /  
                                         0 x 7 f f f f f f f ,   / *   0 . 9 9 9 9 9   * /  
                                         / *   R a n d o m s   * /  
                                         0 x f 7 b a d a f a ,  
                                         0 x 2 8 5 9 5 4 a 1 ,  
                                         0 x b 9 d 0 9 5 1 1  
                                             ) ) ;  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   O u t p u t   V a r i a b l e s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 f l o a t 3 2 _ t   s i n _ v a l _ f u t   =   0 ;  
 f l o a t 3 2 _ t   c o s _ v a l _ f u t   =   0 ;  
 f l o a t 3 2 _ t   s i n _ v a l _ r e f   =   0 ;  
 f l o a t 3 2 _ t   c o s _ v a l _ r e f   =   0 ;  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   T e s t   D e f i n i t i o n s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 # d e f i n e   M A X _ D E L T A _ f 3 2   5 0 . 0 e - 8 f  
 # d e f i n e   A B S ( x )   ( ( x )   >   0   ?   ( x )   :   - ( x ) )  
  
 / *  
     F u n c t i o n   t o   t e s t   c o r r e c t n e s s   o f   s i n _ c o s   o u t p u t   b y   c o m p a r i n g   i t   w i t h   r e f e r e n c e   l i b r a r y  
 * /  
 # d e f i n e   C O M P A R I S O N _ I N T E R F A C E ( t y p e ,   t h r e s h o l d )                                                       \  
         i f   (   ( A B S ( ( t y p e )   s i n _ v a l _ r e f   -   ( t y p e )   s i n _ v a l _ f u t )   >                                   \  
                   ( t y p e )   t h r e s h o l d   )   | |                                                                                     \  
                 ( A B S ( ( t y p e )   c o s _ v a l _ r e f   -   ( t y p e )   c o s _ v a l _ f u t )   >                                   \  
                   ( t y p e )   t h r e s h o l d ) )                                                                                           \  
         {                                                                                                                                       \  
                 J T E S T _ D U M P _ S T R F ( " E r r o r :   % f   % f \ n " ,                                                               \  
                                                 A B S ( ( t y p e )   s i n _ v a l _ r e f   -   ( t y p e )   s i n _ v a l _ f u t ) ,       \  
                                                 A B S ( ( t y p e )   c o s _ v a l _ r e f   -   ( t y p e )   c o s _ v a l _ f u t ) ) ;     \  
                 r e t u r n   J T E S T _ T E S T _ F A I L E D ;                                                                               \  
         }  
  
 / *  
     S i n e   a n d   c o s i n e   t e s t   f u n c t i o n   f o r   f l o a t 3 2 _ t   i n p u t  
 * /  
 J T E S T _ D E F I N E _ T E S T ( a r m _ s i n _ c o s _ f 3 2 _ t e s t ,   a r m _ s i n _ c o s _ f 3 2 )  
 {  
         / *   T e s t   f u n c t i o n   f o r   a l l   i n p u t   d e g r e e   v a l u e s   * /  
         T E M P L A T E _ D O _ A R R _ D E S C (  
                 d e g r e e _ i d x ,   T Y P E _ F R O M _ A B B R E V ( f 3 2 ) ,  
                 d e g r e e ,   a r m _ s i n _ c o s _ d e g r e e s _ f 3 2  
                 ,  
                 / *   D i s p l a y   c y c l e   c o u n t   a n d   r u n   t e s t   * /  
                 J T E S T _ C O U N T _ C Y C L E S (  
                         a r m _ s i n _ c o s _ f 3 2 (  
                                 d e g r e e ,  
                                 ( T Y P E _ F R O M _ A B B R E V ( f 3 2 )   * )   & s i n _ v a l _ f u t ,  
                                 ( T Y P E _ F R O M _ A B B R E V ( f 3 2 )   * )   & c o s _ v a l _ f u t )  
                 ) ;  
                 r e f _ s i n _ c o s _ f 3 2 (  
                         d e g r e e ,  
                         ( T Y P E _ F R O M _ A B B R E V ( f 3 2 )   * )   & s i n _ v a l _ r e f ,  
                         ( T Y P E _ F R O M _ A B B R E V ( f 3 2 )   * )   & c o s _ v a l _ r e f ) ;  
  
                 / *   T e s t   c o r r e c t n e s s   * /  
                 C O M P A R I S O N _ I N T E R F A C E (  
                         T Y P E _ F R O M _ A B B R E V ( f 3 2 ) ,  
                         M A X _ D E L T A _ f 3 2 ) ) ;  
  
         r e t u r n   J T E S T _ T E S T _ P A S S E D ;  
 }  
  
  
 / *  
     S i n e   a n d   c o s i n e   t e s t   f u n c t i o n   f o r   q 3 1 _ t   i n p u t  
 * /  
 J T E S T _ D E F I N E _ T E S T ( a r m _ s i n _ c o s _ q 3 1 _ t e s t ,  
                                     a r m _ s i n _ c o s _ q 3 1 )  
 {  
         / *   T e s t   f u n c t i o n   f o r   a l l   i n p u t   d e g r e e   v a l u e s   * /  
         T E M P L A T E _ D O _ A R R _ D E S C (  
                 d e g r e e _ i d x ,   T Y P E _ F R O M _ A B B R E V ( q 3 1 ) ,  
                 d e g r e e ,   a r m _ s i n _ c o s _ d e g r e e s _ q 3 1  
                 ,  
                 / *   D i s p l a y   c y c l e   c o u n t   a n d   r u n   t e s t   * /  
                 J T E S T _ C O U N T _ C Y C L E S (  
                         a r m _ s i n _ c o s _ q 3 1 (  
                                 d e g r e e ,  
                                 ( T Y P E _ F R O M _ A B B R E V ( q 3 1 )   * )   & s i n _ v a l _ f u t ,  
                                 ( T Y P E _ F R O M _ A B B R E V ( q 3 1 )   * )   & c o s _ v a l _ f u t )  
                 ) ;  
                 r e f _ s i n _ c o s _ q 3 1 (  
                         d e g r e e ,  
                         ( T Y P E _ F R O M _ A B B R E V ( q 3 1 )   * )   & s i n _ v a l _ r e f ,  
                         ( T Y P E _ F R O M _ A B B R E V ( q 3 1 )   * )   & c o s _ v a l _ r e f ) ;  
  
                 / *   C o n v e r t   q 3 1   n u m b e r s   t o   f l o a t   f o r   c o m p a r i s o n   p u r p o s e s .   * /  
                 r e f _ q 3 1 _ t _ t o _ f l o a t ( ( T Y P E _ F R O M _ A B B R E V ( q 3 1 )   * )   & s i n _ v a l _ f u t ,   & s i n _ v a l _ f u t ,   1 ) ;  
                 r e f _ q 3 1 _ t _ t o _ f l o a t ( ( T Y P E _ F R O M _ A B B R E V ( q 3 1 )   * )   & c o s _ v a l _ f u t ,   & c o s _ v a l _ f u t ,   1 ) ;  
                 r e f _ q 3 1 _ t _ t o _ f l o a t ( ( T Y P E _ F R O M _ A B B R E V ( q 3 1 )   * )   & s i n _ v a l _ r e f ,   & s i n _ v a l _ r e f ,   1 ) ;  
                 r e f _ q 3 1 _ t _ t o _ f l o a t ( ( T Y P E _ F R O M _ A B B R E V ( q 3 1 )   * )   & c o s _ v a l _ r e f ,   & c o s _ v a l _ r e f ,   1 ) ;  
  
                 / *   T e s t   c o r r e c t n e s s   * /  
                 C O M P A R I S O N _ I N T E R F A C E (  
                         T Y P E _ F R O M _ A B B R E V ( f 3 2 ) ,  
                         M A X _ D E L T A _ f 3 2 ) ) ;  
  
         r e t u r n   J T E S T _ T E S T _ P A S S E D ;  
 }  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   C o l l e c t   a l l   t e s t s   i n   a   g r o u p   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 J T E S T _ D E F I N E _ G R O U P ( s i n _ c o s _ t e s t s )  
 {  
         / *  
             T o   s k i p   a   t e s t ,   c o m m e n t   i t   o u t .  
         * /  
         J T E S T _ T E S T _ C A L L ( a r m _ s i n _ c o s _ f 3 2 _ t e s t ) ;  
         J T E S T _ T E S T _ C A L L ( a r m _ s i n _ c o s _ q 3 1 _ t e s t ) ;  
 }  