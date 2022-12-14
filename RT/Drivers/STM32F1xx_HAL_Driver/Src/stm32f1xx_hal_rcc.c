??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ r c c . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       R C C   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                     f u n c t i o n a l i t i e s   o f   t h e   R e s e t   a n d   C l o c k   C o n t r o l   ( R C C )   p e r i p h e r a l :  
     *                       +   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                       +   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   R C C   s p e c i f i c   f e a t u r e s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             A f t e r   r e s e t   t h e   d e v i c e   i s   r u n n i n g   f r o m   I n t e r n a l   H i g h   S p e e d   o s c i l l a t o r  
             ( H S I   8 M H z )   w i t h   F l a s h   0   w a i t   s t a t e ,   F l a s h   p r e f e t c h   b u f f e r   i s   e n a b l e d ,  
             a n d   a l l   p e r i p h e r a l s   a r e   o f f   e x c e p t   i n t e r n a l   S R A M ,   F l a s h   a n d   J T A G .  
             ( + )   T h e r e   i s   n o   p r e s c a l e r   o n   H i g h   s p e e d   ( A H B )   a n d   L o w   s p e e d   ( A P B )   b u s e s ;  
                     a l l   p e r i p h e r a l s   m a p p e d   o n   t h e s e   b u s e s   a r e   r u n n i n g   a t   H S I   s p e e d .  
             ( + )   T h e   c l o c k   f o r   a l l   p e r i p h e r a l s   i s   s w i t c h e d   o f f ,   e x c e p t   t h e   S R A M   a n d   F L A S H .  
             ( + )   A l l   G P I O s   a r e   i n   i n p u t   f l o a t i n g   s t a t e ,   e x c e p t   t h e   J T A G   p i n s   w h i c h  
                     a r e   a s s i g n e d   t o   b e   u s e d   f o r   d e b u g   p u r p o s e .  
         [ . . ]   O n c e   t h e   d e v i c e   s t a r t e d   f r o m   r e s e t ,   t h e   u s e r   a p p l i c a t i o n   h a s   t o :  
             ( + )   C o n f i g u r e   t h e   c l o c k   s o u r c e   t o   b e   u s e d   t o   d r i v e   t h e   S y s t e m   c l o c k  
                     ( i f   t h e   a p p l i c a t i o n   n e e d s   h i g h e r   f r e q u e n c y / p e r f o r m a n c e )  
             ( + )   C o n f i g u r e   t h e   S y s t e m   c l o c k   f r e q u e n c y   a n d   F l a s h   s e t t i n g s  
             ( + )   C o n f i g u r e   t h e   A H B   a n d   A P B   b u s e s   p r e s c a l e r s  
             ( + )   E n a b l e   t h e   c l o c k   f o r   t h e   p e r i p h e r a l ( s )   t o   b e   u s e d  
             ( + )   C o n f i g u r e   t h e   c l o c k   s o u r c e ( s )   f o r   p e r i p h e r a l s   w h o s e   c l o c k s   a r e   n o t  
                     d e r i v e d   f r o m   t h e   S y s t e m   c l o c k   ( I 2 S ,   R T C ,   A D C ,   U S B   O T G   F S )  
  
                                             # # # # #   R C C   L i m i t a t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             A   d e l a y   b e t w e e n   a n   R C C   p e r i p h e r a l   c l o c k   e n a b l e   a n d   t h e   e f f e c t i v e   p e r i p h e r a l  
             e n a b l i n g   s h o u l d   b e   t a k e n   i n t o   a c c o u n t   i n   o r d e r   t o   m a n a g e   t h e   p e r i p h e r a l   r e a d / w r i t e  
             f r o m / t o   r e g i s t e r s .  
             ( + )   T h i s   d e l a y   d e p e n d s   o n   t h e   p e r i p h e r a l   m a p p i n g .  
                 ( + + )   A H B   &   A P B   p e r i p h e r a l s ,   1   d u m m y   r e a d   i s   n e c e s s a r y  
  
         [ . . ]  
             W o r k a r o u n d s :  
             ( # )   F o r   A H B   &   A P B   p e r i p h e r a l s ,   a   d u m m y   r e a d   t o   t h e   p e r i p h e r a l   r e g i s t e r   h a s   b e e n  
                     i n s e r t e d   i n   e a c h   _ _ H A L _ R C C _ P P P _ C L K _ E N A B L E ( )   m a c r o .  
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
 / * *   @ d e f g r o u p   R C C   R C C  
 *   @ b r i e f   R C C   H A L   m o d u l e   d r i v e r  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ R C C _ M O D U L E _ E N A B L E D  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   R C C _ P r i v a t e _ C o n s t a n t s   R C C   P r i v a t e   C o n s t a n t s  
   *   @ {  
   * /  
 / * *  
     *   @ }  
     * /  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   R C C _ P r i v a t e _ M a c r o s   R C C   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
  
 # d e f i n e   M C O 1 _ C L K _ E N A B L E ( )           _ _ H A L _ R C C _ G P I O A _ C L K _ E N A B L E ( )  
 # d e f i n e   M C O 1 _ G P I O _ P O R T                 G P I O A  
 # d e f i n e   M C O 1 _ P I N                             G P I O _ P I N _ 8  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   R C C _ P r i v a t e _ V a r i a b l e s   R C C   P r i v a t e   V a r i a b l e s  
     *   @ {  
     * /  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 s t a t i c   v o i d   R C C _ D e l a y ( u i n t 3 2 _ t   m d e l a y ) ;  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   R C C _ E x p o r t e d _ F u n c t i o n s   R C C   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                       # # # # #   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o   c o n f i g u r e   t h e   i n t e r n a l / e x t e r n a l   o s c i l l a t o r s  
             ( H S E ,   H S I ,   L S E ,   L S I ,   P L L ,   C S S   a n d   M C O )   a n d   t h e   S y s t e m   b u s e s   c l o c k s   ( S Y S C L K ,   A H B ,   A P B 1  
             a n d   A P B 2 ) .  
  
         [ . . ]   I n t e r n a l / e x t e r n a l   c l o c k   a n d   P L L   c o n f i g u r a t i o n  
             ( # )   H S I   ( h i g h - s p e e d   i n t e r n a l ) ,   8   M H z   f a c t o r y - t r i m m e d   R C   u s e d   d i r e c t l y   o r   t h r o u g h  
                     t h e   P L L   a s   S y s t e m   c l o c k   s o u r c e .  
             ( # )   L S I   ( l o w - s p e e d   i n t e r n a l ) ,   ~ 4 0   K H z   l o w   c o n s u m p t i o n   R C   u s e d   a s   I W D G   a n d / o r   R T C  
                     c l o c k   s o u r c e .  
  
             ( # )   H S E   ( h i g h - s p e e d   e x t e r n a l ) ,   4   t o   2 4   M H z   ( S T M 3 2 F 1 0 0 x x )   o r   4   t o   1 6   M H z   ( S T M 3 2 F 1 0 1 x / S T M 3 2 F 1 0 2 x / S T M 3 2 F 1 0 3 x )   o r   3   t o   2 5   M H z   ( S T M 3 2 F 1 0 5 x / S T M 3 2 F 1 0 7 x )     c r y s t a l   o s c i l l a t o r   u s e d   d i r e c t l y   o r  
                     t h r o u g h   t h e   P L L   a s   S y s t e m   c l o c k   s o u r c e .   C a n   b e   u s e d   a l s o   a s   R T C   c l o c k   s o u r c e .  
  
             ( # )   L S E   ( l o w - s p e e d   e x t e r n a l ) ,   3 2   K H z   o s c i l l a t o r   u s e d   a s   R T C   c l o c k   s o u r c e .  
  
             ( # )   P L L   ( c l o c k e d   b y   H S I   o r   H S E ) ,   f e a t u r i n g   d i f f e r e n t   o u t p u t   c l o c k s :  
                 ( + + )   T h e   f i r s t   o u t p u t   i s   u s e d   t o   g e n e r a t e   t h e   h i g h   s p e e d   s y s t e m   c l o c k   ( u p   t o   7 2   M H z   f o r   S T M 3 2 F 1 0 x x x   o r   u p   t o   2 4   M H z   f o r   S T M 3 2 F 1 0 0 x x )  
                 ( + + )   T h e   s e c o n d   o u t p u t   i s   u s e d   t o   g e n e r a t e   t h e   c l o c k   f o r   t h e   U S B   O T G   F S   ( 4 8   M H z )  
  
             ( # )   C S S   ( C l o c k   s e c u r i t y   s y s t e m ) ,   o n c e   e n a b l e   u s i n g   t h e   m a c r o   _ _ H A L _ R C C _ C S S _ E N A B L E ( )  
                     a n d   i f   a   H S E   c l o c k   f a i l u r e   o c c u r s ( H S E   u s e d   d i r e c t l y   o r   t h r o u g h   P L L   a s   S y s t e m  
                     c l o c k   s o u r c e ) ,   t h e   S y s t e m   c l o c k s   a u t o m a t i c a l l y   s w i t c h e d   t o   H S I   a n d   a n   i n t e r r u p t  
                     i s   g e n e r a t e d   i f   e n a b l e d .   T h e   i n t e r r u p t   i s   l i n k e d   t o   t h e   C o r t e x - M 3   N M I  
                     ( N o n - M a s k a b l e   I n t e r r u p t )   e x c e p t i o n   v e c t o r .  
  
             ( # )   M C O 1   ( m i c r o c o n t r o l l e r   c l o c k   o u t p u t ) ,   u s e d   t o   o u t p u t   S Y S C L K ,   H S I ,  
                     H S E   o r   P L L   c l o c k   ( d i v i d e d   b y   2 )   o n   P A 8   p i n   +   P L L 2 C L K ,   P L L 3 C L K / 2 ,   P L L 3 C L K   a n d   X T I   f o r   S T M 3 2 F 1 0 5 x / S T M 3 2 F 1 0 7 x  
  
         [ . . ]   S y s t e m ,   A H B   a n d   A P B   b u s e s   c l o c k s   c o n f i g u r a t i o n  
             ( # )   S e v e r a l   c l o c k   s o u r c e s   c a n   b e   u s e d   t o   d r i v e   t h e   S y s t e m   c l o c k   ( S Y S C L K ) :   H S I ,  
                     H S E   a n d   P L L .  
                     T h e   A H B   c l o c k   ( H C L K )   i s   d e r i v e d   f r o m   S y s t e m   c l o c k   t h r o u g h   c o n f i g u r a b l e  
                     p r e s c a l e r   a n d   u s e d   t o   c l o c k   t h e   C P U ,   m e m o r y   a n d   p e r i p h e r a l s   m a p p e d  
                     o n   A H B   b u s   ( D M A ,   G P I O . . . ) .   A P B 1   ( P C L K 1 )   a n d   A P B 2   ( P C L K 2 )   c l o c k s   a r e   d e r i v e d  
                     f r o m   A H B   c l o c k   t h r o u g h   c o n f i g u r a b l e   p r e s c a l e r s   a n d   u s e d   t o   c l o c k  
                     t h e   p e r i p h e r a l s   m a p p e d   o n   t h e s e   b u s e s .   Y o u   c a n   u s e  
                     " @ r e f   H A L _ R C C _ G e t S y s C l o c k F r e q ( ) "   f u n c t i o n   t o   r e t r i e v e   t h e   f r e q u e n c i e s   o f   t h e s e   c l o c k s .  
  
             - @ -   A l l   t h e   p e r i p h e r a l   c l o c k s   a r e   d e r i v e d   f r o m   t h e   S y s t e m   c l o c k   ( S Y S C L K )   e x c e p t :  
                     ( + @ )   R T C :   R T C   c l o c k   c a n   b e   d e r i v e d   e i t h e r   f r o m   t h e   L S I ,   L S E   o r   H S E   c l o c k  
                             d i v i d e d   b y   1 2 8 .  
                     ( + @ )   U S B   O T G   F S   a n d   R T C :   U S B   O T G   F S   r e q u i r e   a   f r e q u e n c y   e q u a l   t o   4 8   M H z  
                             t o   w o r k   c o r r e c t l y .   T h i s   c l o c k   i s   d e r i v e d   o f   t h e   m a i n   P L L   t h r o u g h   P L L   M u l t i p l i e r .  
                     ( + @ )   I 2 S   i n t e r f a c e   o n   S T M 3 2 F 1 0 5 x / S T M 3 2 F 1 0 7 x   c a n   b e   d e r i v e d   f r o m   P L L 3 C L K  
                     ( + @ )   I W D G   c l o c k   w h i c h   i s   a l w a y s   t h e   L S I   c l o c k .  
  
             ( # )   F o r   S T M 3 2 F 1 0 x x x ,   t h e   m a x i m u m   f r e q u e n c y   o f   t h e   S Y S C L K   a n d   H C L K / P C L K 2   i s   7 2   M H z ,   P C L K 1   3 6   M H z .  
                     F o r   S T M 3 2 F 1 0 0 x x ,   t h e   m a x i m u m   f r e q u e n c y   o f   t h e   S Y S C L K   a n d   H C L K / P C L K 1 / P C L K 2   i s   2 4   M H z .  
                     D e p e n d i n g   o n   t h e   S Y S C L K   f r e q u e n c y ,   t h e   f l a s h   l a t e n c y   s h o u l d   b e   a d a p t e d   a c c o r d i n g l y .  
     @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / *  
     A d d i t i o n a l   c o n s i d e r a t i o n   o n   t h e   S Y S C L K   b a s e d   o n   L a t e n c y   s e t t i n g s :  
                 + - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - +  
                 |   L a t e n c y               |   S Y S C L K   c l o c k   f r e q u e n c y   ( M H z )     |  
                 | - - - - - - - - - - - - - - - | - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |  
                 | 0 W S ( 1 C P U   c y c l e ) |               0   <   S Y S C L K   < =   2 4                 |  
                 | - - - - - - - - - - - - - - - | - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |  
                 | 1 W S ( 2 C P U   c y c l e ) |             2 4   <   S Y S C L K   < =   4 8                 |  
                 | - - - - - - - - - - - - - - - | - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |  
                 | 2 W S ( 3 C P U   c y c l e ) |             4 8   <   S Y S C L K   < =   7 2                 |  
                 + - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - +  
     * /  
  
 / * *  
     *   @ b r i e f     R e s e t s   t h e   R C C   c l o c k   c o n f i g u r a t i o n   t o   t h e   d e f a u l t   r e s e t   s t a t e .  
     *   @ n o t e       T h e   d e f a u l t   r e s e t   s t a t e   o f   t h e   c l o c k   c o n f i g u r a t i o n   i s   g i v e n   b e l o w :  
     *                         -   H S I   O N   a n d   u s e d   a s   s y s t e m   c l o c k   s o u r c e  
     *                         -   H S E ,   P L L ,   P L L 2   a n d   P L L 3   a r e   O F F  
     *                         -   A H B ,   A P B 1   a n d   A P B 2   p r e s c a l e r   s e t   t o   1 .  
     *                         -   C S S   a n d   M C O 1   O F F  
     *                         -   A l l   i n t e r r u p t s   d i s a b l e d  
     *                         -   A l l   f l a g s   a r e   c l e a r e d  
     *   @ n o t e       T h i s   f u n c t i o n   d o e s   n o t   m o d i f y   t h e   c o n f i g u r a t i o n   o f   t h e  
     *                         -   P e r i p h e r a l   c l o c k s  
     *                         -   L S I ,   L S E   a n d   R T C   c l o c k s  
     *   @ r e t v a l   H A L _ S t a t u s T y p e D e f  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R C C _ D e I n i t ( v o i d )  
 {  
     u i n t 3 2 _ t   t i c k s t a r t ;  
  
     / *   G e t   S t a r t   T i c k   * /  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     / *   S e t   H S I O N   b i t   * /  
     S E T _ B I T ( R C C - > C R ,   R C C _ C R _ H S I O N ) ;  
  
     / *   W a i t   t i l l   H S I   i s   r e a d y   * /  
     w h i l e   ( R E A D _ B I T ( R C C - > C R ,   R C C _ C R _ H S I R D Y )   = =   R E S E T )  
     {  
         i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   H S I _ T I M E O U T _ V A L U E )  
         {  
             r e t u r n   H A L _ T I M E O U T ;  
         }  
     }  
  
     / *   S e t   H S I T R I M   b i t s   t o   t h e   r e s e t   v a l u e   * /  
     M O D I F Y _ R E G ( R C C - > C R ,   R C C _ C R _ H S I T R I M ,   ( 0 x 1 0 U   < <   R C C _ C R _ H S I T R I M _ P o s ) ) ;  
  
     / *   G e t   S t a r t   T i c k   * /  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     / *   R e s e t   C F G R   r e g i s t e r   * /  
     C L E A R _ R E G ( R C C - > C F G R ) ;  
  
     / *   W a i t   t i l l   c l o c k   s w i t c h   i s   r e a d y   * /  
     w h i l e   ( R E A D _ B I T ( R C C - > C F G R ,   R C C _ C F G R _ S W S )   ! =   R E S E T )  
     {  
         i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   C L O C K S W I T C H _ T I M E O U T _ V A L U E )  
         {  
             r e t u r n   H A L _ T I M E O U T ;  
         }  
     }  
  
     / *   U p d a t e   t h e   S y s t e m C o r e C l o c k   g l o b a l   v a r i a b l e   * /  
     S y s t e m C o r e C l o c k   =   H S I _ V A L U E ;  
  
     / *   A d a p t   S y s t i c k   i n t e r r u p t   p e r i o d   * /  
     i f   ( H A L _ I n i t T i c k ( u w T i c k P r i o )   ! =   H A L _ O K )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   G e t   S t a r t   T i c k   * /  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     / *   S e c o n d   s t e p   i s   t o   c l e a r   P L L O N   b i t   * /  
     C L E A R _ B I T ( R C C - > C R ,   R C C _ C R _ P L L O N ) ;  
  
     / *   W a i t   t i l l   P L L   i s   d i s a b l e d   * /  
     w h i l e   ( R E A D _ B I T ( R C C - > C R ,   R C C _ C R _ P L L R D Y )   ! =   R E S E T )  
     {  
         i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   P L L _ T I M E O U T _ V A L U E )  
         {  
             r e t u r n   H A L _ T I M E O U T ;  
         }  
     }  
  
     / *   E n s u r e   t o   r e s e t   P L L S R C   a n d   P L L M U L   b i t s   * /  
     C L E A R _ R E G ( R C C - > C F G R ) ;  
  
     / *   G e t   S t a r t   T i c k   * /  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     / *   R e s e t   H S E O N   &   C S S O N   b i t s   * /  
     C L E A R _ B I T ( R C C - > C R ,   R C C _ C R _ H S E O N   |   R C C _ C R _ C S S O N ) ;  
  
     / *   W a i t   t i l l   H S E   i s   d i s a b l e d   * /  
     w h i l e   ( R E A D _ B I T ( R C C - > C R ,   R C C _ C R _ H S E R D Y )   ! =   R E S E T )  
     {  
         i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   H S E _ T I M E O U T _ V A L U E )  
         {  
             r e t u r n   H A L _ T I M E O U T ;  
         }  
     }  
  
     / *   R e s e t   H S E B Y P   b i t   * /  
     C L E A R _ B I T ( R C C - > C R ,   R C C _ C R _ H S E B Y P ) ;  
  
 # i f   d e f i n e d ( R C C _ P L L 2 _ S U P P O R T )  
     / *   G e t   S t a r t   T i c k   * /  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     / *   C l e a r   P L L 2 O N   b i t   * /  
     C L E A R _ B I T ( R C C - > C R ,   R C C _ C R _ P L L 2 O N ) ;  
  
     / *   W a i t   t i l l   P L L 2   i s   d i s a b l e d   * /  
     w h i l e   ( R E A D _ B I T ( R C C - > C R ,   R C C _ C R _ P L L 2 R D Y )   ! =   R E S E T )  
     {  
         i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   P L L 2 _ T I M E O U T _ V A L U E )  
         {  
             r e t u r n   H A L _ T I M E O U T ;  
         }  
     }  
 # e n d i f   / *   R C C _ P L L 2 _ S U P P O R T   * /  
  
 # i f   d e f i n e d ( R C C _ P L L I 2 S _ S U P P O R T )  
     / *   G e t   S t a r t   T i c k   * /  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     / *   C l e a r   P L L 3 O N   b i t   * /  
     C L E A R _ B I T ( R C C - > C R ,   R C C _ C R _ P L L 3 O N ) ;  
  
     / *   W a i t   t i l l   P L L 3   i s   d i s a b l e d   * /  
     w h i l e   ( R E A D _ B I T ( R C C - > C R ,   R C C _ C R _ P L L 3 R D Y )   ! =   R E S E T )  
     {  
         i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   P L L I 2 S _ T I M E O U T _ V A L U E )  
         {  
             r e t u r n   H A L _ T I M E O U T ;  
         }  
     }  
 # e n d i f   / *   R C C _ P L L I 2 S _ S U P P O R T   * /  
  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ P R E D I V 1 )  
     / *   R e s e t   C F G R 2   r e g i s t e r   * /  
     C L E A R _ R E G ( R C C - > C F G R 2 ) ;  
 # e n d i f   / *   R C C _ C F G R 2 _ P R E D I V 1   * /  
  
     / *   R e s e t   a l l   C S R   f l a g s   * /  
     S E T _ B I T ( R C C - > C S R ,   R C C _ C S R _ R M V F ) ;  
  
     / *   D i s a b l e   a l l   i n t e r r u p t s   * /  
     C L E A R _ R E G ( R C C - > C I R ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   R C C   O s c i l l a t o r s   a c c o r d i n g   t o   t h e   s p e c i f i e d   p a r a m e t e r s   i n   t h e  
     *                   R C C _ O s c I n i t T y p e D e f .  
     *   @ p a r a m     R C C _ O s c I n i t S t r u c t   p o i n t e r   t o   a n   R C C _ O s c I n i t T y p e D e f   s t r u c t u r e   t h a t  
     *                   c o n t a i n s   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   R C C   O s c i l l a t o r s .  
     *   @ n o t e       T h e   P L L   i s   n o t   d i s a b l e d   w h e n   u s e d   a s   s y s t e m   c l o c k .  
     *   @ n o t e       T h e   P L L   i s   n o t   d i s a b l e d   w h e n   U S B   O T G   F S   c l o c k   i s   e n a b l e d   ( s p e c i f i c   t o   d e v i c e s   w i t h   U S B   F S )  
     *   @ n o t e       T r a n s i t i o n s   L S E   B y p a s s   t o   L S E   O n   a n d   L S E   O n   t o   L S E   B y p a s s   a r e   n o t  
     *                   s u p p o r t e d   b y   t h i s   m a c r o .   U s e r   s h o u l d   r e q u e s t   a   t r a n s i t i o n   t o   L S E   O f f  
     *                   f i r s t   a n d   t h e n   L S E   O n   o r   L S E   B y p a s s .  
     *   @ n o t e       T r a n s i t i o n   H S E   B y p a s s   t o   H S E   O n   a n d   H S E   O n   t o   H S E   B y p a s s   a r e   n o t  
     *                   s u p p o r t e d   b y   t h i s   m a c r o .   U s e r   s h o u l d   r e q u e s t   a   t r a n s i t i o n   t o   H S E   O f f  
     *                   f i r s t   a n d   t h e n   H S E   O n   o r   H S E   B y p a s s .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R C C _ O s c C o n f i g ( R C C _ O s c I n i t T y p e D e f     * R C C _ O s c I n i t S t r u c t )  
 {  
     u i n t 3 2 _ t   t i c k s t a r t ;  
     u i n t 3 2 _ t   p l l _ c o n f i g ;  
  
     / *   C h e c k   N u l l   p o i n t e r   * /  
     i f   ( R C C _ O s c I n i t S t r u c t   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R C C _ O S C I L L A T O R T Y P E ( R C C _ O s c I n i t S t r u c t - > O s c i l l a t o r T y p e ) ) ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   H S E   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( ( R C C _ O s c I n i t S t r u c t - > O s c i l l a t o r T y p e )   &   R C C _ O S C I L L A T O R T Y P E _ H S E )   = =   R C C _ O S C I L L A T O R T Y P E _ H S E )  
     {  
         / *   C h e c k   t h e   p a r a m e t e r s   * /  
         a s s e r t _ p a r a m ( I S _ R C C _ H S E ( R C C _ O s c I n i t S t r u c t - > H S E S t a t e ) ) ;  
  
         / *   W h e n   t h e   H S E   i s   u s e d   a s   s y s t e m   c l o c k   o r   c l o c k   s o u r c e   f o r   P L L   i n   t h e s e   c a s e s   i t   i s   n o t   a l l o w e d   t o   b e   d i s a b l e d   * /  
         i f   ( ( _ _ H A L _ R C C _ G E T _ S Y S C L K _ S O U R C E ( )   = =   R C C _ S Y S C L K S O U R C E _ S T A T U S _ H S E )  
                 | |   ( ( _ _ H A L _ R C C _ G E T _ S Y S C L K _ S O U R C E ( )   = =   R C C _ S Y S C L K S O U R C E _ S T A T U S _ P L L C L K )   & &   ( _ _ H A L _ R C C _ G E T _ P L L _ O S C S O U R C E ( )   = =   R C C _ P L L S O U R C E _ H S E ) ) )  
         {  
             i f   ( ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ H S E R D Y )   ! =   R E S E T )   & &   ( R C C _ O s c I n i t S t r u c t - > H S E S t a t e   = =   R C C _ H S E _ O F F ) )  
             {  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         e l s e  
         {  
             / *   S e t   t h e   n e w   H S E   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
             _ _ H A L _ R C C _ H S E _ C O N F I G ( R C C _ O s c I n i t S t r u c t - > H S E S t a t e ) ;  
  
  
             / *   C h e c k   t h e   H S E   S t a t e   * /  
             i f   ( R C C _ O s c I n i t S t r u c t - > H S E S t a t e   ! =   R C C _ H S E _ O F F )  
             {  
                 / *   G e t   S t a r t   T i c k   * /  
                 t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
                 / *   W a i t   t i l l   H S E   i s   r e a d y   * /  
                 w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ H S E R D Y )   = =   R E S E T )  
                 {  
                     i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   H S E _ T I M E O U T _ V A L U E )  
                     {  
                         r e t u r n   H A L _ T I M E O U T ;  
                     }  
                 }  
             }  
             e l s e  
             {  
                 / *   G e t   S t a r t   T i c k   * /  
                 t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
                 / *   W a i t   t i l l   H S E   i s   d i s a b l e d   * /  
                 w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ H S E R D Y )   ! =   R E S E T )  
                 {  
                     i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   H S E _ T I M E O U T _ V A L U E )  
                     {  
                         r e t u r n   H A L _ T I M E O U T ;  
                     }  
                 }  
             }  
         }  
     }  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   H S I   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( ( R C C _ O s c I n i t S t r u c t - > O s c i l l a t o r T y p e )   &   R C C _ O S C I L L A T O R T Y P E _ H S I )   = =   R C C _ O S C I L L A T O R T Y P E _ H S I )  
     {  
         / *   C h e c k   t h e   p a r a m e t e r s   * /  
         a s s e r t _ p a r a m ( I S _ R C C _ H S I ( R C C _ O s c I n i t S t r u c t - > H S I S t a t e ) ) ;  
         a s s e r t _ p a r a m ( I S _ R C C _ C A L I B R A T I O N _ V A L U E ( R C C _ O s c I n i t S t r u c t - > H S I C a l i b r a t i o n V a l u e ) ) ;  
  
         / *   C h e c k   i f   H S I   i s   u s e d   a s   s y s t e m   c l o c k   o r   a s   P L L   s o u r c e   w h e n   P L L   i s   s e l e c t e d   a s   s y s t e m   c l o c k   * /  
         i f   ( ( _ _ H A L _ R C C _ G E T _ S Y S C L K _ S O U R C E ( )   = =   R C C _ S Y S C L K S O U R C E _ S T A T U S _ H S I )  
                 | |   ( ( _ _ H A L _ R C C _ G E T _ S Y S C L K _ S O U R C E ( )   = =   R C C _ S Y S C L K S O U R C E _ S T A T U S _ P L L C L K )   & &   ( _ _ H A L _ R C C _ G E T _ P L L _ O S C S O U R C E ( )   = =   R C C _ P L L S O U R C E _ H S I _ D I V 2 ) ) )  
         {  
             / *   W h e n   H S I   i s   u s e d   a s   s y s t e m   c l o c k   i t   w i l l   n o t   d i s a b l e d   * /  
             i f   ( ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ H S I R D Y )   ! =   R E S E T )   & &   ( R C C _ O s c I n i t S t r u c t - > H S I S t a t e   ! =   R C C _ H S I _ O N ) )  
             {  
                 r e t u r n   H A L _ E R R O R ;  
             }  
             / *   O t h e r w i s e ,   j u s t   t h e   c a l i b r a t i o n   i s   a l l o w e d   * /  
             e l s e  
             {  
                 / *   A d j u s t s   t h e   I n t e r n a l   H i g h   S p e e d   o s c i l l a t o r   ( H S I )   c a l i b r a t i o n   v a l u e . * /  
                 _ _ H A L _ R C C _ H S I _ C A L I B R A T I O N V A L U E _ A D J U S T ( R C C _ O s c I n i t S t r u c t - > H S I C a l i b r a t i o n V a l u e ) ;  
             }  
         }  
         e l s e  
         {  
             / *   C h e c k   t h e   H S I   S t a t e   * /  
             i f   ( R C C _ O s c I n i t S t r u c t - > H S I S t a t e   ! =   R C C _ H S I _ O F F )  
             {  
                 / *   E n a b l e   t h e   I n t e r n a l   H i g h   S p e e d   o s c i l l a t o r   ( H S I ) .   * /  
                 _ _ H A L _ R C C _ H S I _ E N A B L E ( ) ;  
  
                 / *   G e t   S t a r t   T i c k   * /  
                 t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
                 / *   W a i t   t i l l   H S I   i s   r e a d y   * /  
                 w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ H S I R D Y )   = =   R E S E T )  
                 {  
                     i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   H S I _ T I M E O U T _ V A L U E )  
                     {  
                         r e t u r n   H A L _ T I M E O U T ;  
                     }  
                 }  
  
                 / *   A d j u s t s   t h e   I n t e r n a l   H i g h   S p e e d   o s c i l l a t o r   ( H S I )   c a l i b r a t i o n   v a l u e . * /  
                 _ _ H A L _ R C C _ H S I _ C A L I B R A T I O N V A L U E _ A D J U S T ( R C C _ O s c I n i t S t r u c t - > H S I C a l i b r a t i o n V a l u e ) ;  
             }  
             e l s e  
             {  
                 / *   D i s a b l e   t h e   I n t e r n a l   H i g h   S p e e d   o s c i l l a t o r   ( H S I ) .   * /  
                 _ _ H A L _ R C C _ H S I _ D I S A B L E ( ) ;  
  
                 / *   G e t   S t a r t   T i c k   * /  
                 t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
                 / *   W a i t   t i l l   H S I   i s   d i s a b l e d   * /  
                 w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ H S I R D Y )   ! =   R E S E T )  
                 {  
                     i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   H S I _ T I M E O U T _ V A L U E )  
                     {  
                         r e t u r n   H A L _ T I M E O U T ;  
                     }  
                 }  
             }  
         }  
     }  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   L S I   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( ( R C C _ O s c I n i t S t r u c t - > O s c i l l a t o r T y p e )   &   R C C _ O S C I L L A T O R T Y P E _ L S I )   = =   R C C _ O S C I L L A T O R T Y P E _ L S I )  
     {  
         / *   C h e c k   t h e   p a r a m e t e r s   * /  
         a s s e r t _ p a r a m ( I S _ R C C _ L S I ( R C C _ O s c I n i t S t r u c t - > L S I S t a t e ) ) ;  
  
         / *   C h e c k   t h e   L S I   S t a t e   * /  
         i f   ( R C C _ O s c I n i t S t r u c t - > L S I S t a t e   ! =   R C C _ L S I _ O F F )  
         {  
             / *   E n a b l e   t h e   I n t e r n a l   L o w   S p e e d   o s c i l l a t o r   ( L S I ) .   * /  
             _ _ H A L _ R C C _ L S I _ E N A B L E ( ) ;  
  
             / *   G e t   S t a r t   T i c k   * /  
             t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
             / *   W a i t   t i l l   L S I   i s   r e a d y   * /  
             w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ L S I R D Y )   = =   R E S E T )  
             {  
                 i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   L S I _ T I M E O U T _ V A L U E )  
                 {  
                     r e t u r n   H A L _ T I M E O U T ;  
                 }  
             }  
             / *     T o   h a v e   a   f u l l y   s t a b i l i z e d   c l o c k   i n   t h e   s p e c i f i e d   r a n g e ,   a   s o f t w a r e   d e l a y   o f   1 m s  
                     s h o u l d   b e   a d d e d . * /  
             R C C _ D e l a y ( 1 ) ;  
         }  
         e l s e  
         {  
             / *   D i s a b l e   t h e   I n t e r n a l   L o w   S p e e d   o s c i l l a t o r   ( L S I ) .   * /  
             _ _ H A L _ R C C _ L S I _ D I S A B L E ( ) ;  
  
             / *   G e t   S t a r t   T i c k   * /  
             t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
             / *   W a i t   t i l l   L S I   i s   d i s a b l e d   * /  
             w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ L S I R D Y )   ! =   R E S E T )  
             {  
                 i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   L S I _ T I M E O U T _ V A L U E )  
                 {  
                     r e t u r n   H A L _ T I M E O U T ;  
                 }  
             }  
         }  
     }  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   L S E   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( ( R C C _ O s c I n i t S t r u c t - > O s c i l l a t o r T y p e )   &   R C C _ O S C I L L A T O R T Y P E _ L S E )   = =   R C C _ O S C I L L A T O R T Y P E _ L S E )  
     {  
         F l a g S t a t u s               p w r c l k c h a n g e d   =   R E S E T ;  
  
         / *   C h e c k   t h e   p a r a m e t e r s   * /  
         a s s e r t _ p a r a m ( I S _ R C C _ L S E ( R C C _ O s c I n i t S t r u c t - > L S E S t a t e ) ) ;  
  
         / *   U p d a t e   L S E   c o n f i g u r a t i o n   i n   B a c k u p   D o m a i n   c o n t r o l   r e g i s t e r         * /  
         / *   R e q u i r e s   t o   e n a b l e   w r i t e   a c c e s s   t o   B a c k u p   D o m a i n   o f   n e c e s s a r y   * /  
         i f   ( _ _ H A L _ R C C _ P W R _ I S _ C L K _ D I S A B L E D ( ) )  
         {  
             _ _ H A L _ R C C _ P W R _ C L K _ E N A B L E ( ) ;  
             p w r c l k c h a n g e d   =   S E T ;  
         }  
  
         i f   ( H A L _ I S _ B I T _ C L R ( P W R - > C R ,   P W R _ C R _ D B P ) )  
         {  
             / *   E n a b l e   w r i t e   a c c e s s   t o   B a c k u p   d o m a i n   * /  
             S E T _ B I T ( P W R - > C R ,   P W R _ C R _ D B P ) ;  
  
             / *   W a i t   f o r   B a c k u p   d o m a i n   W r i t e   p r o t e c t i o n   d i s a b l e   * /  
             t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
             w h i l e   ( H A L _ I S _ B I T _ C L R ( P W R - > C R ,   P W R _ C R _ D B P ) )  
             {  
                 i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   R C C _ D B P _ T I M E O U T _ V A L U E )  
                 {  
                     r e t u r n   H A L _ T I M E O U T ;  
                 }  
             }  
         }  
  
         / *   S e t   t h e   n e w   L S E   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         _ _ H A L _ R C C _ L S E _ C O N F I G ( R C C _ O s c I n i t S t r u c t - > L S E S t a t e ) ;  
         / *   C h e c k   t h e   L S E   S t a t e   * /  
         i f   ( R C C _ O s c I n i t S t r u c t - > L S E S t a t e   ! =   R C C _ L S E _ O F F )  
         {  
             / *   G e t   S t a r t   T i c k   * /  
             t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
             / *   W a i t   t i l l   L S E   i s   r e a d y   * /  
             w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ L S E R D Y )   = =   R E S E T )  
             {  
                 i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   R C C _ L S E _ T I M E O U T _ V A L U E )  
                 {  
                     r e t u r n   H A L _ T I M E O U T ;  
                 }  
             }  
         }  
         e l s e  
         {  
             / *   G e t   S t a r t   T i c k   * /  
             t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
             / *   W a i t   t i l l   L S E   i s   d i s a b l e d   * /  
             w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ L S E R D Y )   ! =   R E S E T )  
             {  
                 i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   R C C _ L S E _ T I M E O U T _ V A L U E )  
                 {  
                     r e t u r n   H A L _ T I M E O U T ;  
                 }  
             }  
         }  
  
         / *   R e q u i r e   t o   d i s a b l e   p o w e r   c l o c k   i f   n e c e s s a r y   * /  
         i f   ( p w r c l k c h a n g e d   = =   S E T )  
         {  
             _ _ H A L _ R C C _ P W R _ C L K _ D I S A B L E ( ) ;  
         }  
     }  
  
 # i f   d e f i n e d ( R C C _ C R _ P L L 2 O N )  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   P L L 2   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - * /  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R C C _ P L L 2 ( R C C _ O s c I n i t S t r u c t - > P L L 2 . P L L 2 S t a t e ) ) ;  
     i f   ( ( R C C _ O s c I n i t S t r u c t - > P L L 2 . P L L 2 S t a t e )   ! =   R C C _ P L L 2 _ N O N E )  
     {  
         / *   T h i s   b i t   c a n   n o t   b e   c l e a r e d   i f   t h e   P L L 2   c l o c k   i s   u s e d   i n d i r e c t l y   a s   s y s t e m  
             c l o c k   ( i . e .   i t   i s   u s e d   a s   P L L   c l o c k   e n t r y   t h a t   i s   u s e d   a s   s y s t e m   c l o c k ) .   * /  
         i f   ( ( _ _ H A L _ R C C _ G E T _ P L L _ O S C S O U R C E ( )   = =   R C C _ P L L S O U R C E _ H S E )   & &   \  
                 ( _ _ H A L _ R C C _ G E T _ S Y S C L K _ S O U R C E ( )   = =   R C C _ S Y S C L K S O U R C E _ S T A T U S _ P L L C L K )   & &   \  
                 ( ( R E A D _ B I T ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ P R E D I V 1 S R C ) )   = =   R C C _ C F G R 2 _ P R E D I V 1 S R C _ P L L 2 ) )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
         e l s e  
         {  
             i f   ( ( R C C _ O s c I n i t S t r u c t - > P L L 2 . P L L 2 S t a t e )   = =   R C C _ P L L 2 _ O N )  
             {  
                 / *   C h e c k   t h e   p a r a m e t e r s   * /  
                 a s s e r t _ p a r a m ( I S _ R C C _ P L L 2 _ M U L ( R C C _ O s c I n i t S t r u c t - > P L L 2 . P L L 2 M U L ) ) ;  
                 a s s e r t _ p a r a m ( I S _ R C C _ H S E _ P R E D I V 2 ( R C C _ O s c I n i t S t r u c t - > P L L 2 . H S E P r e d i v 2 V a l u e ) ) ;  
  
                 / *   P r e d i v 2   c a n   b e   w r i t t e n   o n l y   w h e n   t h e   P L L I 2 S   i s   d i s a b l e d .   * /  
                 / *   R e t u r n   a n   e r r o r   o n l y   i f   n e w   v a l u e   i s   d i f f e r e n t   f r o m   t h e   p r o g r a m m e d   v a l u e   * /  
                 i f   ( H A L _ I S _ B I T _ S E T ( R C C - > C R ,   R C C _ C R _ P L L 3 O N )   & &   \  
                         ( _ _ H A L _ R C C _ H S E _ G E T _ P R E D I V 2 ( )   ! =   R C C _ O s c I n i t S t r u c t - > P L L 2 . H S E P r e d i v 2 V a l u e ) )  
                 {  
                     r e t u r n   H A L _ E R R O R ;  
                 }  
  
                 / *   D i s a b l e   t h e   m a i n   P L L 2 .   * /  
                 _ _ H A L _ R C C _ P L L 2 _ D I S A B L E ( ) ;  
  
                 / *   G e t   S t a r t   T i c k   * /  
                 t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
                 / *   W a i t   t i l l   P L L 2   i s   d i s a b l e d   * /  
                 w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ P L L 2 R D Y )   ! =   R E S E T )  
                 {  
                     i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   P L L 2 _ T I M E O U T _ V A L U E )  
                     {  
                         r e t u r n   H A L _ T I M E O U T ;  
                     }  
                 }  
  
                 / *   C o n f i g u r e   t h e   H S E   p r e d i v 2   f a c t o r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
                 _ _ H A L _ R C C _ H S E _ P R E D I V 2 _ C O N F I G ( R C C _ O s c I n i t S t r u c t - > P L L 2 . H S E P r e d i v 2 V a l u e ) ;  
  
                 / *   C o n f i g u r e   t h e   m a i n   P L L 2   m u l t i p l i c a t i o n   f a c t o r s .   * /  
                 _ _ H A L _ R C C _ P L L 2 _ C O N F I G ( R C C _ O s c I n i t S t r u c t - > P L L 2 . P L L 2 M U L ) ;  
  
                 / *   E n a b l e   t h e   m a i n   P L L 2 .   * /  
                 _ _ H A L _ R C C _ P L L 2 _ E N A B L E ( ) ;  
  
                 / *   G e t   S t a r t   T i c k   * /  
                 t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
                 / *   W a i t   t i l l   P L L 2   i s   r e a d y   * /  
                 w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ P L L 2 R D Y )     = =   R E S E T )  
                 {  
                     i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   P L L 2 _ T I M E O U T _ V A L U E )  
                     {  
                         r e t u r n   H A L _ T I M E O U T ;  
                     }  
                 }  
             }  
             e l s e  
             {  
                 / *   S e t   P R E D I V 1   s o u r c e   t o   H S E   * /  
                 C L E A R _ B I T ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ P R E D I V 1 S R C ) ;  
  
                 / *   D i s a b l e   t h e   m a i n   P L L 2 .   * /  
                 _ _ H A L _ R C C _ P L L 2 _ D I S A B L E ( ) ;  
  
                 / *   G e t   S t a r t   T i c k   * /  
                 t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
                 / *   W a i t   t i l l   P L L 2   i s   d i s a b l e d   * /  
                 w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ P L L 2 R D Y )     ! =   R E S E T )  
                 {  
                     i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   P L L 2 _ T I M E O U T _ V A L U E )  
                     {  
                         r e t u r n   H A L _ T I M E O U T ;  
                     }  
                 }  
             }  
         }  
     }  
  
 # e n d i f   / *   R C C _ C R _ P L L 2 O N   * /  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   P L L   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - * /  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R C C _ P L L ( R C C _ O s c I n i t S t r u c t - > P L L . P L L S t a t e ) ) ;  
     i f   ( ( R C C _ O s c I n i t S t r u c t - > P L L . P L L S t a t e )   ! =   R C C _ P L L _ N O N E )  
     {  
         / *   C h e c k   i f   t h e   P L L   i s   u s e d   a s   s y s t e m   c l o c k   o r   n o t   * /  
         i f   ( _ _ H A L _ R C C _ G E T _ S Y S C L K _ S O U R C E ( )   ! =   R C C _ S Y S C L K S O U R C E _ S T A T U S _ P L L C L K )  
         {  
             i f   ( ( R C C _ O s c I n i t S t r u c t - > P L L . P L L S t a t e )   = =   R C C _ P L L _ O N )  
             {  
                 / *   C h e c k   t h e   p a r a m e t e r s   * /  
                 a s s e r t _ p a r a m ( I S _ R C C _ P L L S O U R C E ( R C C _ O s c I n i t S t r u c t - > P L L . P L L S o u r c e ) ) ;  
                 a s s e r t _ p a r a m ( I S _ R C C _ P L L _ M U L ( R C C _ O s c I n i t S t r u c t - > P L L . P L L M U L ) ) ;  
  
                 / *   D i s a b l e   t h e   m a i n   P L L .   * /  
                 _ _ H A L _ R C C _ P L L _ D I S A B L E ( ) ;  
  
                 / *   G e t   S t a r t   T i c k   * /  
                 t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
                 / *   W a i t   t i l l   P L L   i s   d i s a b l e d   * /  
                 w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ P L L R D Y )     ! =   R E S E T )  
                 {  
                     i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   P L L _ T I M E O U T _ V A L U E )  
                     {  
                         r e t u r n   H A L _ T I M E O U T ;  
                     }  
                 }  
  
                 / *   C o n f i g u r e   t h e   H S E   p r e d i v   f a c t o r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
                 / *   I t   c a n   b e   w r i t t e n   o n l y   w h e n   t h e   P L L   i s   d i s a b l e d .   N o t   u s e d   i n   P L L   s o u r c e   i s   d i f f e r e n t   t h a n   H S E   * /  
                 i f   ( R C C _ O s c I n i t S t r u c t - > P L L . P L L S o u r c e   = =   R C C _ P L L S O U R C E _ H S E )  
                 {  
                     / *   C h e c k   t h e   p a r a m e t e r   * /  
                     a s s e r t _ p a r a m ( I S _ R C C _ H S E _ P R E D I V ( R C C _ O s c I n i t S t r u c t - > H S E P r e d i v V a l u e ) ) ;  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ P R E D I V 1 S R C )  
                     a s s e r t _ p a r a m ( I S _ R C C _ P R E D I V 1 _ S O U R C E ( R C C _ O s c I n i t S t r u c t - > P r e d i v 1 S o u r c e ) ) ;  
  
                     / *   S e t   P R E D I V 1   s o u r c e   * /  
                     S E T _ B I T ( R C C - > C F G R 2 ,   R C C _ O s c I n i t S t r u c t - > P r e d i v 1 S o u r c e ) ;  
 # e n d i f   / *   R C C _ C F G R 2 _ P R E D I V 1 S R C   * /  
  
                     / *   S e t   P R E D I V 1   V a l u e   * /  
                     _ _ H A L _ R C C _ H S E _ P R E D I V _ C O N F I G ( R C C _ O s c I n i t S t r u c t - > H S E P r e d i v V a l u e ) ;  
                 }  
  
                 / *   C o n f i g u r e   t h e   m a i n   P L L   c l o c k   s o u r c e   a n d   m u l t i p l i c a t i o n   f a c t o r s .   * /  
                 _ _ H A L _ R C C _ P L L _ C O N F I G ( R C C _ O s c I n i t S t r u c t - > P L L . P L L S o u r c e ,  
                                                           R C C _ O s c I n i t S t r u c t - > P L L . P L L M U L ) ;  
                 / *   E n a b l e   t h e   m a i n   P L L .   * /  
                 _ _ H A L _ R C C _ P L L _ E N A B L E ( ) ;  
  
                 / *   G e t   S t a r t   T i c k   * /  
                 t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
                 / *   W a i t   t i l l   P L L   i s   r e a d y   * /  
                 w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ P L L R D Y )     = =   R E S E T )  
                 {  
                     i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   P L L _ T I M E O U T _ V A L U E )  
                     {  
                         r e t u r n   H A L _ T I M E O U T ;  
                     }  
                 }  
             }  
             e l s e  
             {  
                 / *   D i s a b l e   t h e   m a i n   P L L .   * /  
                 _ _ H A L _ R C C _ P L L _ D I S A B L E ( ) ;  
  
                 / *   G e t   S t a r t   T i c k   * /  
                 t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
                 / *   W a i t   t i l l   P L L   i s   d i s a b l e d   * /  
                 w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ P L L R D Y )     ! =   R E S E T )  
                 {  
                     i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   P L L _ T I M E O U T _ V A L U E )  
                     {  
                         r e t u r n   H A L _ T I M E O U T ;  
                     }  
                 }  
             }  
         }  
         e l s e  
         {  
             / *   C h e c k   i f   t h e r e   i s   a   r e q u e s t   t o   d i s a b l e   t h e   P L L   u s e d   a s   S y s t e m   c l o c k   s o u r c e   * /  
             i f   ( ( R C C _ O s c I n i t S t r u c t - > P L L . P L L S t a t e )   = =   R C C _ P L L _ O F F )  
             {  
                 r e t u r n   H A L _ E R R O R ;  
             }  
             e l s e  
             {  
                 / *   D o   n o t   r e t u r n   H A L _ E R R O R   i f   r e q u e s t   r e p e a t s   t h e   c u r r e n t   c o n f i g u r a t i o n   * /  
                 p l l _ c o n f i g   =   R C C - > C F G R ;  
                 i f   ( ( R E A D _ B I T ( p l l _ c o n f i g ,   R C C _ C F G R _ P L L S R C )   ! =   R C C _ O s c I n i t S t r u c t - > P L L . P L L S o u r c e )   | |  
                         ( R E A D _ B I T ( p l l _ c o n f i g ,   R C C _ C F G R _ P L L M U L L )   ! =   R C C _ O s c I n i t S t r u c t - > P L L . P L L M U L ) )  
                 {  
                     r e t u r n   H A L _ E R R O R ;  
                 }  
             }  
         }  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   C P U ,   A H B   a n d   A P B   b u s e s   c l o c k s   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   p a r a m e t e r s   i n   t h e   R C C _ C l k I n i t S t r u c t .  
     *   @ p a r a m     R C C _ C l k I n i t S t r u c t   p o i n t e r   t o   a n   R C C _ O s c I n i t T y p e D e f   s t r u c t u r e   t h a t  
     *                   c o n t a i n s   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   R C C   p e r i p h e r a l .  
     *   @ p a r a m     F L a t e n c y   F L A S H   L a t e n c y  
     *                     T h e   v a l u e   o f   t h i s   p a r a m e t e r   d e p e n d   o n   d e v i c e   u s e d   w i t h i n   t h e   s a m e   s e r i e s  
     *   @ n o t e       T h e   S y s t e m C o r e C l o c k   C M S I S   v a r i a b l e   i s   u s e d   t o   s t o r e   S y s t e m   C l o c k   F r e q u e n c y  
     *                   a n d   u p d a t e d   b y   @ r e f   H A L _ R C C _ G e t H C L K F r e q ( )   f u n c t i o n   c a l l e d   w i t h i n   t h i s   f u n c t i o n  
     *  
     *   @ n o t e       T h e   H S I   i s   u s e d   ( e n a b l e d   b y   h a r d w a r e )   a s   s y s t e m   c l o c k   s o u r c e   a f t e r  
     *                   s t a r t - u p   f r o m   R e s e t ,   w a k e - u p   f r o m   S T O P   a n d   S T A N D B Y   m o d e ,   o r   i n   c a s e  
     *                   o f   f a i l u r e   o f   t h e   H S E   u s e d   d i r e c t l y   o r   i n d i r e c t l y   a s   s y s t e m   c l o c k  
     *                   ( i f   t h e   C l o c k   S e c u r i t y   S y s t e m   C S S   i s   e n a b l e d ) .  
     *  
     *   @ n o t e       A   s w i t c h   f r o m   o n e   c l o c k   s o u r c e   t o   a n o t h e r   o c c u r s   o n l y   i f   t h e   t a r g e t  
     *                   c l o c k   s o u r c e   i s   r e a d y   ( c l o c k   s t a b l e   a f t e r   s t a r t - u p   d e l a y   o r   P L L   l o c k e d ) .  
     *                   I f   a   c l o c k   s o u r c e   w h i c h   i s   n o t   y e t   r e a d y   i s   s e l e c t e d ,   t h e   s w i t c h   w i l l  
     *                   o c c u r   w h e n   t h e   c l o c k   s o u r c e   w i l l   b e   r e a d y .  
     *                   Y o u   c a n   u s e   @ r e f   H A L _ R C C _ G e t C l o c k C o n f i g ( )   f u n c t i o n   t o   k n o w   w h i c h   c l o c k   i s  
     *                   c u r r e n t l y   u s e d   a s   s y s t e m   c l o c k   s o u r c e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R C C _ C l o c k C o n f i g ( R C C _ C l k I n i t T y p e D e f     * R C C _ C l k I n i t S t r u c t ,   u i n t 3 2 _ t   F L a t e n c y )  
 {  
     u i n t 3 2 _ t   t i c k s t a r t ;  
  
     / *   C h e c k   N u l l   p o i n t e r   * /  
     i f   ( R C C _ C l k I n i t S t r u c t   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R C C _ C L O C K T Y P E ( R C C _ C l k I n i t S t r u c t - > C l o c k T y p e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F L A S H _ L A T E N C Y ( F L a t e n c y ) ) ;  
  
     / *   T o   c o r r e c t l y   r e a d   d a t a   f r o m   F L A S H   m e m o r y ,   t h e   n u m b e r   o f   w a i t   s t a t e s   ( L A T E N C Y )  
     m u s t   b e   c o r r e c t l y   p r o g r a m m e d   a c c o r d i n g   t o   t h e   f r e q u e n c y   o f   t h e   C P U   c l o c k  
         ( H C L K )   o f   t h e   d e v i c e .   * /  
  
 # i f   d e f i n e d ( F L A S H _ A C R _ L A T E N C Y )  
     / *   I n c r e a s i n g   t h e   n u m b e r   o f   w a i t   s t a t e s   b e c a u s e   o f   h i g h e r   C P U   f r e q u e n c y   * /  
     i f   ( F L a t e n c y   >   _ _ H A L _ F L A S H _ G E T _ L A T E N C Y ( ) )  
     {  
         / *   P r o g r a m   t h e   n e w   n u m b e r   o f   w a i t   s t a t e s   t o   t h e   L A T E N C Y   b i t s   i n   t h e   F L A S H _ A C R   r e g i s t e r   * /  
         _ _ H A L _ F L A S H _ S E T _ L A T E N C Y ( F L a t e n c y ) ;  
  
         / *   C h e c k   t h a t   t h e   n e w   n u m b e r   o f   w a i t   s t a t e s   i s   t a k e n   i n t o   a c c o u n t   t o   a c c e s s   t h e   F l a s h  
         m e m o r y   b y   r e a d i n g   t h e   F L A S H _ A C R   r e g i s t e r   * /  
         i f   ( _ _ H A L _ F L A S H _ G E T _ L A T E N C Y ( )   ! =   F L a t e n c y )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
 }  
  
 # e n d i f   / *   F L A S H _ A C R _ L A T E N C Y   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - -   H C L K   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 i f   ( ( ( R C C _ C l k I n i t S t r u c t - > C l o c k T y p e )   &   R C C _ C L O C K T Y P E _ H C L K )   = =   R C C _ C L O C K T Y P E _ H C L K )  
     {  
         / *   S e t   t h e   h i g h e s t   A P B x   d i v i d e r s   i n   o r d e r   t o   e n s u r e   t h a t   w e   d o   n o t   g o   t h r o u g h  
         a   n o n - s p e c   p h a s e   w h a t e v e r   w e   d e c r e a s e   o r   i n c r e a s e   H C L K .   * /  
         i f   ( ( ( R C C _ C l k I n i t S t r u c t - > C l o c k T y p e )   &   R C C _ C L O C K T Y P E _ P C L K 1 )   = =   R C C _ C L O C K T Y P E _ P C L K 1 )  
         {  
             M O D I F Y _ R E G ( R C C - > C F G R ,   R C C _ C F G R _ P P R E 1 ,   R C C _ H C L K _ D I V 1 6 ) ;  
         }  
  
         i f   ( ( ( R C C _ C l k I n i t S t r u c t - > C l o c k T y p e )   &   R C C _ C L O C K T Y P E _ P C L K 2 )   = =   R C C _ C L O C K T Y P E _ P C L K 2 )  
         {  
             M O D I F Y _ R E G ( R C C - > C F G R ,   R C C _ C F G R _ P P R E 2 ,   ( R C C _ H C L K _ D I V 1 6   < <   3 ) ) ;  
         }  
  
         / *   S e t   t h e   n e w   H C L K   c l o c k   d i v i d e r   * /  
         a s s e r t _ p a r a m ( I S _ R C C _ H C L K ( R C C _ C l k I n i t S t r u c t - > A H B C L K D i v i d e r ) ) ;  
         M O D I F Y _ R E G ( R C C - > C F G R ,   R C C _ C F G R _ H P R E ,   R C C _ C l k I n i t S t r u c t - > A H B C L K D i v i d e r ) ;  
     }  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - -   S Y S C L K   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( ( R C C _ C l k I n i t S t r u c t - > C l o c k T y p e )   &   R C C _ C L O C K T Y P E _ S Y S C L K )   = =   R C C _ C L O C K T Y P E _ S Y S C L K )  
     {  
         a s s e r t _ p a r a m ( I S _ R C C _ S Y S C L K S O U R C E ( R C C _ C l k I n i t S t r u c t - > S Y S C L K S o u r c e ) ) ;  
  
         / *   H S E   i s   s e l e c t e d   a s   S y s t e m   C l o c k   S o u r c e   * /  
         i f   ( R C C _ C l k I n i t S t r u c t - > S Y S C L K S o u r c e   = =   R C C _ S Y S C L K S O U R C E _ H S E )  
         {  
             / *   C h e c k   t h e   H S E   r e a d y   f l a g   * /  
             i f   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ H S E R D Y )   = =   R E S E T )  
             {  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         / *   P L L   i s   s e l e c t e d   a s   S y s t e m   C l o c k   S o u r c e   * /  
         e l s e   i f   ( R C C _ C l k I n i t S t r u c t - > S Y S C L K S o u r c e   = =   R C C _ S Y S C L K S O U R C E _ P L L C L K )  
         {  
             / *   C h e c k   t h e   P L L   r e a d y   f l a g   * /  
             i f   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ P L L R D Y )   = =   R E S E T )  
             {  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         / *   H S I   i s   s e l e c t e d   a s   S y s t e m   C l o c k   S o u r c e   * /  
         e l s e  
         {  
             / *   C h e c k   t h e   H S I   r e a d y   f l a g   * /  
             i f   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ H S I R D Y )   = =   R E S E T )  
             {  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         _ _ H A L _ R C C _ S Y S C L K _ C O N F I G ( R C C _ C l k I n i t S t r u c t - > S Y S C L K S o u r c e ) ;  
  
         / *   G e t   S t a r t   T i c k   * /  
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
         w h i l e   ( _ _ H A L _ R C C _ G E T _ S Y S C L K _ S O U R C E ( )   ! =   ( R C C _ C l k I n i t S t r u c t - > S Y S C L K S o u r c e   < <   R C C _ C F G R _ S W S _ P o s ) )  
         {  
             i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   C L O C K S W I T C H _ T I M E O U T _ V A L U E )  
             {  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
         }  
     }  
  
 # i f   d e f i n e d ( F L A S H _ A C R _ L A T E N C Y )  
     / *   D e c r e a s i n g   t h e   n u m b e r   o f   w a i t   s t a t e s   b e c a u s e   o f   l o w e r   C P U   f r e q u e n c y   * /  
     i f   ( F L a t e n c y   <   _ _ H A L _ F L A S H _ G E T _ L A T E N C Y ( ) )  
     {  
         / *   P r o g r a m   t h e   n e w   n u m b e r   o f   w a i t   s t a t e s   t o   t h e   L A T E N C Y   b i t s   i n   t h e   F L A S H _ A C R   r e g i s t e r   * /  
         _ _ H A L _ F L A S H _ S E T _ L A T E N C Y ( F L a t e n c y ) ;  
  
         / *   C h e c k   t h a t   t h e   n e w   n u m b e r   o f   w a i t   s t a t e s   i s   t a k e n   i n t o   a c c o u n t   t o   a c c e s s   t h e   F l a s h  
         m e m o r y   b y   r e a d i n g   t h e   F L A S H _ A C R   r e g i s t e r   * /  
         i f   ( _ _ H A L _ F L A S H _ G E T _ L A T E N C Y ( )   ! =   F L a t e n c y )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
 }  
 # e n d i f   / *   F L A S H _ A C R _ L A T E N C Y   * /  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - -   P C L K 1   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 i f   ( ( ( R C C _ C l k I n i t S t r u c t - > C l o c k T y p e )   &   R C C _ C L O C K T Y P E _ P C L K 1 )   = =   R C C _ C L O C K T Y P E _ P C L K 1 )  
     {  
         a s s e r t _ p a r a m ( I S _ R C C _ P C L K ( R C C _ C l k I n i t S t r u c t - > A P B 1 C L K D i v i d e r ) ) ;  
         M O D I F Y _ R E G ( R C C - > C F G R ,   R C C _ C F G R _ P P R E 1 ,   R C C _ C l k I n i t S t r u c t - > A P B 1 C L K D i v i d e r ) ;  
     }  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - -   P C L K 2   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( ( R C C _ C l k I n i t S t r u c t - > C l o c k T y p e )   &   R C C _ C L O C K T Y P E _ P C L K 2 )   = =   R C C _ C L O C K T Y P E _ P C L K 2 )  
     {  
         a s s e r t _ p a r a m ( I S _ R C C _ P C L K ( R C C _ C l k I n i t S t r u c t - > A P B 2 C L K D i v i d e r ) ) ;  
         M O D I F Y _ R E G ( R C C - > C F G R ,   R C C _ C F G R _ P P R E 2 ,   ( ( R C C _ C l k I n i t S t r u c t - > A P B 2 C L K D i v i d e r )   < <   3 ) ) ;  
     }  
  
     / *   U p d a t e   t h e   S y s t e m C o r e C l o c k   g l o b a l   v a r i a b l e   * /  
     S y s t e m C o r e C l o c k   =   H A L _ R C C _ G e t S y s C l o c k F r e q ( )   > >   A H B P r e s c T a b l e [ ( R C C - > C F G R   &   R C C _ C F G R _ H P R E )   > >   R C C _ C F G R _ H P R E _ P o s ] ;  
  
     / *   C o n f i g u r e   t h e   s o u r c e   o f   t i m e   b a s e   c o n s i d e r i n g   n e w   s y s t e m   c l o c k s   s e t t i n g s * /  
     H A L _ I n i t T i c k ( u w T i c k P r i o ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *     @ b r i e f       R C C   c l o c k s   c o n t r o l   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                     # # # # #   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   c o n t r o l   t h e   R C C   C l o c k s  
         f r e q u e n c i e s .  
  
     @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e l e c t s   t h e   c l o c k   s o u r c e   t o   o u t p u t   o n   M C O   p i n .  
     *   @ n o t e       M C O   p i n   s h o u l d   b e   c o n f i g u r e d   i n   a l t e r n a t e   f u n c t i o n   m o d e .  
     *   @ p a r a m     R C C _ M C O x   s p e c i f i e s   t h e   o u t p u t   d i r e c t i o n   f o r   t h e   c l o c k   s o u r c e .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   @ r e f   R C C _ M C O 1   C l o c k   s o u r c e   t o   o u t p u t   o n   M C O 1   p i n ( P A 8 ) .  
     *   @ p a r a m     R C C _ M C O S o u r c e   s p e c i f i e s   t h e   c l o c k   s o u r c e   t o   o u t p u t .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   @ r e f   R C C _ M C O 1 S O U R C E _ N O C L O C K           N o   c l o c k   s e l e c t e d   a s   M C O   c l o c k  
     *                         @ a r g   @ r e f   R C C _ M C O 1 S O U R C E _ S Y S C L K             S y s t e m   c l o c k   s e l e c t e d   a s   M C O   c l o c k  
     *                         @ a r g   @ r e f   R C C _ M C O 1 S O U R C E _ H S I                   H S I   s e l e c t e d   a s   M C O   c l o c k  
     *                         @ a r g   @ r e f   R C C _ M C O 1 S O U R C E _ H S E                   H S E   s e l e c t e d   a s   M C O   c l o c k  
     @ i f   S T M 3 2 F 1 0 5 x C  
     *                         @ a r g   @ r e f   R C C _ M C O 1 S O U R C E _ P L L C L K               P L L   c l o c k   d i v i d e d   b y   2   s e l e c t e d   a s   M C O   s o u r c e  
     *                         @ a r g   @ r e f   R C C _ M C O 1 S O U R C E _ P L L 2 C L K             P L L 2   c l o c k   s e l e c t e d   a s   M C O   s o u r c e  
     *                         @ a r g   @ r e f   R C C _ M C O 1 S O U R C E _ P L L 3 C L K _ D I V 2   P L L 3   c l o c k   d i v i d e d   b y   2   s e l e c t e d   a s   M C O   s o u r c e  
     *                         @ a r g   @ r e f   R C C _ M C O 1 S O U R C E _ E X T _ H S E             X T 1   e x t e r n a l   3 - 2 5   M H z   o s c i l l a t o r   c l o c k   s e l e c t e d   a s   M C O   s o u r c e  
     *                         @ a r g   @ r e f   R C C _ M C O 1 S O U R C E _ P L L 3 C L K             P L L 3   c l o c k   s e l e c t e d   a s   M C O   s o u r c e  
     @ e n d i f  
     @ i f   S T M 3 2 F 1 0 7 x C  
     *                         @ a r g   @ r e f   R C C _ M C O 1 S O U R C E _ P L L C L K               P L L   c l o c k   d i v i d e d   b y   2   s e l e c t e d   a s   M C O   s o u r c e  
     *                         @ a r g   @ r e f   R C C _ M C O 1 S O U R C E _ P L L 2 C L K             P L L 2   c l o c k   s e l e c t e d   a s   M C O   s o u r c e  
     *                         @ a r g   @ r e f   R C C _ M C O 1 S O U R C E _ P L L 3 C L K _ D I V 2   P L L 3   c l o c k   d i v i d e d   b y   2   s e l e c t e d   a s   M C O   s o u r c e  
     *                         @ a r g   @ r e f   R C C _ M C O 1 S O U R C E _ E X T _ H S E   X T 1     e x t e r n a l   3 - 2 5   M H z   o s c i l l a t o r   c l o c k   s e l e c t e d   a s   M C O   s o u r c e  
     *                         @ a r g   @ r e f   R C C _ M C O 1 S O U R C E _ P L L 3 C L K             P L L 3   c l o c k   s e l e c t e d   a s   M C O   s o u r c e  
     @ e n d i f  
     *   @ p a r a m     R C C _ M C O D i v   s p e c i f i e s   t h e   M C O   D I V .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   @ r e f   R C C _ M C O D I V _ 1   n o   d i v i s i o n   a p p l i e d   t o   M C O   c l o c k  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ R C C _ M C O C o n f i g ( u i n t 3 2 _ t   R C C _ M C O x ,   u i n t 3 2 _ t   R C C _ M C O S o u r c e ,   u i n t 3 2 _ t   R C C _ M C O D i v )  
 {  
     G P I O _ I n i t T y p e D e f   g p i o   =   { 0 U } ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R C C _ M C O ( R C C _ M C O x ) ) ;  
     a s s e r t _ p a r a m ( I S _ R C C _ M C O D I V ( R C C _ M C O D i v ) ) ;  
     a s s e r t _ p a r a m ( I S _ R C C _ M C O 1 S O U R C E ( R C C _ M C O S o u r c e ) ) ;  
  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( R C C _ M C O x ) ;  
     U N U S E D ( R C C _ M C O D i v ) ;  
  
     / *   C o n f i g u r e   t h e   M C O 1   p i n   i n   a l t e r n a t e   f u n c t i o n   m o d e   * /  
     g p i o . M o d e             =   G P I O _ M O D E _ A F _ P P ;  
     g p i o . S p e e d           =   G P I O _ S P E E D _ F R E Q _ H I G H ;  
     g p i o . P u l l             =   G P I O _ N O P U L L ;  
     g p i o . P i n               =   M C O 1 _ P I N ;  
  
     / *   M C O 1   C l o c k   E n a b l e   * /  
     M C O 1 _ C L K _ E N A B L E ( ) ;  
  
     H A L _ G P I O _ I n i t ( M C O 1 _ G P I O _ P O R T ,   & g p i o ) ;  
  
     / *   C o n f i g u r e   t h e   M C O   c l o c k   s o u r c e   * /  
     _ _ H A L _ R C C _ M C O 1 _ C O N F I G ( R C C _ M C O S o u r c e ,   R C C _ M C O D i v ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e s   t h e   C l o c k   S e c u r i t y   S y s t e m .  
     *   @ n o t e       I f   a   f a i l u r e   i s   d e t e c t e d   o n   t h e   H S E   o s c i l l a t o r   c l o c k ,   t h i s   o s c i l l a t o r  
     *                   i s   a u t o m a t i c a l l y   d i s a b l e d   a n d   a n   i n t e r r u p t   i s   g e n e r a t e d   t o   i n f o r m   t h e  
     *                   s o f t w a r e   a b o u t   t h e   f a i l u r e   ( C l o c k   S e c u r i t y   S y s t e m   I n t e r r u p t ,   C S S I ) ,  
     *                   a l l o w i n g   t h e   M C U   t o   p e r f o r m   r e s c u e   o p e r a t i o n s .   T h e   C S S I   i s   l i n k e d   t o  
     *                   t h e   C o r t e x - M 3   N M I   ( N o n - M a s k a b l e   I n t e r r u p t )   e x c e p t i o n   v e c t o r .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ R C C _ E n a b l e C S S ( v o i d )  
 {  
     * ( _ _ I O   u i n t 3 2 _ t   * )   R C C _ C R _ C S S O N _ B B   =   ( u i n t 3 2 _ t ) E N A B L E ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e s   t h e   C l o c k   S e c u r i t y   S y s t e m .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ R C C _ D i s a b l e C S S ( v o i d )  
 {  
     * ( _ _ I O   u i n t 3 2 _ t   * )   R C C _ C R _ C S S O N _ B B   =   ( u i n t 3 2 _ t ) D I S A B L E ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n s   t h e   S Y S C L K   f r e q u e n c y  
     *   @ n o t e       T h e   s y s t e m   f r e q u e n c y   c o m p u t e d   b y   t h i s   f u n c t i o n   i s   n o t   t h e   r e a l  
     *                   f r e q u e n c y   i n   t h e   c h i p .   I t   i s   c a l c u l a t e d   b a s e d   o n   t h e   p r e d e f i n e d  
     *                   c o n s t a n t   a n d   t h e   s e l e c t e d   c l o c k   s o u r c e :  
     *   @ n o t e           I f   S Y S C L K   s o u r c e   i s   H S I ,   f u n c t i o n   r e t u r n s   v a l u e s   b a s e d   o n   H S I _ V A L U E ( * )  
     *   @ n o t e           I f   S Y S C L K   s o u r c e   i s   H S E ,   f u n c t i o n   r e t u r n s   a   v a l u e   b a s e d   o n   H S E _ V A L U E  
     *                       d i v i d e d   b y   P R E D I V   f a c t o r ( * * )  
     *   @ n o t e           I f   S Y S C L K   s o u r c e   i s   P L L ,   f u n c t i o n   r e t u r n s   a   v a l u e   b a s e d   o n   H S E _ V A L U E  
     *                       d i v i d e d   b y   P R E D I V   f a c t o r ( * * )   o r   H S I _ V A L U E ( * )   m u l t i p l i e d   b y   t h e   P L L   f a c t o r .  
     *   @ n o t e           ( * )   H S I _ V A L U E   i s   a   c o n s t a n t   d e f i n e d   i n   s t m 3 2 f 1 x x _ h a l _ c o n f . h   f i l e   ( d e f a u l t   v a l u e  
     *                               8   M H z )   b u t   t h e   r e a l   v a l u e   m a y   v a r y   d e p e n d i n g   o n   t h e   v a r i a t i o n s  
     *                               i n   v o l t a g e   a n d   t e m p e r a t u r e .  
     *   @ n o t e           ( * * )   H S E _ V A L U E   i s   a   c o n s t a n t   d e f i n e d   i n   s t m 3 2 f 1 x x _ h a l _ c o n f . h   f i l e   ( d e f a u l t   v a l u e  
     *                                 8   M H z ) ,   u s e r   h a s   t o   e n s u r e   t h a t   H S E _ V A L U E   i s   s a m e   a s   t h e   r e a l  
     *                                 f r e q u e n c y   o f   t h e   c r y s t a l   u s e d .   O t h e r w i s e ,   t h i s   f u n c t i o n   m a y  
     *                                 h a v e   w r o n g   r e s u l t .  
     *  
     *   @ n o t e       T h e   r e s u l t   o f   t h i s   f u n c t i o n   c o u l d   b e   n o t   c o r r e c t   w h e n   u s i n g   f r a c t i o n a l  
     *                   v a l u e   f o r   H S E   c r y s t a l .  
     *  
     *   @ n o t e       T h i s   f u n c t i o n   c a n   b e   u s e d   b y   t h e   u s e r   a p p l i c a t i o n   t o   c o m p u t e   t h e  
     *                   b a u d - r a t e   f o r   t h e   c o m m u n i c a t i o n   p e r i p h e r a l s   o r   c o n f i g u r e   o t h e r   p a r a m e t e r s .  
     *  
     *   @ n o t e       E a c h   t i m e   S Y S C L K   c h a n g e s ,   t h i s   f u n c t i o n   m u s t   b e   c a l l e d   t o   u p d a t e   t h e  
     *                   r i g h t   S Y S C L K   v a l u e .   O t h e r w i s e ,   a n y   c o n f i g u r a t i o n   b a s e d   o n   t h i s   f u n c t i o n   w i l l   b e   i n c o r r e c t .  
     *  
     *   @ r e t v a l   S Y S C L K   f r e q u e n c y  
     * /  
 u i n t 3 2 _ t   H A L _ R C C _ G e t S y s C l o c k F r e q ( v o i d )  
 {  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ P R E D I V 1 S R C )  
     c o n s t   u i n t 8 _ t   a P L L M U L F a c t o r T a b l e [ 1 4 ]   =   { 0 ,   0 ,   4 ,   5 ,   6 ,   7 ,   8 ,   9 ,   0 ,   0 ,   0 ,   0 ,   0 ,   1 3 } ;  
     c o n s t   u i n t 8 _ t   a P r e d i v F a c t o r T a b l e [ 1 6 ]   =   { 1 ,   2 ,   3 ,   4 ,   5 ,   6 ,   7 ,   8 ,   9 ,   1 0 ,   1 1 ,   1 2 ,   1 3 ,   1 4 ,   1 5 ,   1 6 } ;  
 # e l s e  
     c o n s t   u i n t 8 _ t   a P L L M U L F a c t o r T a b l e [ 1 6 ]   =   { 2 ,   3 ,   4 ,   5 ,   6 ,   7 ,   8 ,   9 ,   1 0 ,   1 1 ,   1 2 ,   1 3 ,   1 4 ,   1 5 ,   1 6 ,   1 6 } ;  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ P R E D I V 1 )  
     c o n s t   u i n t 8 _ t   a P r e d i v F a c t o r T a b l e [ 1 6 ]   =   { 1 ,   2 ,   3 ,   4 ,   5 ,   6 ,   7 ,   8 ,   9 ,   1 0 ,   1 1 ,   1 2 ,   1 3 ,   1 4 ,   1 5 ,   1 6 } ;  
 # e l s e  
     c o n s t   u i n t 8 _ t   a P r e d i v F a c t o r T a b l e [ 2 ]   =   { 1 ,   2 } ;  
 # e n d i f   / * R C C _ C F G R 2 _ P R E D I V 1 * /  
  
 # e n d i f  
     u i n t 3 2 _ t   t m p r e g   =   0 U ,   p r e d i v   =   0 U ,   p l l c l k   =   0 U ,   p l l m u l   =   0 U ;  
     u i n t 3 2 _ t   s y s c l o c k f r e q   =   0 U ;  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ P R E D I V 1 S R C )  
     u i n t 3 2 _ t   p r e d i v 2   =   0 U ,   p l l 2 m u l   =   0 U ;  
 # e n d i f   / * R C C _ C F G R 2 _ P R E D I V 1 S R C * /  
  
     t m p r e g   =   R C C - > C F G R ;  
  
     / *   G e t   S Y S C L K   s o u r c e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     s w i t c h   ( t m p r e g   &   R C C _ C F G R _ S W S )  
     {  
         c a s e   R C C _ S Y S C L K S O U R C E _ S T A T U S _ H S E :     / *   H S E   u s e d   a s   s y s t e m   c l o c k   * /  
         {  
             s y s c l o c k f r e q   =   H S E _ V A L U E ;  
             b r e a k ;  
         }  
         c a s e   R C C _ S Y S C L K S O U R C E _ S T A T U S _ P L L C L K :     / *   P L L   u s e d   a s   s y s t e m   c l o c k   * /  
         {  
             p l l m u l   =   a P L L M U L F a c t o r T a b l e [ ( u i n t 3 2 _ t ) ( t m p r e g   &   R C C _ C F G R _ P L L M U L L )   > >   R C C _ C F G R _ P L L M U L L _ P o s ] ;  
             i f   ( ( t m p r e g   &   R C C _ C F G R _ P L L S R C )   ! =   R C C _ P L L S O U R C E _ H S I _ D I V 2 )  
             {  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ P R E D I V 1 )  
                 p r e d i v   =   a P r e d i v F a c t o r T a b l e [ ( u i n t 3 2 _ t ) ( R C C - > C F G R 2   &   R C C _ C F G R 2 _ P R E D I V 1 )   > >   R C C _ C F G R 2 _ P R E D I V 1 _ P o s ] ;  
 # e l s e  
                 p r e d i v   =   a P r e d i v F a c t o r T a b l e [ ( u i n t 3 2 _ t ) ( R C C - > C F G R   &   R C C _ C F G R _ P L L X T P R E )   > >   R C C _ C F G R _ P L L X T P R E _ P o s ] ;  
 # e n d i f   / * R C C _ C F G R 2 _ P R E D I V 1 * /  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ P R E D I V 1 S R C )  
  
                 i f   ( H A L _ I S _ B I T _ S E T ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ P R E D I V 1 S R C ) )  
                 {  
                     / *   P L L 2   s e l e c t e d   a s   P r e d i v 1   s o u r c e   * /  
                     / *   P L L C L K   =   P L L 2 C L K   /   P R E D I V 1   *   P L L M U L   w i t h   P L L 2 C L K   =   H S E / P R E D I V 2   *   P L L 2 M U L   * /  
                     p r e d i v 2   =   ( ( R C C - > C F G R 2   &   R C C _ C F G R 2 _ P R E D I V 2 )   > >   R C C _ C F G R 2 _ P R E D I V 2 _ P o s )   +   1 ;  
                     p l l 2 m u l   =   ( ( R C C - > C F G R 2   &   R C C _ C F G R 2 _ P L L 2 M U L )   > >   R C C _ C F G R 2 _ P L L 2 M U L _ P o s )   +   2 ;  
                     p l l c l k   =   ( u i n t 3 2 _ t ) ( ( ( u i n t 6 4 _ t ) H S E _ V A L U E   *   ( u i n t 6 4 _ t ) p l l 2 m u l   *   ( u i n t 6 4 _ t ) p l l m u l )   /   ( ( u i n t 6 4 _ t ) p r e d i v 2   *   ( u i n t 6 4 _ t ) p r e d i v ) ) ;  
                 }  
                 e l s e  
                 {  
                     / *   H S E   u s e d   a s   P L L   c l o c k   s o u r c e   :   P L L C L K   =   H S E / P R E D I V 1   *   P L L M U L   * /  
                     p l l c l k   =   ( u i n t 3 2 _ t ) ( ( H S E _ V A L U E   *   p l l m u l )   /   p r e d i v ) ;  
                 }  
  
                 / *   I f   P L L M U L   w a s   s e t   t o   1 3   m e a n s   t h a t   i t   w a s   t o   c o v e r   t h e   c a s e   P L L M U L   6 . 5   ( a v o i d   u s i n g   f l o a t )   * /  
                 / *   I n   t h i s   c a s e   n e e d   t o   d i v i d e   p l l c l k   b y   2   * /  
                 i f   ( p l l m u l   = =   a P L L M U L F a c t o r T a b l e [ ( u i n t 3 2 _ t ) ( R C C _ C F G R _ P L L M U L L 6 _ 5 )   > >   R C C _ C F G R _ P L L M U L L _ P o s ] )  
                 {  
                     p l l c l k   =   p l l c l k   /   2 ;  
                 }  
 # e l s e  
                 / *   H S E   u s e d   a s   P L L   c l o c k   s o u r c e   :   P L L C L K   =   H S E / P R E D I V 1   *   P L L M U L   * /  
                 p l l c l k   =   ( u i n t 3 2 _ t ) ( ( H S E _ V A L U E     *   p l l m u l )   /   p r e d i v ) ;  
 # e n d i f   / * R C C _ C F G R 2 _ P R E D I V 1 S R C * /  
             }  
             e l s e  
             {  
                 / *   H S I   u s e d   a s   P L L   c l o c k   s o u r c e   :   P L L C L K   =   H S I / 2   *   P L L M U L   * /  
                 p l l c l k   =   ( u i n t 3 2 _ t ) ( ( H S I _ V A L U E   > >   1 )   *   p l l m u l ) ;  
             }  
             s y s c l o c k f r e q   =   p l l c l k ;  
             b r e a k ;  
         }  
         c a s e   R C C _ S Y S C L K S O U R C E _ S T A T U S _ H S I :     / *   H S I   u s e d   a s   s y s t e m   c l o c k   s o u r c e   * /  
         d e f a u l t :   / *   H S I   u s e d   a s   s y s t e m   c l o c k   * /  
         {  
             s y s c l o c k f r e q   =   H S I _ V A L U E ;  
             b r e a k ;  
         }  
     }  
     r e t u r n   s y s c l o c k f r e q ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n s   t h e   H C L K   f r e q u e n c y  
     *   @ n o t e       E a c h   t i m e   H C L K   c h a n g e s ,   t h i s   f u n c t i o n   m u s t   b e   c a l l e d   t o   u p d a t e   t h e  
     *                   r i g h t   H C L K   v a l u e .   O t h e r w i s e ,   a n y   c o n f i g u r a t i o n   b a s e d   o n   t h i s   f u n c t i o n   w i l l   b e   i n c o r r e c t .  
     *  
     *   @ n o t e       T h e   S y s t e m C o r e C l o c k   C M S I S   v a r i a b l e   i s   u s e d   t o   s t o r e   S y s t e m   C l o c k   F r e q u e n c y  
     *                   a n d   u p d a t e d   w i t h i n   t h i s   f u n c t i o n  
     *   @ r e t v a l   H C L K   f r e q u e n c y  
     * /  
 u i n t 3 2 _ t   H A L _ R C C _ G e t H C L K F r e q ( v o i d )  
 {  
     r e t u r n   S y s t e m C o r e C l o c k ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n s   t h e   P C L K 1   f r e q u e n c y  
     *   @ n o t e       E a c h   t i m e   P C L K 1   c h a n g e s ,   t h i s   f u n c t i o n   m u s t   b e   c a l l e d   t o   u p d a t e   t h e  
     *                   r i g h t   P C L K 1   v a l u e .   O t h e r w i s e ,   a n y   c o n f i g u r a t i o n   b a s e d   o n   t h i s   f u n c t i o n   w i l l   b e   i n c o r r e c t .  
     *   @ r e t v a l   P C L K 1   f r e q u e n c y  
     * /  
 u i n t 3 2 _ t   H A L _ R C C _ G e t P C L K 1 F r e q ( v o i d )  
 {  
     / *   G e t   H C L K   s o u r c e   a n d   C o m p u t e   P C L K 1   f r e q u e n c y   - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     r e t u r n   ( H A L _ R C C _ G e t H C L K F r e q ( )   > >   A P B P r e s c T a b l e [ ( R C C - > C F G R   &   R C C _ C F G R _ P P R E 1 )   > >   R C C _ C F G R _ P P R E 1 _ P o s ] ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n s   t h e   P C L K 2   f r e q u e n c y  
     *   @ n o t e       E a c h   t i m e   P C L K 2   c h a n g e s ,   t h i s   f u n c t i o n   m u s t   b e   c a l l e d   t o   u p d a t e   t h e  
     *                   r i g h t   P C L K 2   v a l u e .   O t h e r w i s e ,   a n y   c o n f i g u r a t i o n   b a s e d   o n   t h i s   f u n c t i o n   w i l l   b e   i n c o r r e c t .  
     *   @ r e t v a l   P C L K 2   f r e q u e n c y  
     * /  
 u i n t 3 2 _ t   H A L _ R C C _ G e t P C L K 2 F r e q ( v o i d )  
 {  
     / *   G e t   H C L K   s o u r c e   a n d   C o m p u t e   P C L K 2   f r e q u e n c y   - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     r e t u r n   ( H A L _ R C C _ G e t H C L K F r e q ( )   > >   A P B P r e s c T a b l e [ ( R C C - > C F G R   &   R C C _ C F G R _ P P R E 2 )   > >   R C C _ C F G R _ P P R E 2 _ P o s ] ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e s   t h e   R C C _ O s c I n i t S t r u c t   a c c o r d i n g   t o   t h e   i n t e r n a l  
     *   R C C   c o n f i g u r a t i o n   r e g i s t e r s .  
     *   @ p a r a m     R C C _ O s c I n i t S t r u c t   p o i n t e r   t o   a n   R C C _ O s c I n i t T y p e D e f   s t r u c t u r e   t h a t  
     *   w i l l   b e   c o n f i g u r e d .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ R C C _ G e t O s c C o n f i g ( R C C _ O s c I n i t T y p e D e f     * R C C _ O s c I n i t S t r u c t )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( R C C _ O s c I n i t S t r u c t   ! =   N U L L ) ;  
  
     / *   S e t   a l l   p o s s i b l e   v a l u e s   f o r   t h e   O s c i l l a t o r   t y p e   p a r a m e t e r   - - - - - - - - - - - - - - - * /  
     R C C _ O s c I n i t S t r u c t - > O s c i l l a t o r T y p e   =   R C C _ O S C I L L A T O R T Y P E _ H S E   |   R C C _ O S C I L L A T O R T Y P E _ H S I     \  
                                                                             |   R C C _ O S C I L L A T O R T Y P E _ L S E   |   R C C _ O S C I L L A T O R T Y P E _ L S I ;  
  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ P R E D I V 1 S R C )  
     / *   G e t   t h e   P r e d i v 1   s o u r c e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     R C C _ O s c I n i t S t r u c t - > P r e d i v 1 S o u r c e   =   R E A D _ B I T ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ P R E D I V 1 S R C ) ;  
 # e n d i f   / *   R C C _ C F G R 2 _ P R E D I V 1 S R C   * /  
  
     / *   G e t   t h e   H S E   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( R C C - > C R   &   R C C _ C R _ H S E B Y P )   = =   R C C _ C R _ H S E B Y P )  
     {  
         R C C _ O s c I n i t S t r u c t - > H S E S t a t e   =   R C C _ H S E _ B Y P A S S ;  
     }  
     e l s e   i f   ( ( R C C - > C R   &   R C C _ C R _ H S E O N )   = =   R C C _ C R _ H S E O N )  
     {  
         R C C _ O s c I n i t S t r u c t - > H S E S t a t e   =   R C C _ H S E _ O N ;  
     }  
     e l s e  
     {  
         R C C _ O s c I n i t S t r u c t - > H S E S t a t e   =   R C C _ H S E _ O F F ;  
     }  
     R C C _ O s c I n i t S t r u c t - > H S E P r e d i v V a l u e   =   _ _ H A L _ R C C _ H S E _ G E T _ P R E D I V ( ) ;  
  
     / *   G e t   t h e   H S I   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( R C C - > C R   &   R C C _ C R _ H S I O N )   = =   R C C _ C R _ H S I O N )  
     {  
         R C C _ O s c I n i t S t r u c t - > H S I S t a t e   =   R C C _ H S I _ O N ;  
     }  
     e l s e  
     {  
         R C C _ O s c I n i t S t r u c t - > H S I S t a t e   =   R C C _ H S I _ O F F ;  
     }  
  
     R C C _ O s c I n i t S t r u c t - > H S I C a l i b r a t i o n V a l u e   =   ( u i n t 3 2 _ t ) ( ( R C C - > C R   &   R C C _ C R _ H S I T R I M )   > >   R C C _ C R _ H S I T R I M _ P o s ) ;  
  
     / *   G e t   t h e   L S E   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( R C C - > B D C R   &   R C C _ B D C R _ L S E B Y P )   = =   R C C _ B D C R _ L S E B Y P )  
     {  
         R C C _ O s c I n i t S t r u c t - > L S E S t a t e   =   R C C _ L S E _ B Y P A S S ;  
     }  
     e l s e   i f   ( ( R C C - > B D C R   &   R C C _ B D C R _ L S E O N )   = =   R C C _ B D C R _ L S E O N )  
     {  
         R C C _ O s c I n i t S t r u c t - > L S E S t a t e   =   R C C _ L S E _ O N ;  
     }  
     e l s e  
     {  
         R C C _ O s c I n i t S t r u c t - > L S E S t a t e   =   R C C _ L S E _ O F F ;  
     }  
  
     / *   G e t   t h e   L S I   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( R C C - > C S R   &   R C C _ C S R _ L S I O N )   = =   R C C _ C S R _ L S I O N )  
     {  
         R C C _ O s c I n i t S t r u c t - > L S I S t a t e   =   R C C _ L S I _ O N ;  
     }  
     e l s e  
     {  
         R C C _ O s c I n i t S t r u c t - > L S I S t a t e   =   R C C _ L S I _ O F F ;  
     }  
  
  
     / *   G e t   t h e   P L L   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( R C C - > C R   &   R C C _ C R _ P L L O N )   = =   R C C _ C R _ P L L O N )  
     {  
         R C C _ O s c I n i t S t r u c t - > P L L . P L L S t a t e   =   R C C _ P L L _ O N ;  
     }  
     e l s e  
     {  
         R C C _ O s c I n i t S t r u c t - > P L L . P L L S t a t e   =   R C C _ P L L _ O F F ;  
     }  
     R C C _ O s c I n i t S t r u c t - > P L L . P L L S o u r c e   =   ( u i n t 3 2 _ t ) ( R C C - > C F G R   &   R C C _ C F G R _ P L L S R C ) ;  
     R C C _ O s c I n i t S t r u c t - > P L L . P L L M U L   =   ( u i n t 3 2 _ t ) ( R C C - > C F G R   &   R C C _ C F G R _ P L L M U L L ) ;  
 # i f   d e f i n e d ( R C C _ C R _ P L L 2 O N )  
     / *   G e t   t h e   P L L 2   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( R C C - > C R   &   R C C _ C R _ P L L 2 O N )   = =   R C C _ C R _ P L L 2 O N )  
     {  
         R C C _ O s c I n i t S t r u c t - > P L L 2 . P L L 2 S t a t e   =   R C C _ P L L 2 _ O N ;  
     }  
     e l s e  
     {  
         R C C _ O s c I n i t S t r u c t - > P L L 2 . P L L 2 S t a t e   =   R C C _ P L L 2 _ O F F ;  
     }  
     R C C _ O s c I n i t S t r u c t - > P L L 2 . H S E P r e d i v 2 V a l u e   =   _ _ H A L _ R C C _ H S E _ G E T _ P R E D I V 2 ( ) ;  
     R C C _ O s c I n i t S t r u c t - > P L L 2 . P L L 2 M U L   =   ( u i n t 3 2 _ t ) ( R C C - > C F G R 2   &   R C C _ C F G R 2 _ P L L 2 M U L ) ;  
 # e n d i f   / *   R C C _ C R _ P L L 2 O N   * /  
 }  
  
 / * *  
     *   @ b r i e f     G e t   t h e   R C C _ C l k I n i t S t r u c t   a c c o r d i n g   t o   t h e   i n t e r n a l  
     *   R C C   c o n f i g u r a t i o n   r e g i s t e r s .  
     *   @ p a r a m     R C C _ C l k I n i t S t r u c t   p o i n t e r   t o   a n   R C C _ C l k I n i t T y p e D e f   s t r u c t u r e   t h a t  
     *   c o n t a i n s   t h e   c u r r e n t   c l o c k   c o n f i g u r a t i o n .  
     *   @ p a r a m     p F L a t e n c y   P o i n t e r   o n   t h e   F l a s h   L a t e n c y .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ R C C _ G e t C l o c k C o n f i g ( R C C _ C l k I n i t T y p e D e f     * R C C _ C l k I n i t S t r u c t ,   u i n t 3 2 _ t   * p F L a t e n c y )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( R C C _ C l k I n i t S t r u c t   ! =   N U L L ) ;  
     a s s e r t _ p a r a m ( p F L a t e n c y   ! =   N U L L ) ;  
  
     / *   S e t   a l l   p o s s i b l e   v a l u e s   f o r   t h e   C l o c k   t y p e   p a r a m e t e r   - - - - - - - - - - - - - - - - - - - - * /  
     R C C _ C l k I n i t S t r u c t - > C l o c k T y p e   =   R C C _ C L O C K T Y P E _ S Y S C L K   |   R C C _ C L O C K T Y P E _ H C L K   |   R C C _ C L O C K T Y P E _ P C L K 1   |   R C C _ C L O C K T Y P E _ P C L K 2 ;  
  
     / *   G e t   t h e   S Y S C L K   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     R C C _ C l k I n i t S t r u c t - > S Y S C L K S o u r c e   =   ( u i n t 3 2 _ t ) ( R C C - > C F G R   &   R C C _ C F G R _ S W ) ;  
  
     / *   G e t   t h e   H C L K   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     R C C _ C l k I n i t S t r u c t - > A H B C L K D i v i d e r   =   ( u i n t 3 2 _ t ) ( R C C - > C F G R   &   R C C _ C F G R _ H P R E ) ;  
  
     / *   G e t   t h e   A P B 1   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     R C C _ C l k I n i t S t r u c t - > A P B 1 C L K D i v i d e r   =   ( u i n t 3 2 _ t ) ( R C C - > C F G R   &   R C C _ C F G R _ P P R E 1 ) ;  
  
     / *   G e t   t h e   A P B 2   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     R C C _ C l k I n i t S t r u c t - > A P B 2 C L K D i v i d e r   =   ( u i n t 3 2 _ t ) ( ( R C C - > C F G R   &   R C C _ C F G R _ P P R E 2 )   > >   3 ) ;  
  
 # i f       d e f i n e d ( F L A S H _ A C R _ L A T E N C Y )  
     / *   G e t   t h e   F l a s h   W a i t   S t a t e   ( L a t e n c y )   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - * /  
     * p F L a t e n c y   =   ( u i n t 3 2 _ t ) ( F L A S H - > A C R   &   F L A S H _ A C R _ L A T E N C Y ) ;  
 # e l s e  
     / *   F o r   V A L U E   l i n e s   d e v i c e s ,   o n l y   L A T E N C Y _ 0   c a n   b e   s e t * /  
     * p F L a t e n c y   =   ( u i n t 3 2 _ t ) F L A S H _ L A T E N C Y _ 0 ;  
 # e n d i f  
 }  
  
 / * *  
     *   @ b r i e f   T h i s   f u n c t i o n   h a n d l e s   t h e   R C C   C S S   i n t e r r u p t   r e q u e s t .  
     *   @ n o t e   T h i s   A P I   s h o u l d   b e   c a l l e d   u n d e r   t h e   N M I _ H a n d l e r ( ) .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ R C C _ N M I _ I R Q H a n d l e r ( v o i d )  
 {  
     / *   C h e c k   R C C   C S S F   f l a g     * /  
     i f   ( _ _ H A L _ R C C _ G E T _ I T ( R C C _ I T _ C S S ) )  
     {  
         / *   R C C   C l o c k   S e c u r i t y   S y s t e m   i n t e r r u p t   u s e r   c a l l b a c k   * /  
         H A L _ R C C _ C S S C a l l b a c k ( ) ;  
  
         / *   C l e a r   R C C   C S S   p e n d i n g   b i t   * /  
         _ _ H A L _ R C C _ C L E A R _ I T ( R C C _ I T _ C S S ) ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   p r o v i d e s   d e l a y   ( i n   m i l l i s e c o n d s )   b a s e d   o n   C P U   c y c l e s   m e t h o d .  
     *   @ p a r a m     m d e l a y :   s p e c i f i e s   t h e   d e l a y   t i m e   l e n g t h ,   i n   m i l l i s e c o n d s .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   R C C _ D e l a y ( u i n t 3 2 _ t   m d e l a y )  
 {  
     _ _ I O   u i n t 3 2 _ t   D e l a y   =   m d e l a y   *   ( S y s t e m C o r e C l o c k   /   8 U   /   1 0 0 0 U ) ;  
     d o  
     {  
         _ _ N O P ( ) ;  
     }  
     w h i l e   ( D e l a y   - - ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R C C   C l o c k   S e c u r i t y   S y s t e m   i n t e r r u p t   c a l l b a c k  
     *   @ r e t v a l   n o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ R C C _ C S S C a l l b a c k ( v o i d )  
 {  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
         t h e   H A L _ R C C _ C S S C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
         * /  
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
 # e n d i f   / *   H A L _ R C C _ M O D U L E _ E N A B L E D   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  