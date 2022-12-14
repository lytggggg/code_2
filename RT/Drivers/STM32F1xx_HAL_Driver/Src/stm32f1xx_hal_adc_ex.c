??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ a d c _ e x . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g    
     *                     f u n c t i o n a l i t i e s   o f   t h e   A n a l o g   t o   D i g i t a l   C o n v e r t o r   ( A D C )  
     *                     p e r i p h e r a l :  
     *                       +   O p e r a t i o n   f u n c t i o n s  
     *                           + +   S t a r t ,   s t o p ,   g e t   r e s u l t   o f   c o n v e r s i o n s   o f   i n j e c t e d  
     *                                 g r o u p ,   u s i n g   2   p o s s i b l e   m o d e s :   p o l l i n g ,   i n t e r r u p t i o n .  
     *                           + +   M u l t i m o d e   f e a t u r e   ( a v a i l a b l e   o n   d e v i c e s   w i t h   2   A D C s   o r   m o r e )  
     *                           + +   C a l i b r a t i o n   ( A D C   a u t o m a t i c   s e l f - c a l i b r a t i o n )  
     *                       +   C o n t r o l   f u n c t i o n s  
     *                           + +   C h a n n e l s   c o n f i g u r a t i o n   o n   i n j e c t e d   g r o u p  
     *                     O t h e r   f u n c t i o n s   ( g e n e r i c   f u n c t i o n s )   a r e   a v a i l a b l e   i n   f i l e    
     *                     " s t m 3 2 f 1 x x _ h a l _ a d c . c " .  
     *  
     @ v e r b a t i m  
     [ . . ]    
     ( @ )   S e c t i o n s   " A D C   p e r i p h e r a l   f e a t u r e s "   a n d   " H o w   t o   u s e   t h i s   d r i v e r "   a r e  
             a v a i l a b l e   i n   f i l e   o f   g e n e r i c   f u n c t i o n s   " s t m 3 2 f 1 x x _ h a l _ a d c . c " .  
     [ . . ]  
     @ e n d v e r b a t i m  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 6   S T M i c r o e l e c t r o n i c s .  
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 >  
     *  
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e ,  
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e  
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t :  
     *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     * /  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   A D C E x   A D C E x  
     *   @ b r i e f   A D C   E x t e n s i o n   H A L   m o d u l e   d r i v e r  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ A D C _ M O D U L E _ E N A B L E D  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   A D C E x _ P r i v a t e _ C o n s t a n t s   A D C E x   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
  
     / *   D e l a y   f o r   A D C   c a l i b r a t i o n :                                                                                               * /  
     / *   H a r d w a r e   p r e r e q u i s i t e   b e f o r e   s t a r t i n g   a   c a l i b r a t i o n :   t h e   A D C   m u s t   h a v e       * /  
     / *   b e e n   i n   p o w e r - o n   s t a t e   f o r   a t   l e a s t   t w o   A D C   c l o c k   c y c l e s .                                 * /  
     / *   U n i t :   A D C   c l o c k   c y c l e s                                                                                                       * /  
     # d e f i n e   A D C _ P R E C A L I B R A T I O N _ D E L A Y _ A D C C L O C K C Y C L E S               2 U  
  
     / *   T i m e o u t   v a l u e   f o r   A D C   c a l i b r a t i o n                                                                                 * /  
     / *   V a l u e   d e f i n e d   t o   b e   h i g h e r   t h a n   w o r s t   c a s e s :   l o w   c l o c k s   f r e q ,                         * /  
     / *   m a x i m u m   p r e s c a l e r .                                                                                                               * /  
     / *   E x   o f   p r o f i l e   l o w   f r e q u e n c y   :   C l o c k   s o u r c e   a t   0 . 1   M H z ,   A D C   c l o c k                   * /  
     / *   p r e s c a l e r   4 ,   s a m p l i n g   t i m e   1 2 . 5   A D C   c l o c k   c y c l e s ,   r e s o l u t i o n   1 2   b i t s .         * /  
     / *   U n i t :   m s                                                                                                                                   * /  
     # d e f i n e   A D C _ C A L I B R A T I O N _ T I M E O U T                     1 0 U  
  
     / *   D e l a y   f o r   t e m p e r a t u r e   s e n s o r   s t a b i l i z a t i o n   t i m e .                                                   * /  
     / *   M a x i m u m   d e l a y   i s   1 0 u s   ( r e f e r   t o   d e v i c e   d a t a s h e e t ,   p a r a m e t e r   t S T A R T ) .           * /  
     / *   U n i t :   u s                                                                                                                                   * /  
     # d e f i n e   A D C _ T E M P S E N S O R _ D E L A Y _ U S                   1 0 U  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   A D C E x _ E x p o r t e d _ F u n c t i o n s   A D C E x   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   A D C E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   E x t e n d e d   E x t e n d e d   I O   o p e r a t i o n   f u n c t i o n s  
   *     @ b r i e f         E x t e n d e d   E x t e n d e d   I n p u t   a n d   O u t p u t   o p e r a t i o n   f u n c t i o n s  
   *  
 @ v e r b a t i m          
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   I O   o p e r a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   S t a r t   c o n v e r s i o n   o f   i n j e c t e d   g r o u p .  
             ( + )   S t o p   c o n v e r s i o n   o f   i n j e c t e d   g r o u p .  
             ( + )   P o l l   f o r   c o n v e r s i o n   c o m p l e t e   o n   i n j e c t e d   g r o u p .  
             ( + )   G e t   r e s u l t   o f   i n j e c t e d   c h a n n e l   c o n v e r s i o n .  
             ( + )   S t a r t   c o n v e r s i o n   o f   i n j e c t e d   g r o u p   a n d   e n a b l e   i n t e r r u p t i o n s .  
             ( + )   S t o p   c o n v e r s i o n   o f   i n j e c t e d   g r o u p   a n d   d i s a b l e   i n t e r r u p t i o n s .  
  
             ( + )   S t a r t   m u l t i m o d e   a n d   e n a b l e   D M A   t r a n s f e r .  
             ( + )   S t o p   m u l t i m o d e   a n d   d i s a b l e   A D C   D M A   t r a n s f e r .  
             ( + )   G e t   r e s u l t   o f   m u l t i m o d e   c o n v e r s i o n .  
  
             ( + )   P e r f o r m   t h e   A D C   s e l f - c a l i b r a t i o n   f o r   s i n g l e   o r   d i f f e r e n t i a l   e n d i n g .  
             ( + )   G e t   c a l i b r a t i o n   f a c t o r s   f o r   s i n g l e   o r   d i f f e r e n t i a l   e n d i n g .  
             ( + )   S e t   c a l i b r a t i o n   f a c t o r s   f o r   s i n g l e   o r   d i f f e r e n t i a l   e n d i n g .  
              
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     P e r f o r m   a n   A D C   a u t o m a t i c   s e l f - c a l i b r a t i o n  
     *                   C a l i b r a t i o n   p r e r e q u i s i t e :   A D C   m u s t   b e   d i s a b l e d   ( e x e c u t e   t h i s  
     *                   f u n c t i o n   b e f o r e   H A L _ A D C _ S t a r t ( )   o r   a f t e r   H A L _ A D C _ S t o p ( )   ) .  
     *                   D u r i n g   c a l i b r a t i o n   p r o c e s s ,   A D C   i s   e n a b l e d .   A D C   i s   l e t   e n a b l e d   a t  
     *                   t h e   c o m p l e t i o n   o f   t h i s   f u n c t i o n .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C E x _ C a l i b r a t i o n _ S t a r t ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     H A L _ S t a t u s T y p e D e f   t m p _ h a l _ s t a t u s   =   H A L _ O K ;  
     u i n t 3 2 _ t   t i c k s t a r t ;  
     _ _ I O   u i n t 3 2 _ t   w a i t _ l o o p _ i n d e x   =   0 U ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h a d c ) ;  
          
     / *   1 .   C a l i b r a t i o n   p r e r e q u i s i t e :                                                                                           * /  
     / *         -   A D C   m u s t   b e   d i s a b l e d   f o r   a t   l e a s t   t w o   A D C   c l o c k   c y c l e s   i n   d i s a b l e       * /  
     / *             m o d e   b e f o r e   A D C   e n a b l e                                                                                             * /  
     / *   S t o p   p o t e n t i a l   c o n v e r s i o n   o n   g o i n g ,   o n   r e g u l a r   a n d   i n j e c t e d   g r o u p s               * /  
     / *   D i s a b l e   A D C   p e r i p h e r a l   * /  
     t m p _ h a l _ s t a t u s   =   A D C _ C o n v e r s i o n S t o p _ D i s a b l e ( h a d c ) ;  
      
     / *   C h e c k   i f   A D C   i s   e f f e c t i v e l y   d i s a b l e d   * /  
     i f   ( t m p _ h a l _ s t a t u s   = =   H A L _ O K )  
     {  
         / *   S e t   A D C   s t a t e   * /  
         A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,  
                                             H A L _ A D C _ S T A T E _ R E G _ B U S Y   |   H A L _ A D C _ S T A T E _ I N J _ B U S Y ,  
                                             H A L _ A D C _ S T A T E _ B U S Y _ I N T E R N A L ) ;  
          
         / *   H a r d w a r e   p r e r e q u i s i t e :   d e l a y   b e f o r e   s t a r t i n g   t h e   c a l i b r a t i o n .                     * /  
         / *     -   C o m p u t a t i o n   o f   C P U   c l o c k   c y c l e s   c o r r e s p o n d i n g   t o   A D C   c l o c k   c y c l e s .     * /  
         / *     -   W a i t   f o r   t h e   e x p e c t e d   A D C   c l o c k   c y c l e s   d e l a y   * /  
         w a i t _ l o o p _ i n d e x   =   ( ( S y s t e m C o r e C l o c k  
                                                 /   H A L _ R C C E x _ G e t P e r i p h C L K F r e q ( R C C _ P E R I P H C L K _ A D C ) )  
                                               *   A D C _ P R E C A L I B R A T I O N _ D E L A Y _ A D C C L O C K C Y C L E S                 ) ;  
  
         w h i l e ( w a i t _ l o o p _ i n d e x   ! =   0 U )  
         {  
             w a i t _ l o o p _ i n d e x - - ;  
         }  
          
         / *   2 .   E n a b l e   t h e   A D C   p e r i p h e r a l   * /  
         A D C _ E n a b l e ( h a d c ) ;  
          
         / *   3 .   R e s e t s   A D C   c a l i b r a t i o n   r e g i s t e r s   * /      
         S E T _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ R S T C A L ) ;  
          
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;      
  
         / *   W a i t   f o r   c a l i b r a t i o n   r e s e t   c o m p l e t i o n   * /  
         w h i l e ( H A L _ I S _ B I T _ S E T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ R S T C A L ) )  
         {  
             i f ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   A D C _ C A L I B R A T I O N _ T I M E O U T )  
             {  
                 / *   N e w   c h e c k   t o   a v o i d   f a l s e   t i m e o u t   d e t e c t i o n   i n   c a s e   o f   p r e e m p t i o n   * /  
                 i f ( H A L _ I S _ B I T _ S E T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ R S T C A L ) )  
                 {  
                     / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   e r r o r   * /  
                     A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,  
                                                         H A L _ A D C _ S T A T E _ B U S Y _ I N T E R N A L ,  
                                                         H A L _ A D C _ S T A T E _ E R R O R _ I N T E R N A L ) ;  
  
                     / *   P r o c e s s   u n l o c k e d   * /  
                     _ _ H A L _ U N L O C K ( h a d c ) ;  
  
                     r e t u r n   H A L _ E R R O R ;  
                 }  
             }  
         }  
          
         / *   4 .   S t a r t   A D C   c a l i b r a t i o n   * /  
         S E T _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ C A L ) ;  
          
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;      
  
         / *   W a i t   f o r   c a l i b r a t i o n   c o m p l e t i o n   * /  
         w h i l e ( H A L _ I S _ B I T _ S E T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ C A L ) )  
         {  
             i f ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   A D C _ C A L I B R A T I O N _ T I M E O U T )  
             {  
                 / *   N e w   c h e c k   t o   a v o i d   f a l s e   t i m e o u t   d e t e c t i o n   i n   c a s e   o f   p r e e m p t i o n   * /  
                 i f ( H A L _ I S _ B I T _ S E T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ C A L ) )  
                 {  
                     / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   e r r o r   * /  
                     A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,  
                                                         H A L _ A D C _ S T A T E _ B U S Y _ I N T E R N A L ,  
                                                         H A L _ A D C _ S T A T E _ E R R O R _ I N T E R N A L ) ;  
  
                     / *   P r o c e s s   u n l o c k e d   * /  
                     _ _ H A L _ U N L O C K ( h a d c ) ;  
  
                     r e t u r n   H A L _ E R R O R ;  
                 }  
             }  
         }  
          
         / *   S e t   A D C   s t a t e   * /  
         A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,  
                                             H A L _ A D C _ S T A T E _ B U S Y _ I N T E R N A L ,  
                                             H A L _ A D C _ S T A T E _ R E A D Y ) ;  
     }  
      
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h a d c ) ;  
      
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   t m p _ h a l _ s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e s   A D C ,   s t a r t s   c o n v e r s i o n   o f   i n j e c t e d   g r o u p .  
     *                   I n t e r r u p t i o n s   e n a b l e d   i n   t h i s   f u n c t i o n :   N o n e .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C E x _ I n j e c t e d S t a r t ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     H A L _ S t a t u s T y p e D e f   t m p _ h a l _ s t a t u s   =   H A L _ O K ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
      
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h a d c ) ;  
          
     / *   E n a b l e   t h e   A D C   p e r i p h e r a l   * /  
     t m p _ h a l _ s t a t u s   =   A D C _ E n a b l e ( h a d c ) ;  
      
     / *   S t a r t   c o n v e r s i o n   i f   A D C   i s   e f f e c t i v e l y   e n a b l e d   * /  
     i f   ( t m p _ h a l _ s t a t u s   = =   H A L _ O K )  
     {  
         / *   S e t   A D C   s t a t e                                                                                                                     * /  
         / *   -   C l e a r   s t a t e   b i t f i e l d   r e l a t e d   t o   i n j e c t e d   g r o u p   c o n v e r s i o n   r e s u l t s         * /  
         / *   -   S e t   s t a t e   b i t f i e l d   r e l a t e d   t o   i n j e c t e d   o p e r a t i o n                                           * /  
         A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,  
                                             H A L _ A D C _ S T A T E _ R E A D Y   |   H A L _ A D C _ S T A T E _ I N J _ E O C ,  
                                             H A L _ A D C _ S T A T E _ I N J _ B U S Y ) ;  
          
         / *   C a s e   o f   i n d e p e n d e n t   m o d e   o r   m u l t i m o d e   ( f o r   d e v i c e s   w i t h   s e v e r a l   A D C s ) :   * /  
         / *   S e t   m u l t i m o d e   s t a t e .                                                                                                       * /  
         i f   ( A D C _ N O N M U L T I M O D E _ O R _ M U L T I M O D E M A S T E R ( h a d c ) )  
         {  
             C L E A R _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ M U L T I M O D E _ S L A V E ) ;  
         }  
         e l s e  
         {  
             S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ M U L T I M O D E _ S L A V E ) ;  
         }  
          
         / *   C h e c k   i f   a   r e g u l a r   c o n v e r s i o n   i s   o n g o i n g   * /  
         / *   N o t e :   O n   t h i s   d e v i c e ,   t h e r e   i s   n o   A D C   e r r o r   c o d e   f i e l d s   r e l a t e d   t o           * /  
         / *               c o n v e r s i o n s   o n   g r o u p   i n j e c t e d   o n l y .   I n   c a s e   o f   c o n v e r s i o n   o n           * /  
         / *               g o i n g   o n   g r o u p   r e g u l a r ,   n o   e r r o r   c o d e   i s   r e s e t .                                     * /  
         i f   ( H A L _ I S _ B I T _ C L R ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ R E G _ B U S Y ) )  
         {  
             / *   R e s e t   A D C   a l l   e r r o r   c o d e   f i e l d s   * /  
             A D C _ C L E A R _ E R R O R C O D E ( h a d c ) ;  
         }  
          
         / *   P r o c e s s   u n l o c k e d   * /  
         / *   U n l o c k   b e f o r e   s t a r t i n g   A D C   c o n v e r s i o n s :   i n   c a s e   o f   p o t e n t i a l                       * /  
         / *   i n t e r r u p t i o n ,   t o   l e t   t h e   p r o c e s s   t o   A D C   I R Q   H a n d l e r .                                       * /  
         _ _ H A L _ U N L O C K ( h a d c ) ;  
          
         / *   C l e a r   i n j e c t e d   g r o u p   c o n v e r s i o n   f l a g   * /  
         / *   ( T o   e n s u r e   o f   n o   u n k n o w n   s t a t e   f r o m   p o t e n t i a l   p r e v i o u s   A D C   o p e r a t i o n s )   * /  
         _ _ H A L _ A D C _ C L E A R _ F L A G ( h a d c ,   A D C _ F L A G _ J E O C ) ;  
                  
         / *   E n a b l e   c o n v e r s i o n   o f   i n j e c t e d   g r o u p .                                                                       * /  
         / *   I f   s o f t w a r e   s t a r t   h a s   b e e n   s e l e c t e d ,   c o n v e r s i o n   s t a r t s   i m m e d i a t e l y .         * /  
         / *   I f   e x t e r n a l   t r i g g e r   h a s   b e e n   s e l e c t e d ,   c o n v e r s i o n   w i l l   s t a r t   a t   n e x t       * /  
         / *   t r i g g e r   e v e n t .                                                                                                                   * /  
         / *   I f   a u t o m a t i c   i n j e c t e d   c o n v e r s i o n   i s   e n a b l e d ,   c o n v e r s i o n   w i l l   s t a r t           * /  
         / *   a f t e r   n e x t   r e g u l a r   g r o u p   c o n v e r s i o n .                                                                       * /  
         / *   C a s e   o f   m u l t i m o d e   e n a b l e d   ( f o r   d e v i c e s   w i t h   s e v e r a l   A D C s ) :   i f   A D C   i s       * /  
         / *   s l a v e ,   A D C   i s   e n a b l e d   o n l y   ( c o n v e r s i o n   i s   n o t   s t a r t e d ) .   I f   A D C   i s             * /  
         / *   m a s t e r ,   A D C   i s   e n a b l e d   a n d   c o n v e r s i o n   i s   s t a r t e d .                                             * /  
         i f   ( H A L _ I S _ B I T _ C L R ( h a d c - > I n s t a n c e - > C R 1 ,   A D C _ C R 1 _ J A U T O ) )  
         {  
             i f   ( A D C _ I S _ S O F T W A R E _ S T A R T _ I N J E C T E D ( h a d c )           & &  
                     A D C _ N O N M U L T I M O D E _ O R _ M U L T I M O D E M A S T E R ( h a d c )     )  
             {  
                 / *   S t a r t   A D C   c o n v e r s i o n   o n   i n j e c t e d   g r o u p   w i t h   S W   s t a r t   * /  
                 S E T _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   ( A D C _ C R 2 _ J S W S T A R T   |   A D C _ C R 2 _ J E X T T R I G ) ) ;  
             }  
             e l s e  
             {  
                 / *   S t a r t   A D C   c o n v e r s i o n   o n   i n j e c t e d   g r o u p   w i t h   e x t e r n a l   t r i g g e r   * /  
                 S E T _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ J E X T T R I G ) ;  
             }  
         }  
     }  
     e l s e  
     {  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h a d c ) ;  
     }  
      
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   t m p _ h a l _ s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     S t o p   c o n v e r s i o n   o f   i n j e c t e d   c h a n n e l s .   D i s a b l e   A D C   p e r i p h e r a l   i f  
     *                   n o   r e g u l a r   c o n v e r s i o n   i s   o n   g o i n g .  
     *   @ n o t e       I f   A D C   m u s t   b e   d i s a b l e d   a n d   i f   c o n v e r s i o n   i s   o n   g o i n g   o n    
     *                   r e g u l a r   g r o u p ,   f u n c t i o n   H A L _ A D C _ S t o p   m u s t   b e   u s e d   t o   s t o p   b o t h  
     *                   i n j e c t e d   a n d   r e g u l a r   g r o u p s ,   a n d   d i s a b l e   t h e   A D C .  
     *   @ n o t e       I f   i n j e c t e d   g r o u p   m o d e   a u t o - i n j e c t i o n   i s   e n a b l e d ,  
     *                   f u n c t i o n   H A L _ A D C _ S t o p   m u s t   b e   u s e d .  
     *   @ n o t e       I n   c a s e   o f   a u t o - i n j e c t i o n   m o d e ,   H A L _ A D C _ S t o p   m u s t   b e   u s e d .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C E x _ I n j e c t e d S t o p ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     H A L _ S t a t u s T y p e D e f   t m p _ h a l _ s t a t u s   =   H A L _ O K ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h a d c ) ;  
          
     / *   S t o p   p o t e n t i a l   c o n v e r s i o n   a n d   d i s a b l e   A D C   p e r i p h e r a l                                           * /  
     / *   C o n d i t i o n e d   t o :                                                                                                                     * /  
     / *   -   N o   c o n v e r s i o n   o n   t h e   o t h e r   g r o u p   ( r e g u l a r   g r o u p )   i s   i n t e n d e d   t o                 * /  
     / *       c o n t i n u e   ( i n j e c t e d   a n d   r e g u l a r   g r o u p s   s t o p   c o n v e r s i o n   a n d   A D C   d i s a b l e     * /  
     / *       a r e   c o m m o n )                                                                                                                         * /  
     / *   -   I n   c a s e   o f   a u t o - i n j e c t i o n   m o d e ,   H A L _ A D C _ S t o p   m u s t   b e   u s e d .                           * /  
     i f ( ( ( h a d c - > S t a t e   &   H A L _ A D C _ S T A T E _ R E G _ B U S Y )   = =   R E S E T )     & &  
           H A L _ I S _ B I T _ C L R ( h a d c - > I n s t a n c e - > C R 1 ,   A D C _ C R 1 _ J A U T O )       )  
     {  
         / *   S t o p   p o t e n t i a l   c o n v e r s i o n   o n   g o i n g ,   o n   r e g u l a r   a n d   i n j e c t e d   g r o u p s   * /  
         / *   D i s a b l e   A D C   p e r i p h e r a l   * /  
         t m p _ h a l _ s t a t u s   =   A D C _ C o n v e r s i o n S t o p _ D i s a b l e ( h a d c ) ;  
          
         / *   C h e c k   i f   A D C   i s   e f f e c t i v e l y   d i s a b l e d   * /  
         i f   ( t m p _ h a l _ s t a t u s   = =   H A L _ O K )  
         {  
             / *   S e t   A D C   s t a t e   * /  
             A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,  
                                                 H A L _ A D C _ S T A T E _ R E G _ B U S Y   |   H A L _ A D C _ S T A T E _ I N J _ B U S Y ,  
                                                 H A L _ A D C _ S T A T E _ R E A D Y ) ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   e r r o r   * /  
         S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ C O N F I G ) ;  
              
         t m p _ h a l _ s t a t u s   =   H A L _ E R R O R ;  
     }  
      
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h a d c ) ;  
      
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   t m p _ h a l _ s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     W a i t   f o r   i n j e c t e d   g r o u p   c o n v e r s i o n   t o   b e   c o m p l e t e d .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ p a r a m     T i m e o u t :   T i m e o u t   v a l u e   i n   m i l l i s e c o n d .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C E x _ I n j e c t e d P o l l F o r C o n v e r s i o n ( A D C _ H a n d l e T y p e D e f *   h a d c ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     u i n t 3 2 _ t   t i c k s t a r t ;  
  
     / *   V a r i a b l e s   f o r   p o l l i n g   i n   c a s e   o f   s c a n   m o d e   e n a b l e d   a n d   p o l l i n g   f o r   e a c h     * /  
     / *   c o n v e r s i o n .                                                                                                                             * /  
     _ _ I O   u i n t 3 2 _ t   C o n v e r s i o n _ T i m e o u t _ C P U _ c y c l e s   =   0 U ;  
     u i n t 3 2 _ t   C o n v e r s i o n _ T i m e o u t _ C P U _ c y c l e s _ m a x   =   0 U ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
  
     / *   G e t   t i m e o u t   * /  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;      
            
     / *   P o l l i n g   f o r   e n d   o f   c o n v e r s i o n :   d i f f e r e n t i a t i o n   i f   s i n g l e / s e q u e n c e                 * /  
     / *   c o n v e r s i o n .                                                                                                                             * /  
     / *   F o r   i n j e c t e d   g r o u p ,   f l a g   J E O C   i s   s e t   o n l y   a t   t h e   e n d   o f   t h e   s e q u e n c e ,         * /  
     / *   n o t   f o r   e a c h   c o n v e r s i o n   w i t h i n   t h e   s e q u e n c e .                                                           * /  
     / *     -   I f   s i n g l e   c o n v e r s i o n   f o r   i n j e c t e d   g r o u p   ( s c a n   m o d e   d i s a b l e d   o r                 * /  
     / *         I n j e c t e d N b r O f C o n v e r s i o n   = = 1 ) ,   f l a g   J E O C   i s   u s e d   t o   d e t e r m i n e   t h e             * /  
     / *         c o n v e r s i o n   c o m p l e t i o n .                                                                                                 * /  
     / *     -   I f   s e q u e n c e   c o n v e r s i o n   f o r   i n j e c t e d   g r o u p   ( s c a n   m o d e   e n a b l e d   a n d             * /  
     / *         I n j e c t e d N b r O f C o n v e r s i o n   > = 2 ) ,   f l a g   J E O C   i s   s e t   o n l y   a t   t h e   e n d   o f   t h e   * /  
     / *         s e q u e n c e .                                                                                                                           * /  
     / *         T o   p o l l   f o r   e a c h   c o n v e r s i o n ,   t h e   m a x i m u m   c o n v e r s i o n   t i m e   i s   c o m p u t e d     * /  
     / *         f r o m   A D C   c o n v e r s i o n   t i m e   ( s e l e c t e d   s a m p l i n g   t i m e   +   c o n v e r s i o n   t i m e   o f   * /  
     / *         1 2 . 5   A D C   c l o c k   c y c l e s )   a n d   A P B 2 / A D C   c l o c k   p r e s c a l e r s   ( d e p e n d i n g   o n         * /  
     / *         s e t t i n g s ,   c o n v e r s i o n   t i m e   r a n g e   c a n   b e   f r o m   2 8   t o   3 2 2 5 6   C P U   c y c l e s ) .     * /  
     / *         A s   f l a g   J E O C   i s   n o t   s e t   a f t e r   e a c h   c o n v e r s i o n ,   n o   t i m e o u t   s t a t u s   c a n     * /  
     / *         b e   s e t .                                                                                                                               * /  
     i f   ( ( h a d c - > I n s t a n c e - > J S Q R   &   A D C _ J S Q R _ J L )   = =   R E S E T )  
     {  
         / *   W a i t   u n t i l   E n d   o f   C o n v e r s i o n   f l a g   i s   r a i s e d   * /  
         w h i l e ( H A L _ I S _ B I T _ C L R ( h a d c - > I n s t a n c e - > S R ,   A D C _ F L A G _ J E O C ) )  
         {  
             / *   C h e c k   i f   t i m e o u t   i s   d i s a b l e d   ( s e t   t o   i n f i n i t e   w a i t )   * /  
             i f ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
             {  
                 i f ( ( T i m e o u t   = =   0 U )   | |   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t   )   >   T i m e o u t ) )  
                 {  
                     / *   N e w   c h e c k   t o   a v o i d   f a l s e   t i m e o u t   d e t e c t i o n   i n   c a s e   o f   p r e e m p t i o n   * /  
                     i f ( H A L _ I S _ B I T _ C L R ( h a d c - > I n s t a n c e - > S R ,   A D C _ F L A G _ J E O C ) )  
                     {  
                         / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   t i m e o u t   * /  
                         S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ T I M E O U T ) ;  
  
                         / *   P r o c e s s   u n l o c k e d   * /  
                         _ _ H A L _ U N L O C K ( h a d c ) ;  
  
                         r e t u r n   H A L _ T I M E O U T ;  
                     }  
                 }  
             }  
         }  
     }  
     e l s e  
     {  
         / *   R e p l a c e   p o l l i n g   b y   w a i t   f o r   m a x i m u m   c o n v e r s i o n   t i m e   * /  
         / *     -   C o m p u t a t i o n   o f   C P U   c l o c k   c y c l e s   c o r r e s p o n d i n g   t o   A D C   c l o c k   c y c l e s       * /  
         / *         a n d   A D C   m a x i m u m   c o n v e r s i o n   c y c l e s   o n   a l l   c h a n n e l s .                                     * /  
         / *     -   W a i t   f o r   t h e   e x p e c t e d   A D C   c l o c k   c y c l e s   d e l a y                                                 * /  
         C o n v e r s i o n _ T i m e o u t _ C P U _ c y c l e s _ m a x   =   ( ( S y s t e m C o r e C l o c k  
                                                                                     /   H A L _ R C C E x _ G e t P e r i p h C L K F r e q ( R C C _ P E R I P H C L K _ A D C ) )  
                                                                                   *   A D C _ C O N V C Y C L E S _ M A X _ R A N G E ( h a d c )                                   ) ;  
          
         w h i l e ( C o n v e r s i o n _ T i m e o u t _ C P U _ c y c l e s   <   C o n v e r s i o n _ T i m e o u t _ C P U _ c y c l e s _ m a x )  
         {  
             / *   C h e c k   i f   t i m e o u t   i s   d i s a b l e d   ( s e t   t o   i n f i n i t e   w a i t )   * /  
             i f ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
             {  
                 i f ( ( T i m e o u t   = =   0 ) | | ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t   )   >   T i m e o u t ) )  
                 {  
                     / *   N e w   c h e c k   t o   a v o i d   f a l s e   t i m e o u t   d e t e c t i o n   i n   c a s e   o f   p r e e m p t i o n   * /  
                     i f ( C o n v e r s i o n _ T i m e o u t _ C P U _ c y c l e s   <   C o n v e r s i o n _ T i m e o u t _ C P U _ c y c l e s _ m a x )  
                     {  
                         / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   t i m e o u t   * /  
                         S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ T I M E O U T ) ;  
  
                         / *   P r o c e s s   u n l o c k e d   * /  
                         _ _ H A L _ U N L O C K ( h a d c ) ;  
  
                         r e t u r n   H A L _ T I M E O U T ;  
                     }  
                 }  
             }  
             C o n v e r s i o n _ T i m e o u t _ C P U _ c y c l e s   + + ;  
         }  
     }  
  
     / *   C l e a r   i n j e c t e d   g r o u p   c o n v e r s i o n   f l a g   * /  
     / *   N o t e :   O n   S T M 3 2 F 1   A D C ,   c l e a r   r e g u l a r   c o n v e r s i o n   f l a g   r a i s e d                               * /  
     / *   s i m u l t a n e o u s l y .                                                                                                                     * /  
     _ _ H A L _ A D C _ C L E A R _ F L A G ( h a d c ,   A D C _ F L A G _ J S T R T   |   A D C _ F L A G _ J E O C   |   A D C _ F L A G _ E O C ) ;  
      
     / *   U p d a t e   A D C   s t a t e   m a c h i n e   * /  
     S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ I N J _ E O C ) ;  
      
     / *   D e t e r m i n e   w h e t h e r   a n y   f u r t h e r   c o n v e r s i o n   u p c o m i n g   o n   g r o u p   i n j e c t e d             * /  
     / *   b y   e x t e r n a l   t r i g g e r   o r   b y   a u t o m a t i c   i n j e c t e d   c o n v e r s i o n                                     * /  
     / *   f r o m   g r o u p   r e g u l a r .                                                                                                             * /  
     i f ( A D C _ I S _ S O F T W A R E _ S T A R T _ I N J E C T E D ( h a d c )                                           | |    
           ( H A L _ I S _ B I T _ C L R ( h a d c - > I n s t a n c e - > C R 1 ,   A D C _ C R 1 _ J A U T O )   & &            
           ( A D C _ I S _ S O F T W A R E _ S T A R T _ R E G U L A R ( h a d c )                 & &  
             ( h a d c - > I n i t . C o n t i n u o u s C o n v M o d e   = =   D I S A B L E )       )                 )       )  
     {  
         / *   S e t   A D C   s t a t e   * /  
         C L E A R _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ I N J _ B U S Y ) ;        
          
         i f   ( H A L _ I S _ B I T _ C L R ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ R E G _ B U S Y ) )  
         {  
             S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ R E A D Y ) ;  
         }  
     }  
      
     / *   R e t u r n   A D C   s t a t e   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e s   A D C ,   s t a r t s   c o n v e r s i o n   o f   i n j e c t e d   g r o u p   w i t h   i n t e r r u p t i o n .  
     *                     -   J E O C   ( e n d   o f   c o n v e r s i o n   o f   i n j e c t e d   g r o u p )  
     *                   E a c h   o f   t h e s e   i n t e r r u p t i o n s   h a s   i t s   d e d i c a t e d   c a l l b a c k   f u n c t i o n .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s .  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C E x _ I n j e c t e d S t a r t _ I T ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     H A L _ S t a t u s T y p e D e f   t m p _ h a l _ s t a t u s   =   H A L _ O K ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
      
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h a d c ) ;  
          
     / *   E n a b l e   t h e   A D C   p e r i p h e r a l   * /  
     t m p _ h a l _ s t a t u s   =   A D C _ E n a b l e ( h a d c ) ;  
      
     / *   S t a r t   c o n v e r s i o n   i f   A D C   i s   e f f e c t i v e l y   e n a b l e d   * /  
     i f   ( t m p _ h a l _ s t a t u s   = =   H A L _ O K )  
     {  
         / *   S e t   A D C   s t a t e                                                                                                                     * /  
         / *   -   C l e a r   s t a t e   b i t f i e l d   r e l a t e d   t o   i n j e c t e d   g r o u p   c o n v e r s i o n   r e s u l t s         * /  
         / *   -   S e t   s t a t e   b i t f i e l d   r e l a t e d   t o   i n j e c t e d   o p e r a t i o n                                           * /  
         A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,  
                                             H A L _ A D C _ S T A T E _ R E A D Y   |   H A L _ A D C _ S T A T E _ I N J _ E O C ,  
                                             H A L _ A D C _ S T A T E _ I N J _ B U S Y ) ;  
          
         / *   C a s e   o f   i n d e p e n d e n t   m o d e   o r   m u l t i m o d e   ( f o r   d e v i c e s   w i t h   s e v e r a l   A D C s ) :   * /  
         / *   S e t   m u l t i m o d e   s t a t e .                                                                                                       * /  
         i f   ( A D C _ N O N M U L T I M O D E _ O R _ M U L T I M O D E M A S T E R ( h a d c ) )  
         {  
             C L E A R _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ M U L T I M O D E _ S L A V E ) ;  
         }  
         e l s e  
         {  
             S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ M U L T I M O D E _ S L A V E ) ;  
         }  
          
         / *   C h e c k   i f   a   r e g u l a r   c o n v e r s i o n   i s   o n g o i n g   * /  
         / *   N o t e :   O n   t h i s   d e v i c e ,   t h e r e   i s   n o   A D C   e r r o r   c o d e   f i e l d s   r e l a t e d   t o           * /  
         / *               c o n v e r s i o n s   o n   g r o u p   i n j e c t e d   o n l y .   I n   c a s e   o f   c o n v e r s i o n   o n           * /  
         / *               g o i n g   o n   g r o u p   r e g u l a r ,   n o   e r r o r   c o d e   i s   r e s e t .                                     * /  
         i f   ( H A L _ I S _ B I T _ C L R ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ R E G _ B U S Y ) )  
         {  
             / *   R e s e t   A D C   a l l   e r r o r   c o d e   f i e l d s   * /  
             A D C _ C L E A R _ E R R O R C O D E ( h a d c ) ;  
         }  
          
         / *   P r o c e s s   u n l o c k e d   * /  
         / *   U n l o c k   b e f o r e   s t a r t i n g   A D C   c o n v e r s i o n s :   i n   c a s e   o f   p o t e n t i a l                       * /  
         / *   i n t e r r u p t i o n ,   t o   l e t   t h e   p r o c e s s   t o   A D C   I R Q   H a n d l e r .                                       * /  
         _ _ H A L _ U N L O C K ( h a d c ) ;  
          
         / *   C l e a r   i n j e c t e d   g r o u p   c o n v e r s i o n   f l a g   * /  
         / *   ( T o   e n s u r e   o f   n o   u n k n o w n   s t a t e   f r o m   p o t e n t i a l   p r e v i o u s   A D C   o p e r a t i o n s )   * /  
         _ _ H A L _ A D C _ C L E A R _ F L A G ( h a d c ,   A D C _ F L A G _ J E O C ) ;  
          
         / *   E n a b l e   e n d   o f   c o n v e r s i o n   i n t e r r u p t   f o r   i n j e c t e d   c h a n n e l s   * /  
         _ _ H A L _ A D C _ E N A B L E _ I T ( h a d c ,   A D C _ I T _ J E O C ) ;  
          
         / *   S t a r t   c o n v e r s i o n   o f   i n j e c t e d   g r o u p   i f   s o f t w a r e   s t a r t   h a s   b e e n   s e l e c t e d   * /  
         / *   a n d   i f   a u t o m a t i c   i n j e c t e d   c o n v e r s i o n   i s   d i s a b l e d .                                             * /  
         / *   I f   e x t e r n a l   t r i g g e r   h a s   b e e n   s e l e c t e d ,   c o n v e r s i o n   w i l l   s t a r t   a t   n e x t       * /  
         / *   t r i g g e r   e v e n t .                                                                                                                   * /  
         / *   I f   a u t o m a t i c   i n j e c t e d   c o n v e r s i o n   i s   e n a b l e d ,   c o n v e r s i o n   w i l l   s t a r t           * /  
         / *   a f t e r   n e x t   r e g u l a r   g r o u p   c o n v e r s i o n .                                                                       * /  
         i f   ( H A L _ I S _ B I T _ C L R ( h a d c - > I n s t a n c e - > C R 1 ,   A D C _ C R 1 _ J A U T O ) )  
         {  
             i f   ( A D C _ I S _ S O F T W A R E _ S T A R T _ I N J E C T E D ( h a d c )           & &  
                     A D C _ N O N M U L T I M O D E _ O R _ M U L T I M O D E M A S T E R ( h a d c )     )  
             {  
                 / *   S t a r t   A D C   c o n v e r s i o n   o n   i n j e c t e d   g r o u p   w i t h   S W   s t a r t   * /  
                 S E T _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   ( A D C _ C R 2 _ J S W S T A R T   |   A D C _ C R 2 _ J E X T T R I G ) ) ;  
             }  
             e l s e  
             {  
                 / *   S t a r t   A D C   c o n v e r s i o n   o n   i n j e c t e d   g r o u p   w i t h   e x t e r n a l   t r i g g e r   * /  
                 S E T _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ J E X T T R I G ) ;  
             }  
         }  
     }  
     e l s e  
     {  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h a d c ) ;  
     }  
      
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   t m p _ h a l _ s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     S t o p   c o n v e r s i o n   o f   i n j e c t e d   c h a n n e l s ,   d i s a b l e   i n t e r r u p t i o n   o f    
     *                   e n d - o f - c o n v e r s i o n .   D i s a b l e   A D C   p e r i p h e r a l   i f   n o   r e g u l a r   c o n v e r s i o n  
     *                   i s   o n   g o i n g .  
     *   @ n o t e       I f   A D C   m u s t   b e   d i s a b l e d   a n d   i f   c o n v e r s i o n   i s   o n   g o i n g   o n    
     *                   r e g u l a r   g r o u p ,   f u n c t i o n   H A L _ A D C _ S t o p   m u s t   b e   u s e d   t o   s t o p   b o t h  
     *                   i n j e c t e d   a n d   r e g u l a r   g r o u p s ,   a n d   d i s a b l e   t h e   A D C .  
     *   @ n o t e       I f   i n j e c t e d   g r o u p   m o d e   a u t o - i n j e c t i o n   i s   e n a b l e d ,  
     *                   f u n c t i o n   H A L _ A D C _ S t o p   m u s t   b e   u s e d .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C E x _ I n j e c t e d S t o p _ I T ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     H A L _ S t a t u s T y p e D e f   t m p _ h a l _ s t a t u s   =   H A L _ O K ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h a d c ) ;  
          
     / *   S t o p   p o t e n t i a l   c o n v e r s i o n   a n d   d i s a b l e   A D C   p e r i p h e r a l                                           * /  
     / *   C o n d i t i o n e d   t o :                                                                                                                     * /  
     / *   -   N o   c o n v e r s i o n   o n   t h e   o t h e r   g r o u p   ( r e g u l a r   g r o u p )   i s   i n t e n d e d   t o                 * /  
     / *       c o n t i n u e   ( i n j e c t e d   a n d   r e g u l a r   g r o u p s   s t o p   c o n v e r s i o n   a n d   A D C   d i s a b l e     * /  
     / *       a r e   c o m m o n )                                                                                                                         * /  
     / *   -   I n   c a s e   o f   a u t o - i n j e c t i o n   m o d e ,   H A L _ A D C _ S t o p   m u s t   b e   u s e d .                           * /    
     i f ( ( ( h a d c - > S t a t e   &   H A L _ A D C _ S T A T E _ R E G _ B U S Y )   = =   R E S E T )     & &  
           H A L _ I S _ B I T _ C L R ( h a d c - > I n s t a n c e - > C R 1 ,   A D C _ C R 1 _ J A U T O )       )  
     {  
         / *   S t o p   p o t e n t i a l   c o n v e r s i o n   o n   g o i n g ,   o n   r e g u l a r   a n d   i n j e c t e d   g r o u p s   * /  
         / *   D i s a b l e   A D C   p e r i p h e r a l   * /  
         t m p _ h a l _ s t a t u s   =   A D C _ C o n v e r s i o n S t o p _ D i s a b l e ( h a d c ) ;  
          
         / *   C h e c k   i f   A D C   i s   e f f e c t i v e l y   d i s a b l e d   * /  
         i f   ( t m p _ h a l _ s t a t u s   = =   H A L _ O K )  
         {  
             / *   D i s a b l e   A D C   e n d   o f   c o n v e r s i o n   i n t e r r u p t   f o r   i n j e c t e d   c h a n n e l s   * /  
             _ _ H A L _ A D C _ D I S A B L E _ I T ( h a d c ,   A D C _ I T _ J E O C ) ;  
              
             / *   S e t   A D C   s t a t e   * /  
             A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,  
                                                 H A L _ A D C _ S T A T E _ R E G _ B U S Y   |   H A L _ A D C _ S T A T E _ I N J _ B U S Y ,  
                                                 H A L _ A D C _ S T A T E _ R E A D Y ) ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   e r r o r   * /  
         S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ C O N F I G ) ;  
              
         t m p _ h a l _ s t a t u s   =   H A L _ E R R O R ;  
     }  
      
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h a d c ) ;  
      
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   t m p _ h a l _ s t a t u s ;  
 }  
  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x 6 )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 7 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 / * *  
     *   @ b r i e f     E n a b l e s   A D C ,   s t a r t s   c o n v e r s i o n   o f   r e g u l a r   g r o u p   a n d   t r a n s f e r s   r e s u l t  
     *                   t h r o u g h   D M A .  
     *                   M u l t i m o d e   m u s t   h a v e   b e e n   p r e v i o u s l y   c o n f i g u r e d   u s i n g    
     *                   H A L _ A D C E x _ M u l t i M o d e C o n f i g C h a n n e l ( )   f u n c t i o n .  
     *                   I n t e r r u p t i o n s   e n a b l e d   i n   t h i s   f u n c t i o n :  
     *                     -   D M A   t r a n s f e r   c o m p l e t e  
     *                     -   D M A   h a l f   t r a n s f e r  
     *                   E a c h   o f   t h e s e   i n t e r r u p t i o n s   h a s   i t s   d e d i c a t e d   c a l l b a c k   f u n c t i o n .  
     *   @ n o t e :     O n   S T M 3 2 F 1   d e v i c e s ,   A D C   s l a v e   r e g u l a r   g r o u p   m u s t   b e   c o n f i g u r e d    
     *                   w i t h   c o n v e r s i o n   t r i g g e r   A D C _ S O F T W A R E _ S T A R T .  
     *   @ n o t e :     A D C   s l a v e   c a n   b e   e n a b l e d   p r e l i m i n a r i l y   u s i n g   s i n g l e - m o d e      
     *                   H A L _ A D C _ S t a r t ( )   f u n c t i o n .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e   o f   A D C   m a s t e r   ( h a n d l e   o f   A D C   s l a v e   m u s t   n o t   b e   u s e d )  
     *   @ p a r a m     p D a t a :   T h e   d e s t i n a t i o n   B u f f e r   a d d r e s s .  
     *   @ p a r a m     L e n g t h :   T h e   l e n g t h   o f   d a t a   t o   b e   t r a n s f e r r e d   f r o m   A D C   p e r i p h e r a l   t o   m e m o r y .  
     *   @ r e t v a l   N o n e  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C E x _ M u l t i M o d e S t a r t _ D M A ( A D C _ H a n d l e T y p e D e f *   h a d c ,   u i n t 3 2 _ t *   p D a t a ,   u i n t 3 2 _ t   L e n g t h )  
 {  
     H A L _ S t a t u s T y p e D e f   t m p _ h a l _ s t a t u s   =   H A L _ O K ;  
     A D C _ H a n d l e T y p e D e f   t m p h a d c S l a v e = { 0 } ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ M U L T I M O D E _ M A S T E R _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F U N C T I O N A L _ S T A T E ( h a d c - > I n i t . C o n t i n u o u s C o n v M o d e ) ) ;  
      
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h a d c ) ;  
  
     / *   S e t   a   t e m p o r a r y   h a n d l e   o f   t h e   A D C   s l a v e   a s s o c i a t e d   t o   t h e   A D C   m a s t e r           * /  
     A D C _ M U L T I _ S L A V E ( h a d c ,   & t m p h a d c S l a v e ) ;  
      
     / *   O n   S T M 3 2 F 1   d e v i c e s ,   A D C   s l a v e   r e g u l a r   g r o u p   m u s t   b e   c o n f i g u r e d   w i t h             * /  
     / *   c o n v e r s i o n   t r i g g e r   A D C _ S O F T W A R E _ S T A R T .                                                                       * /  
     / *   N o t e :   E x t e r n a l   t r i g g e r   o f   A D C   s l a v e   m u s t   b e   e n a b l e d ,   i t   i s   a l r e a d y   d o n e     * /  
     / *               i n t o   f u n c t i o n   " H A L _ A D C _ I n i t ( ) " .                                                                         * /  
     i f ( ! A D C _ I S _ S O F T W A R E _ S T A R T _ R E G U L A R ( & t m p h a d c S l a v e ) )      
     {  
         / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   e r r o r   * /  
         S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ C O N F I G ) ;  
          
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h a d c ) ;  
          
         r e t u r n   H A L _ E R R O R ;  
     }  
      
     / *   E n a b l e   t h e   A D C   p e r i p h e r a l s :   m a s t e r   a n d   s l a v e   ( i n   c a s e   i f   n o t   a l r e a d y           * /  
     / *   e n a b l e d   p r e v i o u s l y )                                                                                                             * /  
     t m p _ h a l _ s t a t u s   =   A D C _ E n a b l e ( h a d c ) ;  
     i f   ( t m p _ h a l _ s t a t u s   = =   H A L _ O K )  
     {  
         t m p _ h a l _ s t a t u s   =   A D C _ E n a b l e ( & t m p h a d c S l a v e ) ;  
     }  
      
     / *   S t a r t   c o n v e r s i o n   i f   a l l   A D C s   o f   m u l t i m o d e   a r e   e f f e c t i v e l y   e n a b l e d   * /  
     i f   ( t m p _ h a l _ s t a t u s   = =   H A L _ O K )  
     {  
         / *   S e t   A D C   s t a t e   ( A D C   m a s t e r )                                                                                           * /  
         / *   -   C l e a r   s t a t e   b i t f i e l d   r e l a t e d   t o   r e g u l a r   g r o u p   c o n v e r s i o n   r e s u l t s           * /  
         / *   -   S e t   s t a t e   b i t f i e l d   r e l a t e d   t o   r e g u l a r   o p e r a t i o n                                             * /  
         A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,  
                                             H A L _ A D C _ S T A T E _ R E A D Y   |   H A L _ A D C _ S T A T E _ R E G _ E O C   |   H A L _ A D C _ S T A T E _ M U L T I M O D E _ S L A V E ,  
                                             H A L _ A D C _ S T A T E _ R E G _ B U S Y ) ;  
              
         / *   I f   c o n v e r s i o n s   o n   g r o u p   r e g u l a r   a r e   a l s o   t r i g g e r i n g   g r o u p   i n j e c t e d ,         * /  
         / *   u p d a t e   A D C   s t a t e .                                                                                                             * /  
         i f   ( R E A D _ B I T ( h a d c - > I n s t a n c e - > C R 1 ,   A D C _ C R 1 _ J A U T O )   ! =   R E S E T )  
         {  
             A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ I N J _ E O C ,   H A L _ A D C _ S T A T E _ I N J _ B U S Y ) ;      
         }  
          
         / *   P r o c e s s   u n l o c k e d   * /  
         / *   U n l o c k   b e f o r e   s t a r t i n g   A D C   c o n v e r s i o n s :   i n   c a s e   o f   p o t e n t i a l                       * /  
         / *   i n t e r r u p t i o n ,   t o   l e t   t h e   p r o c e s s   t o   A D C   I R Q   H a n d l e r .                                       * /  
         _ _ H A L _ U N L O C K ( h a d c ) ;  
          
         / *   S e t   A D C   e r r o r   c o d e   t o   n o n e   * /  
         A D C _ C L E A R _ E R R O R C O D E ( h a d c ) ;  
          
          
         / *   S e t   t h e   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
         h a d c - > D M A _ H a n d l e - > X f e r C p l t C a l l b a c k   =   A D C _ D M A C o n v C p l t ;  
                
         / *   S e t   t h e   D M A   h a l f   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
         h a d c - > D M A _ H a n d l e - > X f e r H a l f C p l t C a l l b a c k   =   A D C _ D M A H a l f C o n v C p l t ;  
          
         / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
         h a d c - > D M A _ H a n d l e - > X f e r E r r o r C a l l b a c k   =   A D C _ D M A E r r o r ;  
  
          
         / *   M a n a g e   A D C   a n d   D M A   s t a r t :   A D C   o v e r r u n   i n t e r r u p t i o n ,   D M A   s t a r t ,   A D C           * /  
         / *   s t a r t   ( i n   c a s e   o f   S W   s t a r t ) :                                                                                       * /  
          
         / *   C l e a r   r e g u l a r   g r o u p   c o n v e r s i o n   f l a g   a n d   o v e r r u n   f l a g   * /  
         / *   ( T o   e n s u r e   o f   n o   u n k n o w n   s t a t e   f r o m   p o t e n t i a l   p r e v i o u s   A D C   o p e r a t i o n s )   * /  
         _ _ H A L _ A D C _ C L E A R _ F L A G ( h a d c ,   A D C _ F L A G _ E O C ) ;  
          
         / *   E n a b l e   A D C   D M A   m o d e   o f   A D C   m a s t e r   * /  
         S E T _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ D M A ) ;  
          
         / *   S t a r t   t h e   D M A   c h a n n e l   * /  
         H A L _ D M A _ S t a r t _ I T ( h a d c - > D M A _ H a n d l e ,   ( u i n t 3 2 _ t ) & h a d c - > I n s t a n c e - > D R ,   ( u i n t 3 2 _ t ) p D a t a ,   L e n g t h ) ;  
          
         / *   S t a r t   c o n v e r s i o n   o f   r e g u l a r   g r o u p   i f   s o f t w a r e   s t a r t   h a s   b e e n   s e l e c t e d .   * /  
         / *   I f   e x t e r n a l   t r i g g e r   h a s   b e e n   s e l e c t e d ,   c o n v e r s i o n   w i l l   s t a r t   a t   n e x t       * /  
         / *   t r i g g e r   e v e n t .                                                                                                                   * /  
         / *   N o t e :   A l t e r n a t e   t r i g g e r   f o r   s i n g l e   c o n v e r s i o n   c o u l d   b e   t o   f o r c e   a n           * /  
         / *               a d d i t i o n a l   s e t   o f   b i t   A D O N   " h a d c - > I n s t a n c e - > C R 2   | =   A D C _ C R 2 _ A D O N ; " * /  
         i f   ( A D C _ I S _ S O F T W A R E _ S T A R T _ R E G U L A R ( h a d c ) )  
         {  
             / *   S t a r t   A D C   c o n v e r s i o n   o n   r e g u l a r   g r o u p   w i t h   S W   s t a r t   * /  
             S E T _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   ( A D C _ C R 2 _ S W S T A R T   |   A D C _ C R 2 _ E X T T R I G ) ) ;  
         }  
         e l s e  
         {  
             / *   S t a r t   A D C   c o n v e r s i o n   o n   r e g u l a r   g r o u p   w i t h   e x t e r n a l   t r i g g e r   * /  
             S E T _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ E X T T R I G ) ;  
         }  
     }  
     e l s e  
     {  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h a d c ) ;  
     }  
      
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   t m p _ h a l _ s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     S t o p   A D C   c o n v e r s i o n   o f   r e g u l a r   g r o u p   ( a n d   i n j e c t e d   c h a n n e l s   i n    
     *                   c a s e   o f   a u t o _ i n j e c t i o n   m o d e ) ,   d i s a b l e   A D C   D M A   t r a n s f e r ,   d i s a b l e    
     *                   A D C   p e r i p h e r a l .  
     *   @ n o t e       M u l t i m o d e   i s   k e p t   e n a b l e d   a f t e r   t h i s   f u n c t i o n .   T o   d i s a b l e   m u l t i m o d e    
     *                   ( s e t   w i t h   H A L _ A D C E x _ M u l t i M o d e C o n f i g C h a n n e l ( ) ,   A D C   m u s t   b e    
     *                   r e i n i t i a l i z e d   u s i n g   H A L _ A D C _ I n i t ( )   o r   H A L _ A D C _ R e I n i t ( ) .  
     *   @ n o t e       I n   c a s e   o f   D M A   c o n f i g u r e d   i n   c i r c u l a r   m o d e ,   f u n c t i o n    
     *                   H A L _ A D C _ S t o p _ D M A   m u s t   b e   c a l l e d   a f t e r   t h i s   f u n c t i o n   w i t h   h a n d l e   o f  
     *                   A D C   s l a v e ,   t o   p r o p e r l y   d i s a b l e   t h e   D M A   c h a n n e l .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e   o f   A D C   m a s t e r   ( h a n d l e   o f   A D C   s l a v e   m u s t   n o t   b e   u s e d )  
     *   @ r e t v a l   N o n e  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C E x _ M u l t i M o d e S t o p _ D M A ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     H A L _ S t a t u s T y p e D e f   t m p _ h a l _ s t a t u s   =   H A L _ O K ;  
     A D C _ H a n d l e T y p e D e f   t m p h a d c S l a v e = { 0 } ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ M U L T I M O D E _ M A S T E R _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
      
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h a d c ) ;  
  
     / *   S t o p   p o t e n t i a l   c o n v e r s i o n   o n   g o i n g ,   o n   r e g u l a r   a n d   i n j e c t e d   g r o u p s   * /  
     / *   D i s a b l e   A D C   m a s t e r   p e r i p h e r a l   * /  
     t m p _ h a l _ s t a t u s   =   A D C _ C o n v e r s i o n S t o p _ D i s a b l e ( h a d c ) ;  
      
     / *   C h e c k   i f   A D C   i s   e f f e c t i v e l y   d i s a b l e d   * /  
     i f ( t m p _ h a l _ s t a t u s   = =   H A L _ O K )  
     {  
         / *   S e t   a   t e m p o r a r y   h a n d l e   o f   t h e   A D C   s l a v e   a s s o c i a t e d   t o   t h e   A D C   m a s t e r       * /  
         A D C _ M U L T I _ S L A V E ( h a d c ,   & t m p h a d c S l a v e ) ;  
  
         / *   D i s a b l e   A D C   s l a v e   p e r i p h e r a l   * /  
         t m p _ h a l _ s t a t u s   =   A D C _ C o n v e r s i o n S t o p _ D i s a b l e ( & t m p h a d c S l a v e ) ;  
  
         / *   C h e c k   i f   A D C   i s   e f f e c t i v e l y   d i s a b l e d   * /  
         i f ( t m p _ h a l _ s t a t u s   ! =   H A L _ O K )  
         {  
             / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   e r r o r   * /  
             S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ I N T E R N A L ) ;  
  
             / *   P r o c e s s   u n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h a d c ) ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   D i s a b l e   A D C   D M A   m o d e   * /  
         C L E A R _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ D M A ) ;  
          
         / *   R e s e t   c o n f i g u r a t i o n   o f   A D C   D M A   c o n t i n u o u s   r e q u e s t   f o r   d u a l   m o d e   * /  
         C L E A R _ B I T ( h a d c - > I n s t a n c e - > C R 1 ,   A D C _ C R 1 _ D U A L M O D ) ;  
                  
         / *   D i s a b l e   t h e   D M A   c h a n n e l   ( i n   c a s e   o f   D M A   i n   c i r c u l a r   m o d e   o r   s t o p   w h i l e   * /  
         / *   w h i l e   D M A   t r a n s f e r   i s   o n   g o i n g )                                                                                 * /  
         t m p _ h a l _ s t a t u s   =   H A L _ D M A _ A b o r t ( h a d c - > D M A _ H a n d l e ) ;  
  
         / *   C h a n g e   A D C   s t a t e   ( A D C   m a s t e r )   * /  
         A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,  
                                             H A L _ A D C _ S T A T E _ R E G _ B U S Y   |   H A L _ A D C _ S T A T E _ I N J _ B U S Y ,  
                                             H A L _ A D C _ S T A T E _ R E A D Y ) ;  
     }  
      
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h a d c ) ;  
      
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   t m p _ h a l _ s t a t u s ;  
 }  
 # e n d i f   / *   d e f i n e d   S T M 3 2 F 1 0 3 x 6   | |   d e f i n e d   S T M 3 2 F 1 0 3 x B   | |   d e f i n e d   S T M 3 2 F 1 0 5 x C   | |   d e f i n e d   S T M 3 2 F 1 0 7 x C   | |   d e f i n e d   S T M 3 2 F 1 0 3 x E   | |   d e f i n e d   S T M 3 2 F 1 0 3 x G   * /  
  
 / * *  
     *   @ b r i e f     G e t   A D C   i n j e c t e d   g r o u p   c o n v e r s i o n   r e s u l t .  
     *   @ n o t e       R e a d i n g   r e g i s t e r   J D R x   a u t o m a t i c a l l y   c l e a r s   A D C   f l a g   J E O C  
     *                   ( A D C   g r o u p   i n j e c t e d   e n d   o f   u n i t a r y   c o n v e r s i o n ) .  
     *   @ n o t e       T h i s   f u n c t i o n   d o e s   n o t   c l e a r   A D C   f l a g   J E O S    
     *                   ( A D C   g r o u p   i n j e c t e d   e n d   o f   s e q u e n c e   c o n v e r s i o n )  
     *                   O c c u r r e n c e   o f   f l a g   J E O S   r i s i n g :  
     *                     -   I f   s e q u e n c e r   i s   c o m p o s e d   o f   1   r a n k ,   f l a g   J E O S   i s   e q u i v a l e n t  
     *                         t o   f l a g   J E O C .  
     *                     -   I f   s e q u e n c e r   i s   c o m p o s e d   o f   s e v e r a l   r a n k s ,   d u r i n g   t h e   s c a n  
     *                         s e q u e n c e   f l a g   J E O C   o n l y   i s   r a i s e d ,   a t   t h e   e n d   o f   t h e   s c a n   s e q u e n c e  
     *                         b o t h   f l a g s   J E O C   a n d   E O S   a r e   r a i s e d .  
     *                   F l a g   J E O S   m u s t   n o t   b e   c l e a r e d   b y   t h i s   f u n c t i o n   b e c a u s e  
     *                   i t   w o u l d   n o t   b e   c o m p l i a n t   w i t h   l o w   p o w e r   f e a t u r e s  
     *                   ( f e a t u r e   l o w   p o w e r   a u t o - w a i t ,   n o t   a v a i l a b l e   o n   a l l   S T M 3 2   f a m i l i e s ) .  
     *                   T o   c l e a r   t h i s   f l a g ,   e i t h e r   u s e   f u n c t i o n :    
     *                   i n   p r o g r a m m i n g   m o d e l   I T :   @ r e f   H A L _ A D C _ I R Q H a n d l e r ( ) ,   i n   p r o g r a m m i n g  
     *                   m o d e l   p o l l i n g :   @ r e f   H A L _ A D C E x _ I n j e c t e d P o l l F o r C o n v e r s i o n ( )    
     *                   o r   @ r e f   _ _ H A L _ A D C _ C L E A R _ F L A G ( & h a d c ,   A D C _ F L A G _ J E O S ) .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ p a r a m     I n j e c t e d R a n k :   t h e   c o n v e r t e d   A D C   i n j e c t e d   r a n k .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   A D C _ I N J E C T E D _ R A N K _ 1 :   I n j e c t e d   C h a n n e l 1   s e l e c t e d  
     *                         @ a r g   A D C _ I N J E C T E D _ R A N K _ 2 :   I n j e c t e d   C h a n n e l 2   s e l e c t e d  
     *                         @ a r g   A D C _ I N J E C T E D _ R A N K _ 3 :   I n j e c t e d   C h a n n e l 3   s e l e c t e d  
     *                         @ a r g   A D C _ I N J E C T E D _ R A N K _ 4 :   I n j e c t e d   C h a n n e l 4   s e l e c t e d  
     *   @ r e t v a l   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   d a t a  
     * /  
 u i n t 3 2 _ t   H A L _ A D C E x _ I n j e c t e d G e t V a l u e ( A D C _ H a n d l e T y p e D e f *   h a d c ,   u i n t 3 2 _ t   I n j e c t e d R a n k )  
 {  
     u i n t 3 2 _ t   t m p _ j d r   =   0 U ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ A D C _ I N J E C T E D _ R A N K ( I n j e c t e d R a n k ) ) ;  
      
     / *   G e t   A D C   c o n v e r t e d   v a l u e   * /    
     s w i t c h ( I n j e c t e d R a n k )  
     {      
         c a s e   A D C _ I N J E C T E D _ R A N K _ 4 :    
             t m p _ j d r   =   h a d c - > I n s t a n c e - > J D R 4 ;  
             b r e a k ;  
         c a s e   A D C _ I N J E C T E D _ R A N K _ 3 :    
             t m p _ j d r   =   h a d c - > I n s t a n c e - > J D R 3 ;  
             b r e a k ;  
         c a s e   A D C _ I N J E C T E D _ R A N K _ 2 :    
             t m p _ j d r   =   h a d c - > I n s t a n c e - > J D R 2 ;  
             b r e a k ;  
         c a s e   A D C _ I N J E C T E D _ R A N K _ 1 :  
         d e f a u l t :  
             t m p _ j d r   =   h a d c - > I n s t a n c e - > J D R 1 ;  
             b r e a k ;  
     }  
      
     / *   R e t u r n   A D C   c o n v e r t e d   v a l u e   * /    
     r e t u r n   t m p _ j d r ;  
 }  
  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x 6 )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 7 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 / * *  
     *   @ b r i e f     R e t u r n s   t h e   l a s t   A D C   M a s t e r & S l a v e   r e g u l a r   c o n v e r s i o n s   r e s u l t s   d a t a  
     *                   i n   t h e   s e l e c t e d   m u l t i   m o d e .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e   o f   A D C   m a s t e r   ( h a n d l e   o f   A D C   s l a v e   m u s t   n o t   b e   u s e d )  
     *   @ r e t v a l   T h e   c o n v e r t e d   d a t a   v a l u e .  
     * /  
 u i n t 3 2 _ t   H A L _ A D C E x _ M u l t i M o d e G e t V a l u e ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     u i n t 3 2 _ t   t m p D R   =   0 U ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ M U L T I M O D E _ M A S T E R _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
  
     / *   N o t e :   E O C   f l a g   i s   n o t   c l e a r e d   h e r e   b y   s o f t w a r e   b e c a u s e   a u t o m a t i c a l l y           * /  
     / *               c l e a r e d   b y   h a r d w a r e   w h e n   r e a d i n g   r e g i s t e r   D R .                                             * /  
      
     / *   O n   S T M 3 2 F 1   d e v i c e s ,   A D C 1   d a t a   r e g i s t e r   D R   c o n t a i n s   A D C 2   c o n v e r s i o n s             * /  
     / *   o n l y   i f   A D C 1   D M A   m o d e   i s   e n a b l e d .                                                                                 * /  
     t m p D R   =   h a d c - > I n s t a n c e - > D R ;  
  
     i f   ( H A L _ I S _ B I T _ C L R ( A D C 1 - > C R 2 ,   A D C _ C R 2 _ D M A ) )  
     {  
         t m p D R   | =   ( A D C 2 - > D R   < <   1 6 U ) ;  
     }  
          
     / *   R e t u r n   A D C   c o n v e r t e d   v a l u e   * /    
     r e t u r n   t m p D R ;  
 }  
 # e n d i f   / *   d e f i n e d   S T M 3 2 F 1 0 3 x 6   | |   d e f i n e d   S T M 3 2 F 1 0 3 x B   | |   d e f i n e d   S T M 3 2 F 1 0 5 x C   | |   d e f i n e d   S T M 3 2 F 1 0 7 x C   | |   d e f i n e d   S T M 3 2 F 1 0 3 x E   | |   d e f i n e d   S T M 3 2 F 1 0 3 x G   * /  
  
 / * *  
     *   @ b r i e f     I n j e c t e d   c o n v e r s i o n   c o m p l e t e   c a l l b a c k   i n   n o n   b l o c k i n g   m o d e    
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ A D C E x _ I n j e c t e d C o n v C p l t C a l l b a c k ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h a d c ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ A D C E x _ I n j e c t e d C o n v C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
     * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   E x t e n d e d   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *   @ b r i e f         E x t e n d e d   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *  
 @ v e r b a t i m        
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                           # # # # #   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =      
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   C o n f i g u r e   c h a n n e l s   o n   i n j e c t e d   g r o u p  
             ( + )   C o n f i g u r e   m u l t i m o d e  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e s   t h e   A D C   i n j e c t e d   g r o u p   a n d   t h e   s e l e c t e d   c h a n n e l   t o   b e  
     *                   l i n k e d   t o   t h e   i n j e c t e d   g r o u p .  
     *   @ n o t e       P o s s i b i l i t y   t o   u p d a t e   p a r a m e t e r s   o n   t h e   f l y :  
     *                   T h i s   f u n c t i o n   i n i t i a l i z e s   i n j e c t e d   g r o u p ,   f o l l o w i n g   c a l l s   t o   t h i s    
     *                   f u n c t i o n   c a n   b e   u s e d   t o   r e c o n f i g u r e   s o m e   p a r a m e t e r s   o f   s t r u c t u r e  
     *                   " A D C _ I n j e c t i o n C o n f T y p e D e f "   o n   t h e   f l y ,   w i t h o u t   r e s e t i n g   t h e   A D C .  
     *                   T h e   s e t t i n g   o f   t h e s e   p a r a m e t e r s   i s   c o n d i t i o n e d   t o   A D C   s t a t e :    
     *                   t h i s   f u n c t i o n   m u s t   b e   c a l l e d   w h e n   A D C   i s   n o t   u n d e r   c o n v e r s i o n .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ p a r a m     s C o n f i g I n j e c t e d :   S t r u c t u r e   o f   A D C   i n j e c t e d   g r o u p   a n d   A D C   c h a n n e l   f o r  
     *                   i n j e c t e d   g r o u p .  
     *   @ r e t v a l   N o n e  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C E x _ I n j e c t e d C o n f i g C h a n n e l ( A D C _ H a n d l e T y p e D e f *   h a d c ,   A D C _ I n j e c t i o n C o n f T y p e D e f *   s C o n f i g I n j e c t e d )  
 {  
     H A L _ S t a t u s T y p e D e f   t m p _ h a l _ s t a t u s   =   H A L _ O K ;  
     _ _ I O   u i n t 3 2 _ t   w a i t _ l o o p _ i n d e x   =   0 U ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ A D C _ C H A N N E L ( s C o n f i g I n j e c t e d - > I n j e c t e d C h a n n e l ) ) ;  
     a s s e r t _ p a r a m ( I S _ A D C _ S A M P L E _ T I M E ( s C o n f i g I n j e c t e d - > I n j e c t e d S a m p l i n g T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F U N C T I O N A L _ S T A T E ( s C o n f i g I n j e c t e d - > A u t o I n j e c t e d C o n v ) ) ;  
     a s s e r t _ p a r a m ( I S _ A D C _ E X T T R I G I N J E C ( s C o n f i g I n j e c t e d - > E x t e r n a l T r i g I n j e c C o n v ) ) ;  
     a s s e r t _ p a r a m ( I S _ A D C _ R A N G E ( s C o n f i g I n j e c t e d - > I n j e c t e d O f f s e t ) ) ;  
      
     i f ( h a d c - > I n i t . S c a n C o n v M o d e   ! =   A D C _ S C A N _ D I S A B L E )  
     {  
         a s s e r t _ p a r a m ( I S _ A D C _ I N J E C T E D _ R A N K ( s C o n f i g I n j e c t e d - > I n j e c t e d R a n k ) ) ;  
         a s s e r t _ p a r a m ( I S _ A D C _ I N J E C T E D _ N B _ C O N V ( s C o n f i g I n j e c t e d - > I n j e c t e d N b r O f C o n v e r s i o n ) ) ;  
         a s s e r t _ p a r a m ( I S _ F U N C T I O N A L _ S T A T E ( s C o n f i g I n j e c t e d - > I n j e c t e d D i s c o n t i n u o u s C o n v M o d e ) ) ;  
     }  
      
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h a d c ) ;  
      
     / *   C o n f i g u r a t i o n   o f   i n j e c t e d   g r o u p   s e q u e n c e r :                                                               * /  
     / *   -   i f   s c a n   m o d e   i s   d i s a b l e d ,   i n j e c t e d   c h a n n e l s   s e q u e n c e   l e n g t h   i s   s e t   t o     * /  
     / *       0 x 0 0 :   1   c h a n n e l   c o n v e r t e d   ( c h a n n e l   o n   r e g u l a r   r a n k   1 )                                     * /  
     / *       P a r a m e t e r   " I n j e c t e d N b r O f C o n v e r s i o n "   i s   d i s c a r d e d .                                             * /  
     / *       N o t e :   S c a n   m o d e   i s   p r e s e n t   b y   h a r d w a r e   o n   t h i s   d e v i c e   a n d ,   i f                     * /  
     / *       d i s a b l e d ,   d i s c a r d s   a u t o m a t i c a l l y   n b   o f   c o n v e r s i o n s .   A n y w a y ,   n b   o f             * /  
     / *       c o n v e r s i o n s   i s   f o r c e d   t o   0 x 0 0   f o r   a l i g n m e n t   o v e r   a l l   S T M 3 2   d e v i c e s .         * /  
     / *   -   i f   s c a n   m o d e   i s   e n a b l e d ,   i n j e c t e d   c h a n n e l s   s e q u e n c e   l e n g t h   i s   s e t   t o       * /  
     / *       p a r a m e t e r   " I n j e c t e d N b r O f C o n v e r s i o n " .                                                                       * /  
     i f   ( h a d c - > I n i t . S c a n C o n v M o d e   = =   A D C _ S C A N _ D I S A B L E )  
     {  
         i f   ( s C o n f i g I n j e c t e d - > I n j e c t e d R a n k   = =   A D C _ I N J E C T E D _ R A N K _ 1 )  
         {  
             / *   C l e a r   t h e   o l d   S Q x   b i t s   f o r   a l l   i n j e c t e d   r a n k s   * /  
             M O D I F Y _ R E G ( h a d c - > I n s t a n c e - > J S Q R                                                           ,  
                                   A D C _ J S Q R _ J L       |  
                                   A D C _ J S Q R _ J S Q 4   |  
                                   A D C _ J S Q R _ J S Q 3   |  
                                   A D C _ J S Q R _ J S Q 2   |  
                                   A D C _ J S Q R _ J S Q 1                                                                         ,  
                                   A D C _ J S Q R _ R K _ J L ( s C o n f i g I n j e c t e d - > I n j e c t e d C h a n n e l ,  
                                                                     A D C _ I N J E C T E D _ R A N K _ 1 ,  
                                                                     0 x 0 1 U ) ) ;  
         }  
         / *   I f   a n o t h e r   i n j e c t e d   r a n k   t h a n   r a n k 1   w a s   i n t e n d e d   t o   b e   s e t ,   a n d   c o u l d     * /  
         / *   n o t   d u e   t o   S c a n C o n v M o d e   d i s a b l e d ,   e r r o r   i s   r e p o r t e d .                                       * /  
         e l s e  
         {  
             / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   e r r o r   * /  
             S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ C O N F I G ) ;  
              
             t m p _ h a l _ s t a t u s   =   H A L _ E R R O R ;  
         }  
     }  
     e l s e  
     {  
         / *   S i n c e   i n j e c t e d   c h a n n e l s   r a n k   c o n v .   o r d e r   d e p e n d s   o n   t o t a l   n u m b e r   o f       * /  
         / *   i n j e c t e d   c o n v e r s i o n s ,   s e l e c t e d   r a n k   m u s t   b e   b e l o w   o r   e q u a l   t o   t o t a l       * /  
         / *   n u m b e r   o f   i n j e c t e d   c o n v e r s i o n s   t o   b e   u p d a t e d .                                                   * /  
         i f   ( s C o n f i g I n j e c t e d - > I n j e c t e d R a n k   < =   s C o n f i g I n j e c t e d - > I n j e c t e d N b r O f C o n v e r s i o n )  
         {  
             / *   C l e a r   t h e   o l d   S Q x   b i t s   f o r   t h e   s e l e c t e d   r a n k   * /  
             / *   S e t   t h e   S Q x   b i t s   f o r   t h e   s e l e c t e d   r a n k   * /  
             M O D I F Y _ R E G ( h a d c - > I n s t a n c e - > J S Q R                                                                                   ,  
                                    
                                   A D C _ J S Q R _ J L                                                                                               |  
                                   A D C _ J S Q R _ R K _ J L ( A D C _ J S Q R _ J S Q 1 ,                                                    
                                                                     s C o n f i g I n j e c t e d - > I n j e c t e d R a n k ,                    
                                                                     s C o n f i g I n j e c t e d - > I n j e c t e d N b r O f C o n v e r s i o n )       ,  
                                    
                                   A D C _ J S Q R _ J L _ S H I F T ( s C o n f i g I n j e c t e d - > I n j e c t e d N b r O f C o n v e r s i o n )   |  
                                   A D C _ J S Q R _ R K _ J L ( s C o n f i g I n j e c t e d - > I n j e c t e d C h a n n e l ,              
                                                                     s C o n f i g I n j e c t e d - > I n j e c t e d R a n k ,                    
                                                                     s C o n f i g I n j e c t e d - > I n j e c t e d N b r O f C o n v e r s i o n )         ) ;  
         }  
         e l s e  
         {  
             / *   C l e a r   t h e   o l d   S Q x   b i t s   f o r   t h e   s e l e c t e d   r a n k   * /  
             M O D I F Y _ R E G ( h a d c - > I n s t a n c e - > J S Q R                                                                               ,  
                                    
                                   A D C _ J S Q R _ J L                                                                                               |  
                                   A D C _ J S Q R _ R K _ J L ( A D C _ J S Q R _ J S Q 1 ,                                                    
                                                                     s C o n f i g I n j e c t e d - > I n j e c t e d R a n k ,                    
                                                                     s C o n f i g I n j e c t e d - > I n j e c t e d N b r O f C o n v e r s i o n )   ,  
                                    
                                   0 x 0 0 0 0 0 0 0 0 U ) ;  
         }  
     }    
          
     / *   C o n f i g u r a t i o n   o f   i n j e c t e d   g r o u p                                                                                     * /  
     / *   P a r a m e t e r s   u p d a t e   c o n d i t i o n e d   t o   A D C   s t a t e :                                                             * /  
     / *   P a r a m e t e r s   t h a t   c a n   b e   u p d a t e d   o n l y   w h e n   A D C   i s   d i s a b l e d :                                 * /  
     / *     -   e x t e r n a l   t r i g g e r   t o   s t a r t   c o n v e r s i o n                                                                     * /  
     / *   P a r a m e t e r s   u p d a t e   n o t   c o n d i t i o n e d   t o   A D C   s t a t e :                                                     * /  
     / *     -   A u t o m a t i c   i n j e c t e d   c o n v e r s i o n                                                                                   * /  
     / *     -   I n j e c t e d   d i s c o n t i n u o u s   m o d e                                                                                       * /  
     / *   N o t e :   I n   c a s e   o f   A D C   a l r e a d y   e n a b l e d ,   c a u t i o n   t o   n o t   l a u n c h   a n   u n w a n t e d     * /  
     / *               c o n v e r s i o n   w h i l e   m o d i f y i n g   r e g i s t e r   C R 2   b y   w r i t i n g   1   t o   b i t   A D O N .     * /  
     i f   ( A D C _ I S _ E N A B L E ( h a d c )   = =   R E S E T )  
     {          
         M O D I F Y _ R E G ( h a d c - > I n s t a n c e - > C R 2                                                                                       ,  
                               A D C _ C R 2 _ J E X T S E L   |  
                               A D C _ C R 2 _ A D O N                                                                                                     ,  
                               A D C _ C F G R _ J E X T S E L ( h a d c ,   s C o n f i g I n j e c t e d - > E x t e r n a l T r i g I n j e c C o n v )   ) ;  
     }  
      
      
     / *   C o n f i g u r a t i o n   o f   i n j e c t e d   g r o u p                                                                                     * /  
     / *     -   A u t o m a t i c   i n j e c t e d   c o n v e r s i o n                                                                                   * /  
     / *     -   I n j e c t e d   d i s c o n t i n u o u s   m o d e                                                                                       * /  
      
         / *   A u t o m a t i c   i n j e c t e d   c o n v e r s i o n   c a n   b e   e n a b l e d   i f   i n j e c t e d   g r o u p                   * /  
         / *   e x t e r n a l   t r i g g e r s   a r e   d i s a b l e d .                                                                                 * /  
         i f   ( s C o n f i g I n j e c t e d - > A u t o I n j e c t e d C o n v   = =   E N A B L E )  
         {  
             i f   ( s C o n f i g I n j e c t e d - > E x t e r n a l T r i g I n j e c C o n v   = =   A D C _ I N J E C T E D _ S O F T W A R E _ S T A R T )  
             {  
                 S E T _ B I T ( h a d c - > I n s t a n c e - > C R 1 ,   A D C _ C R 1 _ J A U T O ) ;  
             }  
             e l s e  
             {  
                 / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   e r r o r   * /  
                 S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ C O N F I G ) ;  
                  
                 t m p _ h a l _ s t a t u s   =   H A L _ E R R O R ;  
             }  
         }  
          
         / *   I n j e c t e d   d i s c o n t i n u o u s   c a n   b e   e n a b l e d   o n l y   i f   a u t o - i n j e c t e d   m o d e   i s         * /  
         / *   d i s a b l e d .                                                                                                                             * /      
         i f   ( s C o n f i g I n j e c t e d - > I n j e c t e d D i s c o n t i n u o u s C o n v M o d e   = =   E N A B L E )  
         {  
             i f   ( s C o n f i g I n j e c t e d - > A u t o I n j e c t e d C o n v   = =   D I S A B L E )  
             {  
                 S E T _ B I T ( h a d c - > I n s t a n c e - > C R 1 ,   A D C _ C R 1 _ J D I S C E N ) ;  
             }    
             e l s e  
             {  
                 / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   e r r o r   * /  
                 S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ C O N F I G ) ;  
                  
                 t m p _ h a l _ s t a t u s   =   H A L _ E R R O R ;  
             }  
         }  
  
  
     / *   I n j e c t e d C h a n n e l   s a m p l i n g   t i m e   c o n f i g u r a t i o n   * /  
     / *   F o r   c h a n n e l s   1 0   t o   1 7   * /  
     i f   ( s C o n f i g I n j e c t e d - > I n j e c t e d C h a n n e l   > =   A D C _ C H A N N E L _ 1 0 )  
     {  
         M O D I F Y _ R E G ( h a d c - > I n s t a n c e - > S M P R 1                                                                                                                           ,  
                               A D C _ S M P R 1 ( A D C _ S M P R 1 _ S M P 1 0 ,   s C o n f i g I n j e c t e d - > I n j e c t e d C h a n n e l )                                             ,  
                               A D C _ S M P R 1 ( s C o n f i g I n j e c t e d - > I n j e c t e d S a m p l i n g T i m e ,   s C o n f i g I n j e c t e d - > I n j e c t e d C h a n n e l )   ) ;  
     }  
     e l s e   / *   F o r   c h a n n e l s   0   t o   9   * /  
     {  
         M O D I F Y _ R E G ( h a d c - > I n s t a n c e - > S M P R 2                                                                                                                           ,  
                               A D C _ S M P R 2 ( A D C _ S M P R 2 _ S M P 0 ,   s C o n f i g I n j e c t e d - > I n j e c t e d C h a n n e l )                                               ,  
                               A D C _ S M P R 2 ( s C o n f i g I n j e c t e d - > I n j e c t e d S a m p l i n g T i m e ,   s C o n f i g I n j e c t e d - > I n j e c t e d C h a n n e l )   ) ;  
     }  
      
     / *   I f   A D C 1   I n j e c t e d C h a n n e l _ 1 6   o r   I n j e c t e d C h a n n e l _ 1 7   i s   s e l e c t e d ,   e n a b l e   T e m p e r a t u r e   s e n s o r     * /  
     / *   a n d   V R E F I N T   m e a s u r e m e n t   p a t h .                                                                                         * /  
     i f   ( ( s C o n f i g I n j e c t e d - > I n j e c t e d C h a n n e l   = =   A D C _ C H A N N E L _ T E M P S E N S O R )   | |  
             ( s C o n f i g I n j e c t e d - > I n j e c t e d C h a n n e l   = =   A D C _ C H A N N E L _ V R E F I N T )             )  
     {  
         S E T _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ T S V R E F E ) ;  
     }  
      
      
     / *   C o n f i g u r e   t h e   o f f s e t :   o f f s e t   e n a b l e / d i s a b l e ,   I n j e c t e d C h a n n e l ,   o f f s e t   v a l u e   * /  
     s w i t c h ( s C o n f i g I n j e c t e d - > I n j e c t e d R a n k )  
     {  
         c a s e   1 :  
             / *   S e t   i n j e c t e d   c h a n n e l   1   o f f s e t   * /  
             M O D I F Y _ R E G ( h a d c - > I n s t a n c e - > J O F R 1 ,  
                                   A D C _ J O F R 1 _ J O F F S E T 1 ,  
                                   s C o n f i g I n j e c t e d - > I n j e c t e d O f f s e t ) ;  
             b r e a k ;  
         c a s e   2 :  
             / *   S e t   i n j e c t e d   c h a n n e l   2   o f f s e t   * /  
             M O D I F Y _ R E G ( h a d c - > I n s t a n c e - > J O F R 2 ,  
                                   A D C _ J O F R 2 _ J O F F S E T 2 ,  
                                   s C o n f i g I n j e c t e d - > I n j e c t e d O f f s e t ) ;  
             b r e a k ;  
         c a s e   3 :  
             / *   S e t   i n j e c t e d   c h a n n e l   3   o f f s e t   * /  
             M O D I F Y _ R E G ( h a d c - > I n s t a n c e - > J O F R 3 ,  
                                   A D C _ J O F R 3 _ J O F F S E T 3 ,  
                                   s C o n f i g I n j e c t e d - > I n j e c t e d O f f s e t ) ;  
             b r e a k ;  
         c a s e   4 :  
         d e f a u l t :  
             M O D I F Y _ R E G ( h a d c - > I n s t a n c e - > J O F R 4 ,  
                                   A D C _ J O F R 4 _ J O F F S E T 4 ,  
                                   s C o n f i g I n j e c t e d - > I n j e c t e d O f f s e t ) ;  
             b r e a k ;  
     }  
      
     / *   I f   A D C 1   C h a n n e l _ 1 6   o r   C h a n n e l _ 1 7   i s   s e l e c t e d ,   e n a b l e   T e m p e r a t u r e   s e n s o r     * /  
     / *   a n d   V R E F I N T   m e a s u r e m e n t   p a t h .                                                                                         * /  
     i f   ( ( s C o n f i g I n j e c t e d - > I n j e c t e d C h a n n e l   = =   A D C _ C H A N N E L _ T E M P S E N S O R )   | |  
             ( s C o n f i g I n j e c t e d - > I n j e c t e d C h a n n e l   = =   A D C _ C H A N N E L _ V R E F I N T )             )  
     {  
         / *   F o r   S T M 3 2 F 1   d e v i c e s   w i t h   s e v e r a l   A D C :   O n l y   A D C 1   c a n   a c c e s s   i n t e r n a l         * /  
         / *   m e a s u r e m e n t   c h a n n e l s   ( V r e f I n t / T e m p S e n s o r ) .   I f   t h e s e   c h a n n e l s   a r e               * /  
         / *   i n t e n d e d   t o   b e   s e t   o n   o t h e r   A D C   i n s t a n c e s ,   a n   e r r o r   i s   r e p o r t e d .               * /  
         i f   ( h a d c - > I n s t a n c e   = =   A D C 1 )  
         {  
             i f   ( R E A D _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ T S V R E F E )   = =   R E S E T )  
             {  
                 S E T _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ T S V R E F E ) ;  
                  
                 i f   ( ( s C o n f i g I n j e c t e d - > I n j e c t e d C h a n n e l   = =   A D C _ C H A N N E L _ T E M P S E N S O R ) )  
                 {  
                     / *   D e l a y   f o r   t e m p e r a t u r e   s e n s o r   s t a b i l i z a t i o n   t i m e   * /  
                     / *   C o m p u t e   n u m b e r   o f   C P U   c y c l e s   t o   w a i t   f o r   * /  
                     w a i t _ l o o p _ i n d e x   =   ( A D C _ T E M P S E N S O R _ D E L A Y _ U S   *   ( S y s t e m C o r e C l o c k   /   1 0 0 0 0 0 0 U ) ) ;  
                     w h i l e ( w a i t _ l o o p _ i n d e x   ! =   0 U )  
                     {  
                         w a i t _ l o o p _ i n d e x - - ;  
                     }  
                 }  
             }  
         }  
         e l s e  
         {  
             / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   e r r o r   * /  
             S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ C O N F I G ) ;  
              
             t m p _ h a l _ s t a t u s   =   H A L _ E R R O R ;  
         }  
     }  
      
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h a d c ) ;  
      
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   t m p _ h a l _ s t a t u s ;  
 }  
  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x 6 )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 7 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 / * *  
     *   @ b r i e f     E n a b l e   A D C   m u l t i m o d e   a n d   c o n f i g u r e   m u l t i m o d e   p a r a m e t e r s  
     *   @ n o t e       P o s s i b i l i t y   t o   u p d a t e   p a r a m e t e r s   o n   t h e   f l y :  
     *                   T h i s   f u n c t i o n   i n i t i a l i z e s   m u l t i m o d e   p a r a m e t e r s ,   f o l l o w i n g      
     *                   c a l l s   t o   t h i s   f u n c t i o n   c a n   b e   u s e d   t o   r e c o n f i g u r e   s o m e   p a r a m e t e r s    
     *                   o f   s t r u c t u r e   " A D C _ M u l t i M o d e T y p e D e f "   o n   t h e   f l y ,   w i t h o u t   r e s e t i n g    
     *                   t h e   A D C s   ( b o t h   A D C s   o f   t h e   c o m m o n   g r o u p ) .  
     *                   T h e   s e t t i n g   o f   t h e s e   p a r a m e t e r s   i s   c o n d i t i o n e d   t o   A D C   s t a t e .  
     *                   F o r   p a r a m e t e r s   c o n s t r a i n t s ,   s e e   c o m m e n t s   o f   s t r u c t u r e    
     *                   " A D C _ M u l t i M o d e T y p e D e f " .  
     *   @ n o t e       T o   c h a n g e   b a c k   c o n f i g u r a t i o n   f r o m   m u l t i m o d e   t o   s i n g l e   m o d e ,   A D C   m u s t  
     *                   b e   r e s e t   ( u s i n g   f u n c t i o n   H A L _ A D C _ I n i t ( )   ) .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ p a r a m     m u l t i m o d e :   S t r u c t u r e   o f   A D C   m u l t i m o d e   c o n f i g u r a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C E x _ M u l t i M o d e C o n f i g C h a n n e l ( A D C _ H a n d l e T y p e D e f *   h a d c ,   A D C _ M u l t i M o d e T y p e D e f *   m u l t i m o d e )  
 {  
     H A L _ S t a t u s T y p e D e f   t m p _ h a l _ s t a t u s   =   H A L _ O K ;  
     A D C _ H a n d l e T y p e D e f   t m p h a d c S l a v e = { 0 } ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ M U L T I M O D E _ M A S T E R _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ A D C _ M O D E ( m u l t i m o d e - > M o d e ) ) ;  
      
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h a d c ) ;  
      
     / *   S e t   a   t e m p o r a r y   h a n d l e   o f   t h e   A D C   s l a v e   a s s o c i a t e d   t o   t h e   A D C   m a s t e r           * /  
     A D C _ M U L T I _ S L A V E ( h a d c ,   & t m p h a d c S l a v e ) ;  
      
     / *   P a r a m e t e r s   u p d a t e   c o n d i t i o n e d   t o   A D C   s t a t e :                                                             * /  
     / *   P a r a m e t e r s   t h a t   c a n   b e   u p d a t e d   w h e n   A D C   i s   d i s a b l e d   o r   e n a b l e d   w i t h o u t       * /  
     / *   c o n v e r s i o n   o n   g o i n g   o n   r e g u l a r   g r o u p :                                                                         * /  
     / *     -   A D C   m a s t e r   a n d   A D C   s l a v e   D M A   c o n f i g u r a t i o n                                                         * /  
     / *   P a r a m e t e r s   t h a t   c a n   b e   u p d a t e d   o n l y   w h e n   A D C   i s   d i s a b l e d :                                 * /  
     / *     -   M u l t i m o d e   m o d e   s e l e c t i o n                                                                                             * /  
     / *   T o   o p t i m i z e   c o d e ,   a l l   m u l t i m o d e   s e t t i n g s   c a n   b e   s e t   w h e n   b o t h   A D C s   o f         * /  
     / *   t h e   c o m m o n   g r o u p   a r e   i n   s t a t e :   d i s a b l e d .                                                                   * /  
     i f   ( ( A D C _ I S _ E N A B L E ( h a d c )   = =   R E S E T )                                           & &  
             ( A D C _ I S _ E N A B L E ( & t m p h a d c S l a v e )   = =   R E S E T )                         & &  
             ( I S _ A D C _ M U L T I M O D E _ M A S T E R _ I N S T A N C E ( h a d c - > I n s t a n c e ) )       )  
     {  
         M O D I F Y _ R E G ( h a d c - > I n s t a n c e - > C R 1 ,  
                               A D C _ C R 1 _ D U A L M O D         ,  
                               m u l t i m o d e - > M o d e           ) ;  
     }  
     / *   I f   o n e   o f   t h e   A D C   s h a r i n g   t h e   s a m e   c o m m o n   g r o u p   i s   e n a b l e d ,   n o   u p d a t e         * /  
     / *   c o u l d   b e   d o n e   o n   n e i t h e r   o f   t h e   m u l t i m o d e   s t r u c t u r e   p a r a m e t e r s .                     * /  
     e l s e  
     {  
         / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   e r r o r   * /  
         S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ C O N F I G ) ;  
          
         t m p _ h a l _ s t a t u s   =   H A L _ E R R O R ;  
     }  
          
          
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h a d c ) ;  
      
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   t m p _ h a l _ s t a t u s ;  
 }    
 # e n d i f   / *   d e f i n e d   S T M 3 2 F 1 0 3 x 6   | |   d e f i n e d   S T M 3 2 F 1 0 3 x B   | |   d e f i n e d   S T M 3 2 F 1 0 5 x C   | |   d e f i n e d   S T M 3 2 F 1 0 7 x C   | |   d e f i n e d   S T M 3 2 F 1 0 3 x E   | |   d e f i n e d   S T M 3 2 F 1 0 3 x G   * /  
 / * *  
     *   @ }  
     * /      
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   H A L _ A D C _ M O D U L E _ E N A B L E D   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  