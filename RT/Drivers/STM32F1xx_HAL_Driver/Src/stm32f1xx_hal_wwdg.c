??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ w w d g . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       W W D G   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                     f u n c t i o n a l i t i e s   o f   t h e   W i n d o w   W a t c h d o g   ( W W D G )   p e r i p h e r a l :  
     *                       +   I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
     *                       +   I O   o p e r a t i o n   f u n c t i o n s  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   W W D G   S p e c i f i c   f e a t u r e s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         O n c e   e n a b l e d   t h e   W W D G   g e n e r a t e s   a   s y s t e m   r e s e t   o n   e x p i r y   o f   a   p r o g r a m m e d  
         t i m e   p e r i o d ,   u n l e s s   t h e   p r o g r a m   r e f r e s h e s   t h e   c o u n t e r   ( T [ 6 ; 0 ]   d o w n c o u n t e r )  
         b e f o r e   r e a c h i n g   0 x 3 F   v a l u e   ( i . e .   a   r e s e t   i s   g e n e r a t e d   w h e n   t h e   c o u n t e r  
         v a l u e   r o l l s   d o w n   f r o m   0 x 4 0   t o   0 x 3 F ) .  
  
         ( + )   A n   M C U   r e s e t   i s   a l s o   g e n e r a t e d   i f   t h e   c o u n t e r   v a l u e   i s   r e f r e s h e d  
                 b e f o r e   t h e   c o u n t e r   h a s   r e a c h e d   t h e   r e f r e s h   w i n d o w   v a l u e .   T h i s  
                 i m p l i e s   t h a t   t h e   c o u n t e r   m u s t   b e   r e f r e s h e d   i n   a   l i m i t e d   w i n d o w .  
         ( + )   O n c e   e n a b l e d   t h e   W W D G   c a n n o t   b e   d i s a b l e d   e x c e p t   b y   a   s y s t e m   r e s e t .  
         ( + )   I f   r e q u i r e d   b y   a p p l i c a t i o n ,   a n   E a r l y   W a k e u p   I n t e r r u p t   c a n   b e   t r i g g e r e d  
                 i n   o r d e r   t o   b e   w a r n e d   b e f o r e   W W D G   e x p i r a t i o n .   T h e   E a r l y   W a k e u p   I n t e r r u p t  
                 ( E W I )   c a n   b e   u s e d   i f   s p e c i f i c   s a f e t y   o p e r a t i o n s   o r   d a t a   l o g g i n g   m u s t  
                 b e   p e r f o r m e d   b e f o r e   t h e   a c t u a l   r e s e t   i s   g e n e r a t e d .   W h e n   t h e   d o w n c o u n t e r  
                 r e a c h e s   0 x 4 0 ,   i n t e r r u p t   o c c u r s .   T h i s   m e c h a n i s m   r e q u i r e s   W W D G   i n t e r r u p t  
                 l i n e   t o   b e   e n a b l e d   i n   N V I C .   O n c e   e n a b l e d ,   E W I   i n t e r r u p t   c a n n o t   b e  
                 d i s a b l e d   e x c e p t   b y   a   s y s t e m   r e s e t .  
         ( + )   W W D G R S T   f l a g   i n   R C C   C S R   r e g i s t e r   c a n   b e   u s e d   t o   i n f o r m   w h e n   a   W W D G  
                 r e s e t   o c c u r s .  
         ( + )   T h e   W W D G   c o u n t e r   i n p u t   c l o c k   i s   d e r i v e d   f r o m   t h e   A P B   c l o c k   d i v i d e d  
                 b y   a   p r o g r a m m a b l e   p r e s c a l e r .  
         ( + )   W W D G   c l o c k   ( H z )   =   P C L K 1   /   ( 4 0 9 6   *   P r e s c a l e r )  
         ( + )   W W D G   t i m e o u t   ( m S )   =   1 0 0 0   *   ( T [ 5 ; 0 ]   +   1 )   /   W W D G   c l o c k   ( H z )  
                 w h e r e   T [ 5 ; 0 ]   a r e   t h e   l o w e s t   6   b i t s   o f   C o u n t e r .  
         ( + )   W W D G   C o u n t e r   r e f r e s h   i s   a l l o w e d   b e t w e e n   t h e   f o l l o w i n g   l i m i t s   :  
                 ( + + )   m i n   t i m e   ( m S )   =   1 0 0 0   *   ( C o u n t e r   -   W i n d o w )   /   W W D G   c l o c k  
                 ( + + )   m a x   t i m e   ( m S )   =   1 0 0 0   *   ( C o u n t e r   -   0 x 4 0 )   /   W W D G   c l o c k  
         ( + )   T y p i c a l   v a l u e s :  
                 ( + + )   C o u n t e r   m i n   ( T [ 5 ; 0 ]   =   0 x 0 0 )   a t   3 6 M H z   ( P C L K 1 )   w i t h   z e r o   p r e s c a l e r :  
                           m a x   t i m e o u t   b e f o r e   r e s e t :   a p p r o x i m a t e l y   9 1 0 My 
                 ( + + )   C o u n t e r   m a x   ( T [ 5 ; 0 ]   =   0 x 3 F )   a t   3 6 M H z   ( P C L K 1 )   w i t h   p r e s c a l e r  
                           d i v i d i n g   b y   8 :  
                           m a x   t i m e o u t   b e f o r e   r e s e t :   a p p r o x i m a t e l y   5 8 . 2 5 m s  
  
                                           # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
  
         * * *   C o m m o n   d r i v e r   u s a g e   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = =  
  
     [ . . ]  
         ( + )   E n a b l e   W W D G   A P B 1   c l o c k   u s i n g   _ _ H A L _ R C C _ W W D G _ C L K _ E N A B L E ( ) .  
         ( + )   C o n f i g u r e   t h e   W W D G   p r e s c a l e r ,   r e f r e s h   w i n d o w   v a l u e ,   c o u n t e r   v a l u e   a n d   e a r l y  
                 i n t e r r u p t   s t a t u s   u s i n g   H A L _ W W D G _ I n i t ( )   f u n c t i o n .   T h i s   w i l l   a u t o m a t i c a l l y  
                 e n a b l e   W W D G   a n d   s t a r t   i t s   d o w n c o u n t e r .   T i m e   r e f e r e n c e   c a n   b e   t a k e n   f r o m    
                 f u n c t i o n   e x i t .   C a r e   m u s t   b e   t a k e n   t o   p r o v i d e   a   c o u n t e r   v a l u e  
                 g r e a t e r   t h a n   0 x 4 0   t o   p r e v e n t   g e n e r a t i o n   o f   i m m e d i a t e   r e s e t .  
         ( + )   I f   t h e   E a r l y   W a k e u p   I n t e r r u p t   ( E W I )   f e a t u r e   i s   e n a b l e d ,   a n   i n t e r r u p t   i s  
                 g e n e r a t e d   w h e n   t h e   c o u n t e r   r e a c h e s   0 x 4 0 .   W h e n   H A L _ W W D G _ I R Q H a n d l e r   i s  
                 t r i g g e r e d   b y   t h e   i n t e r r u p t   s e r v i c e   r o u t i n e ,   f l a g   w i l l   b e   a u t o m a t i c a l l y  
                 c l e a r e d   a n d   H A L _ W W D G _ W a k e u p C a l l b a c k   u s e r   c a l l b a c k   w i l l   b e   e x e c u t e d .   U s e r  
                 c a n   a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   c a l l b a c k   H A L _ W W D G _ W a k e u p C a l l b a c k .  
         ( + )   T h e n   t h e   a p p l i c a t i o n   p r o g r a m   m u s t   r e f r e s h   t h e   W W D G   c o u n t e r   a t   r e g u l a r  
                 i n t e r v a l s   d u r i n g   n o r m a l   o p e r a t i o n   t o   p r e v e n t   a n   M C U   r e s e t ,   u s i n g  
                 H A L _ W W D G _ R e f r e s h ( )   f u n c t i o n .   T h i s   o p e r a t i o n   m u s t   o c c u r   o n l y   w h e n  
                 t h e   c o u n t e r   i s   l o w e r   t h a n   t h e   r e f r e s h   w i n d o w   v a l u e   a l r e a d y   p r o g r a m m e d .  
  
         * * *   C a l l b a c k   r e g i s t r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
  
     [ . . ]  
         T h e   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ W W D G _ R E G I S T E R _ C A L L B A C K S   w h e n   s e t   t o   1   a l l o w s  
         t h e   u s e r   t o   c o n f i g u r e   d y n a m i c a l l y   t h e   d r i v e r   c a l l b a c k s .   U s e   F u n c t i o n s  
         H A L _ W W D G _ R e g i s t e r C a l l b a c k ( )   t o   r e g i s t e r   a   u s e r   c a l l b a c k .  
  
         ( + )   F u n c t i o n   H A L _ W W D G _ R e g i s t e r C a l l b a c k ( )   a l l o w s   t o   r e g i s t e r   f o l l o w i n g  
                 c a l l b a c k s :  
                 ( + + )   E w i C a l l b a c k   :   c a l l b a c k   f o r   E a r l y   W a k e U p   I n t e r r u p t .  
                 ( + + )   M s p I n i t C a l l b a c k   :   W W D G   M s p I n i t .  
         T h i s   f u n c t i o n   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,   t h e   C a l l b a c k   I D  
         a n d   a   p o i n t e r   t o   t h e   u s e r   c a l l b a c k   f u n c t i o n .  
  
         ( + )   U s e   f u n c t i o n   H A L _ W W D G _ U n R e g i s t e r C a l l b a c k ( )   t o   r e s e t   a   c a l l b a c k   t o  
         t h e   d e f a u l t   w e a k   ( s u r c h a r g e d )   f u n c t i o n .   H A L _ W W D G _ U n R e g i s t e r C a l l b a c k ( )  
         t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e   a n d   t h e   C a l l b a c k   I D .  
         T h i s   f u n c t i o n   a l l o w s   t o   r e s e t   f o l l o w i n g   c a l l b a c k s :  
                 ( + + )   E w i C a l l b a c k   :   c a l l b a c k   f o r     E a r l y   W a k e U p   I n t e r r u p t .  
                 ( + + )   M s p I n i t C a l l b a c k   :   W W D G   M s p I n i t .  
  
         [ . . ]  
         W h e n   c a l l i n g   H A L _ W W D G _ I n i t   f u n c t i o n ,   c a l l b a c k s   a r e   r e s e t   t o   t h e  
         c o r r e s p o n d i n g   l e g a c y   w e a k   ( s u r c h a r g e d )   f u n c t i o n s :  
         H A L _ W W D G _ E a r l y W a k e u p C a l l b a c k ( )   a n d   H A L _ W W D G _ M s p I n i t ( )   o n l y   i f   t h e y   h a v e  
         n o t   b e e n   r e g i s t e r e d   b e f o r e .  
  
         [ . . ]  
         W h e n   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ W W D G _ R E G I S T E R _ C A L L B A C K S   i s   s e t   t o   0   o r  
         n o t   d e f i n e d ,   t h e   c a l l b a c k   r e g i s t e r i n g   f e a t u r e   i s   n o t   a v a i l a b l e  
         a n d   w e a k   ( s u r c h a r g e d )   c a l l b a c k s   a r e   u s e d .  
  
         * * *   W W D G   H A L   d r i v e r   m a c r o s   l i s t   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             B e l o w   t h e   l i s t   o f   a v a i l a b l e   m a c r o s   i n   W W D G   H A L   d r i v e r .  
             ( + )   _ _ H A L _ W W D G _ E N A B L E :   E n a b l e   t h e   W W D G   p e r i p h e r a l  
             ( + )   _ _ H A L _ W W D G _ G E T _ F L A G :   G e t   t h e   s e l e c t e d   W W D G ' s   f l a g   s t a t u s  
             ( + )   _ _ H A L _ W W D G _ C L E A R _ F L A G :   C l e a r   t h e   W W D G ' s   p e n d i n g   f l a g s  
             ( + )   _ _ H A L _ W W D G _ E N A B L E _ I T :   E n a b l e   t h e   W W D G   e a r l y   w a k e u p   i n t e r r u p t  
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
 # i f d e f   H A L _ W W D G _ M O D U L E _ E N A B L E D  
 / * *   @ d e f g r o u p   W W D G   W W D G  
     *   @ b r i e f   W W D G   H A L   m o d u l e   d r i v e r .  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   W W D G _ E x p o r t e d _ F u n c t i o n s   W W D G   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   W W D G _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
     *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s .  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                     # # # # #   I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   I n i t i a l i z e   a n d   s t a r t   t h e   W W D G   a c c o r d i n g   t o   t h e   s p e c i f i e d   p a r a m e t e r s  
                     i n   t h e   W W D G _ I n i t T y p e D e f   o f   a s s o c i a t e d   h a n d l e .  
             ( + )   I n i t i a l i z e   t h e   W W D G   M S P .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   t h e   W W D G   a c c o r d i n g   t o   t h e   s p e c i f i e d .  
     *                   p a r a m e t e r s   i n   t h e   W W D G _ I n i t T y p e D e f   o f     a s s o c i a t e d   h a n d l e .  
     *   @ p a r a m     h w w d g     p o i n t e r   t o   a   W W D G _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   W W D G   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ W W D G _ I n i t ( W W D G _ H a n d l e T y p e D e f   * h w w d g )  
 {  
     / *   C h e c k   t h e   W W D G   h a n d l e   a l l o c a t i o n   * /  
     i f   ( h w w d g   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ W W D G _ A L L _ I N S T A N C E ( h w w d g - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ W W D G _ P R E S C A L E R ( h w w d g - > I n i t . P r e s c a l e r ) ) ;  
     a s s e r t _ p a r a m ( I S _ W W D G _ W I N D O W ( h w w d g - > I n i t . W i n d o w ) ) ;  
     a s s e r t _ p a r a m ( I S _ W W D G _ C O U N T E R ( h w w d g - > I n i t . C o u n t e r ) ) ;  
     a s s e r t _ p a r a m ( I S _ W W D G _ E W I _ M O D E ( h w w d g - > I n i t . E W I M o d e ) ) ;  
  
 # i f   ( U S E _ H A L _ W W D G _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   R e s e t   C a l l b a c k   p o i n t e r s   * /  
     i f   ( h w w d g - > E w i C a l l b a c k   = =   N U L L )  
     {  
         h w w d g - > E w i C a l l b a c k   =   H A L _ W W D G _ E a r l y W a k e u p C a l l b a c k ;  
     }  
  
     i f   ( h w w d g - > M s p I n i t C a l l b a c k   = =   N U L L )  
     {  
         h w w d g - > M s p I n i t C a l l b a c k   =   H A L _ W W D G _ M s p I n i t ;  
     }  
  
     / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
     h w w d g - > M s p I n i t C a l l b a c k ( h w w d g ) ;  
 # e l s e  
     / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
     H A L _ W W D G _ M s p I n i t ( h w w d g ) ;  
 # e n d i f   / *   U S E _ H A L _ W W D G _ R E G I S T E R _ C A L L B A C K S   * /  
  
     / *   S e t   W W D G   C o u n t e r   * /  
     W R I T E _ R E G ( h w w d g - > I n s t a n c e - > C R ,   ( W W D G _ C R _ W D G A   |   h w w d g - > I n i t . C o u n t e r ) ) ;  
  
     / *   S e t   W W D G   P r e s c a l e r   a n d   W i n d o w   * /  
     W R I T E _ R E G ( h w w d g - > I n s t a n c e - > C F R ,   ( h w w d g - > I n i t . E W I M o d e   |   h w w d g - > I n i t . P r e s c a l e r   |   h w w d g - > I n i t . W i n d o w ) ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   t h e   W W D G   M S P .  
     *   @ p a r a m     h w w d g     p o i n t e r   t o   a   W W D G _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   W W D G   m o d u l e .  
     *   @ n o t e       W h e n   r e w r i t i n g   t h i s   f u n c t i o n   i n   u s e r   f i l e ,   m e c h a n i s m   m a y   b e   a d d e d  
     *                   t o   a v o i d   m u l t i p l e   i n i t i a l i z e   w h e n   H A L _ W W D G _ I n i t   f u n c t i o n   i s   c a l l e d  
     *                   a g a i n   t o   c h a n g e   p a r a m e t e r s .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ W W D G _ M s p I n i t ( W W D G _ H a n d l e T y p e D e f   * h w w d g )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h w w d g ) ;  
  
     / *   N O T E :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                       t h e   H A L _ W W D G _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
  
 # i f   ( U S E _ H A L _ W W D G _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     R e g i s t e r   a   U s e r   W W D G   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   ( s u r c h a r g e d )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h w w d g   W W D G   h a n d l e  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                       @ a r g   @ r e f   H A L _ W W D G _ E W I _ C B _ I D   E a r l y   W a k e U p   I n t e r r u p t   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ W W D G _ M S P I N I T _ C B _ I D   M s p I n i t   c a l l b a c k   I D  
     *   @ p a r a m     p C a l l b a c k   p o i n t e r   t o   t h e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ W W D G _ R e g i s t e r C a l l b a c k ( W W D G _ H a n d l e T y p e D e f   * h w w d g ,   H A L _ W W D G _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,  
                                                                                         p W W D G _ C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         s t a t u s   =   H A L _ E R R O R ;  
     }  
     e l s e  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ W W D G _ E W I _ C B _ I D :  
                 h w w d g - > E w i C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ W W D G _ M S P I N I T _ C B _ I D :  
                 h w w d g - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t :  
                 s t a t u s   =   H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
  
     r e t u r n   s t a t u s ;  
 }  
  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   a   W W D G   C a l l b a c k  
     *                   W W D G   C a l l b a c k   i s   r e d i r e c t e d   t o   t h e   w e a k   ( s u r c h a r g e d )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h w w d g   W W D G   h a n d l e  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                       @ a r g   @ r e f   H A L _ W W D G _ E W I _ C B _ I D   E a r l y   W a k e U p   I n t e r r u p t   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ W W D G _ M S P I N I T _ C B _ I D   M s p I n i t   c a l l b a c k   I D  
     *   @ r e t v a l   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ W W D G _ U n R e g i s t e r C a l l b a c k ( W W D G _ H a n d l e T y p e D e f   * h w w d g ,   H A L _ W W D G _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     s w i t c h   ( C a l l b a c k I D )  
     {  
         c a s e   H A L _ W W D G _ E W I _ C B _ I D :  
             h w w d g - > E w i C a l l b a c k   =   H A L _ W W D G _ E a r l y W a k e u p C a l l b a c k ;  
             b r e a k ;  
  
         c a s e   H A L _ W W D G _ M S P I N I T _ C B _ I D :  
             h w w d g - > M s p I n i t C a l l b a c k   =   H A L _ W W D G _ M s p I n i t ;  
             b r e a k ;  
  
         d e f a u l t :  
             s t a t u s   =   H A L _ E R R O R ;  
             b r e a k ;  
     }  
  
     r e t u r n   s t a t u s ;  
 }  
 # e n d i f   / *   U S E _ H A L _ W W D G _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   W W D G _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I O   o p e r a t i o n   f u n c t i o n s  
     *     @ b r i e f         I O   o p e r a t i o n   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   I O   o p e r a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
         ( + )   R e f r e s h   t h e   W W D G .  
         ( + )   H a n d l e   W W D G   i n t e r r u p t   r e q u e s t   a n d   a s s o c i a t e d   f u n c t i o n   c a l l b a c k .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e f r e s h   t h e   W W D G .  
     *   @ p a r a m     h w w d g     p o i n t e r   t o   a   W W D G _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   W W D G   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ W W D G _ R e f r e s h ( W W D G _ H a n d l e T y p e D e f   * h w w d g )  
 {  
     / *   W r i t e   t o   W W D G   C R   t h e   W W D G   C o u n t e r   v a l u e   t o   r e f r e s h   w i t h   * /  
     W R I T E _ R E G ( h w w d g - > I n s t a n c e - > C R ,   ( h w w d g - > I n i t . C o u n t e r ) ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e   W W D G   i n t e r r u p t   r e q u e s t .  
     *   @ n o t e       T h e   E a r l y   W a k e u p   I n t e r r u p t   ( E W I )   c a n   b e   u s e d   i f   s p e c i f i c   s a f e t y   o p e r a t i o n s  
     *                   o r   d a t a   l o g g i n g   m u s t   b e   p e r f o r m e d   b e f o r e   t h e   a c t u a l   r e s e t   i s   g e n e r a t e d .  
     *                   T h e   E W I   i n t e r r u p t   i s   e n a b l e d   b y   c a l l i n g   H A L _ W W D G _ I n i t   f u n c t i o n   w i t h  
     *                   E W I M o d e   s e t   t o   W W D G _ E W I _ E N A B L E .  
     *                   W h e n   t h e   d o w n c o u n t e r   r e a c h e s   t h e   v a l u e   0 x 4 0 ,   a n d   E W I   i n t e r r u p t   i s  
     *                   g e n e r a t e d   a n d   t h e   c o r r e s p o n d i n g   I n t e r r u p t   S e r v i c e   R o u t i n e   ( I S R )   c a n  
     *                   b e   u s e d   t o   t r i g g e r   s p e c i f i c   a c t i o n s   ( s u c h   a s   c o m m u n i c a t i o n s   o r   d a t a  
     *                   l o g g i n g ) ,   b e f o r e   r e s e t t i n g   t h e   d e v i c e .  
     *   @ p a r a m     h w w d g     p o i n t e r   t o   a   W W D G _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   W W D G   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ W W D G _ I R Q H a n d l e r ( W W D G _ H a n d l e T y p e D e f   * h w w d g )  
 {  
     / *   C h e c k   i f   E a r l y   W a k e u p   I n t e r r u p t   i s   e n a b l e   * /  
     i f   ( _ _ H A L _ W W D G _ G E T _ I T _ S O U R C E ( h w w d g ,   W W D G _ I T _ E W I )   ! =   R E S E T )  
     {  
         / *   C h e c k   i f   W W D G   E a r l y   W a k e u p   I n t e r r u p t   o c c u r r e d   * /  
         i f   ( _ _ H A L _ W W D G _ G E T _ F L A G ( h w w d g ,   W W D G _ F L A G _ E W I F )   ! =   R E S E T )  
         {  
             / *   C l e a r   t h e   W W D G   E a r l y   W a k e u p   f l a g   * /  
             _ _ H A L _ W W D G _ C L E A R _ F L A G ( h w w d g ,   W W D G _ F L A G _ E W I F ) ;  
  
 # i f   ( U S E _ H A L _ W W D G _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             / *   E a r l y   W a k e u p   r e g i s t e r e d   c a l l b a c k   * /  
             h w w d g - > E w i C a l l b a c k ( h w w d g ) ;  
 # e l s e  
             / *   E a r l y   W a k e u p   c a l l b a c k   * /  
             H A L _ W W D G _ E a r l y W a k e u p C a l l b a c k ( h w w d g ) ;  
 # e n d i f   / *   U S E _ H A L _ W W D G _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
     }  
 }  
  
  
 / * *  
     *   @ b r i e f     W W D G   E a r l y   W a k e u p   c a l l b a c k .  
     *   @ p a r a m     h w w d g     p o i n t e r   t o   a   W W D G _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   W W D G   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ W W D G _ E a r l y W a k e u p C a l l b a c k ( W W D G _ H a n d l e T y p e D e f   * h w w d g )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h w w d g ) ;  
  
     / *   N O T E :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                       t h e   H A L _ W W D G _ E a r l y W a k e u p C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   H A L _ W W D G _ M O D U L E _ E N A B L E D   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  
 