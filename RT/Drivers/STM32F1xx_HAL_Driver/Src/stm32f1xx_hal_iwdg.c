??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ i w d g . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       I W D G   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                     f u n c t i o n a l i t i e s   o f   t h e   I n d e p e n d e n t   W a t c h d o g   ( I W D G )   p e r i p h e r a l :  
     *                       +   I n i t i a l i z a t i o n   a n d   S t a r t   f u n c t i o n s  
     *                       +   I O   o p e r a t i o n   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                         # # # # #   I W D G   G e n e r i c   f e a t u r e s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         ( + )   T h e   I W D G   c a n   b e   s t a r t e d   b y   e i t h e r   s o f t w a r e   o r   h a r d w a r e   ( c o n f i g u r a b l e  
                 t h r o u g h   o p t i o n   b y t e ) .  
  
         ( + )   T h e   I W D G   i s   c l o c k e d   b y   t h e   L o w - S p e e d   I n t e r n a l   c l o c k   ( L S I )   a n d   t h u s   s t a y s  
                 a c t i v e   e v e n   i f   t h e   m a i n   c l o c k   f a i l s .  
  
         ( + )   O n c e   t h e   I W D G   i s   s t a r t e d ,   t h e   L S I   i s   f o r c e d   O N   a n d   b o t h   c a n n o t   b e  
                 d i s a b l e d .   T h e   c o u n t e r   s t a r t s   c o u n t i n g   d o w n   f r o m   t h e   r e s e t   v a l u e   ( 0 x F F F ) .  
                 W h e n   i t   r e a c h e s   t h e   e n d   o f   c o u n t   v a l u e   ( 0 x 0 0 0 )   a   r e s e t   s i g n a l   i s  
                 g e n e r a t e d   ( I W D G   r e s e t ) .  
  
         ( + )   W h e n e v e r   t h e   k e y   v a l u e   0 x 0 0 0 0   A A A A   i s   w r i t t e n   i n   t h e   I W D G _ K R   r e g i s t e r ,  
                 t h e   I W D G _ R L R   v a l u e   i s   r e l o a d e d   i n t o   t h e   c o u n t e r   a n d   t h e   w a t c h d o g   r e s e t  
                 i s   p r e v e n t e d .  
  
         ( + )   T h e   I W D G   i s   i m p l e m e n t e d   i n   t h e   V D D   v o l t a g e   d o m a i n   t h a t   i s   s t i l l   f u n c t i o n a l  
                 i n   S T O P   a n d   S T A N D B Y   m o d e   ( I W D G   r e s e t   c a n   w a k e   u p   t h e   C P U   f r o m   S T A N D B Y ) .  
                 I W D G R S T   f l a g   i n   R C C _ C S R   r e g i s t e r   c a n   b e   u s e d   t o   i n f o r m   w h e n   a n   I W D G  
                 r e s e t   o c c u r s .  
  
         ( + )   D e b u g   m o d e :   W h e n   t h e   m i c r o c o n t r o l l e r   e n t e r s   d e b u g   m o d e   ( c o r e   h a l t e d ) ,  
                 t h e   I W D G   c o u n t e r   e i t h e r   c o n t i n u e s   t o   w o r k   n o r m a l l y   o r   s t o p s ,   d e p e n d i n g  
                 o n   D B G _ I W D G _ S T O P   c o n f i g u r a t i o n   b i t   i n   D B G   m o d u l e ,   a c c e s s i b l e   t h r o u g h  
                 _ _ H A L _ D B G M C U _ F R E E Z E _ I W D G ( )   a n d   _ _ H A L _ D B G M C U _ U N F R E E Z E _ I W D G ( )   m a c r o s .  
  
         [ . . ]   M i n - m a x   t i m e o u t   v a l u e   @ 3 2 K H z   ( L S I ) :   ~ 1 2 5 u s   /   ~ 3 2 . 7 s  
                   T h e   I W D G   t i m e o u t   m a y   v a r y   d u e   t o   L S I   c l o c k   f r e q u e n c y   d i s p e r s i o n .  
                   S T M 3 2 F 1 x x   d e v i c e s   p r o v i d e   t h e   c a p a b i l i t y   t o   m e a s u r e   t h e   L S I   c l o c k  
                   f r e q u e n c y   ( L S I   c l o c k   i s   i n t e r n a l l y   c o n n e c t e d   t o   T I M 5   C H 4   i n p u t   c a p t u r e ) .  
                   T h e   m e a s u r e d   v a l u e   c a n   b e   u s e d   t o   h a v e   a n   I W D G   t i m e o u t   w i t h   a n  
                   a c c e p t a b l e   a c c u r a c y .  
  
         [ . . ]   D e f a u l t   t i m e o u t   v a l u e   ( n e c e s s a r y   f o r   I W D G _ S R   s t a t u s   r e g i s t e r   u p d a t e ) :  
                   C o n s t a n t   L S I _ V A L U E   i s   d e f i n e d   b a s e d   o n   t h e   n o m i n a l   L S I   c l o c k   f r e q u e n c y .  
                   T h i s   f r e q u e n c y   b e i n g   s u b j e c t   t o   v a r i a t i o n s   a s   m e n t i o n e d   a b o v e ,   t h e  
                   d e f a u l t   t i m e o u t   v a l u e   ( d e f i n e d   t h r o u g h   c o n s t a n t   H A L _ I W D G _ D E F A U L T _ T I M E O U T  
                   b e l o w )   m a y   b e c o m e   t o o   s h o r t   o r   t o o   l o n g .  
                   I n   s u c h   c a s e s ,   t h i s   d e f a u l t   t i m e o u t   v a l u e   c a n   b e   t u n e d   b y   r e d e f i n i n g  
                   t h e   c o n s t a n t   L S I _ V A L U E   a t   u s e r - a p p l i c a t i o n   l e v e l   ( b a s e d ,   f o r   i n s t a n c e ,  
                   o n   t h e   m e a s u r e d   L S I   c l o c k   f r e q u e n c y   a s   e x p l a i n e d   a b o v e ) .  
  
                                           # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         ( # )   U s e   I W D G   u s i n g   H A L _ I W D G _ I n i t ( )   f u n c t i o n   t o   :  
             ( + + )   E n a b l e   i n s t a n c e   b y   w r i t i n g   S t a r t   k e y w o r d   i n   I W D G _ K E Y   r e g i s t e r .   L S I  
                       c l o c k   i s   f o r c e d   O N   a n d   I W D G   c o u n t e r   s t a r t s   c o u n t i n g   d o w n .  
             ( + + )   E n a b l e   w r i t e   a c c e s s   t o   c o n f i g u r a t i o n   r e g i s t e r s :  
                     I W D G _ P R   a n d   I W D G _ R L R .  
             ( + + )   C o n f i g u r e   t h e   I W D G   p r e s c a l e r   a n d   c o u n t e r   r e l o a d   v a l u e .   T h i s   r e l o a d  
                       v a l u e   w i l l   b e   l o a d e d   i n   t h e   I W D G   c o u n t e r   e a c h   t i m e   t h e   w a t c h d o g   i s  
                       r e l o a d e d ,   t h e n   t h e   I W D G   w i l l   s t a r t   c o u n t i n g   d o w n   f r o m   t h i s   v a l u e .  
             ( + + )   W a i t   f o r   s t a t u s   f l a g s   t o   b e   r e s e t .  
  
         ( # )   T h e n   t h e   a p p l i c a t i o n   p r o g r a m   m u s t   r e f r e s h   t h e   I W D G   c o u n t e r   a t   r e g u l a r  
                 i n t e r v a l s   d u r i n g   n o r m a l   o p e r a t i o n   t o   p r e v e n t   a n   M C U   r e s e t ,   u s i n g  
                 H A L _ I W D G _ R e f r e s h ( )   f u n c t i o n .  
  
           * * *   I W D G   H A L   d r i v e r   m a c r o s   l i s t   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
           [ . . ]  
               B e l o w   t h e   l i s t   o f   m o s t   u s e d   m a c r o s   i n   I W D G   H A L   d r i v e r :  
             ( + )   _ _ H A L _ I W D G _ S T A R T :   E n a b l e   t h e   I W D G   p e r i p h e r a l  
             ( + )   _ _ H A L _ I W D G _ R E L O A D _ C O U N T E R :   R e l o a d s   I W D G   c o u n t e r   w i t h   v a l u e   d e f i n e d   i n  
                     t h e   r e l o a d   r e g i s t e r  
  
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
 # i f d e f   H A L _ I W D G _ M O D U L E _ E N A B L E D  
 / * *   @ a d d t o g r o u p   I W D G  
     *   @ b r i e f   I W D G   H A L   m o d u l e   d r i v e r .  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   I W D G _ P r i v a t e _ D e f i n e s   I W D G   P r i v a t e   D e f i n e s  
     *   @ {  
     * /  
 / *   S t a t u s   r e g i s t e r   n e e d s   u p   t o   5   L S I   c l o c k   p e r i o d s   d i v i d e d   b y   t h e   c l o c k  
       p r e s c a l e r   t o   b e   u p d a t e d .   T h e   n u m b e r   o f   L S I   c l o c k   p e r i o d s   i s   u p p e r - r o u n d e d   t o  
       6   f o r   t h e   t i m e o u t   v a l u e   c a l c u l a t i o n .  
       T h e   t i m e o u t   v a l u e   i s   c a l c u l a t e d   u s i n g   t h e   h i g h e s t   p r e s c a l e r   ( 2 5 6 )   a n d  
       t h e   L S I _ V A L U E   c o n s t a n t .   T h e   v a l u e   o f   t h i s   c o n s t a n t   c a n   b e   c h a n g e d   b y   t h e   u s e r  
       t o   t a k e   i n t o   a c c o u n t   p o s s i b l e   L S I   c l o c k   p e r i o d   v a r i a t i o n s .  
       T h e   t i m e o u t   v a l u e   i s   m u l t i p l i e d   b y   1 0 0 0   t o   b e   c o n v e r t e d   i n   m i l l i s e c o n d s .  
       L S I   s t a r t u p   t i m e   i s   a l s o   c o n s i d e r e d   h e r e   b y   a d d i n g   L S I _ S T A R T U P _ T I M E O U T  
       c o n v e r t e d   i n   m i l l i s e c o n d s .   * /  
 # d e f i n e   H A L _ I W D G _ D E F A U L T _ T I M E O U T                 ( ( ( 6 U L   *   2 5 6 U L   *   1 0 0 0 U L )   /   L S I _ V A L U E )   +   ( ( L S I _ S T A R T U P _ T I M E   /   1 0 0 0 U L )   +   1 U L ) )  
 # d e f i n e   I W D G _ K E R N E L _ U P D A T E _ F L A G S                 ( I W D G _ S R _ R V U   |   I W D G _ S R _ P V U )  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ a d d t o g r o u p   I W D G _ E x p o r t e d _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   I W D G _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1  
     *     @ b r i e f         I n i t i a l i z a t i o n   a n d   S t a r t   f u n c t i o n s .  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                     # # # # #   I n i t i a l i z a t i o n   a n d   S t a r t   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
   [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   I n i t i a l i z e   t h e   I W D G   a c c o r d i n g   t o   t h e   s p e c i f i e d   p a r a m e t e r s   i n   t h e  
                     I W D G _ I n i t T y p e D e f   o f   a s s o c i a t e d   h a n d l e .  
             ( + )   O n c e   i n i t i a l i z a t i o n   i s   p e r f o r m e d   i n   H A L _ I W D G _ I n i t   f u n c t i o n ,   W a t c h d o g  
                     i s   r e l o a d e d   i n   o r d e r   t o   e x i t   f u n c t i o n   w i t h   c o r r e c t   t i m e   b a s e .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   t h e   I W D G   a c c o r d i n g   t o   t h e   s p e c i f i e d   p a r a m e t e r s   i n   t h e  
     *                   I W D G _ I n i t T y p e D e f   a n d   s t a r t   w a t c h d o g .   B e f o r e   e x i t i n g   f u n c t i o n ,  
     *                   w a t c h d o g   i s   r e f r e s h e d   i n   o r d e r   t o   h a v e   c o r r e c t   t i m e   b a s e .  
     *   @ p a r a m     h i w d g     p o i n t e r   t o   a   I W D G _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I W D G   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I W D G _ I n i t ( I W D G _ H a n d l e T y p e D e f   * h i w d g )  
 {  
     u i n t 3 2 _ t   t i c k s t a r t ;  
  
     / *   C h e c k   t h e   I W D G   h a n d l e   a l l o c a t i o n   * /  
     i f   ( h i w d g   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I W D G _ A L L _ I N S T A N C E ( h i w d g - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ I W D G _ P R E S C A L E R ( h i w d g - > I n i t . P r e s c a l e r ) ) ;  
     a s s e r t _ p a r a m ( I S _ I W D G _ R E L O A D ( h i w d g - > I n i t . R e l o a d ) ) ;  
  
     / *   E n a b l e   I W D G .   L S I   i s   t u r n e d   o n   a u t o m a t i c a l l y   * /  
     _ _ H A L _ I W D G _ S T A R T ( h i w d g ) ;  
  
     / *   E n a b l e   w r i t e   a c c e s s   t o   I W D G _ P R   a n d   I W D G _ R L R   r e g i s t e r s   b y   w r i t i n g  
     0 x 5 5 5 5   i n   K R   * /  
     I W D G _ E N A B L E _ W R I T E _ A C C E S S ( h i w d g ) ;  
  
     / *   W r i t e   t o   I W D G   r e g i s t e r s   t h e   P r e s c a l e r   &   R e l o a d   v a l u e s   t o   w o r k   w i t h   * /  
     h i w d g - > I n s t a n c e - > P R   =   h i w d g - > I n i t . P r e s c a l e r ;  
     h i w d g - > I n s t a n c e - > R L R   =   h i w d g - > I n i t . R e l o a d ;  
  
     / *   C h e c k   p e n d i n g   f l a g ,   i f   p r e v i o u s   u p d a t e   n o t   d o n e ,   r e t u r n   t i m e o u t   * /  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     / *   W a i t   f o r   r e g i s t e r   t o   b e   u p d a t e d   * /  
     w h i l e   ( ( h i w d g - > I n s t a n c e - > S R   &   I W D G _ K E R N E L _ U P D A T E _ F L A G S )   ! =   0 x 0 0 u )  
     {  
         i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   H A L _ I W D G _ D E F A U L T _ T I M E O U T )  
         {  
             i f   ( ( h i w d g - > I n s t a n c e - > S R   &   I W D G _ K E R N E L _ U P D A T E _ F L A G S )   ! =   0 x 0 0 u )  
             {  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
         }  
     }  
  
     / *   R e l o a d   I W D G   c o u n t e r   w i t h   v a l u e   d e f i n e d   i n   t h e   r e l o a d   r e g i s t e r   * /  
     _ _ H A L _ I W D G _ R E L O A D _ C O U N T E R ( h i w d g ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
  
 / * *  
     *   @ }  
     * /  
  
  
 / * *   @ a d d t o g r o u p   I W D G _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2  
     *     @ b r i e f       I O   o p e r a t i o n   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   I O   o p e r a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
   [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   R e f r e s h   t h e   I W D G .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e f r e s h   t h e   I W D G .  
     *   @ p a r a m     h i w d g     p o i n t e r   t o   a   I W D G _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I W D G   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I W D G _ R e f r e s h ( I W D G _ H a n d l e T y p e D e f   * h i w d g )  
 {  
     / *   R e l o a d   I W D G   c o u n t e r   w i t h   v a l u e   d e f i n e d   i n   t h e   r e l o a d   r e g i s t e r   * /  
     _ _ H A L _ I W D G _ R E L O A D _ C O U N T E R ( h i w d g ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   H A L _ I W D G _ M O D U L E _ E N A B L E D   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  