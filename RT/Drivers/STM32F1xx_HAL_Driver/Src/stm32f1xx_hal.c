??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H A L   m o d u l e   d r i v e r .  
     *                     T h i s   i s   t h e   c o m m o n   p a r t   o f   t h e   H A L   i n i t i a l i z a t i o n  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                           # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h e   c o m m o n   H A L   d r i v e r   c o n t a i n s   a   s e t   o f   g e n e r i c   a n d   c o m m o n   A P I s   t h a t   c a n   b e  
         u s e d   b y   t h e   P P P   p e r i p h e r a l   d r i v e r s   a n d   t h e   u s e r   t o   s t a r t   u s i n g   t h e   H A L .  
         [ . . ]  
         T h e   H A L   c o n t a i n s   t w o   A P I s '   c a t e g o r i e s :  
                   ( + )   C o m m o n   H A L   A P I s  
                   ( + )   S e r v i c e s   H A L   A P I s  
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
 / * *   @ d e f g r o u p   H A L   H A L  
     *   @ b r i e f   H A L   m o d u l e   d r i v e r .  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ M O D U L E _ E N A B L E D  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   H A L _ P r i v a t e _ C o n s t a n t s   H A L   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
 / * *  
   *   @ b r i e f   S T M 3 2 F 1 x x   H A L   D r i v e r   v e r s i o n   n u m b e r   V 1 . 1 . 8  
       * /  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ H A L _ V E R S I O N _ M A I N       ( 0 x 0 1 U )   / * ! <   [ 3 1 : 2 4 ]   m a i n   v e r s i o n   * /  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ H A L _ V E R S I O N _ S U B 1       ( 0 x 0 1 U )   / * ! <   [ 2 3 : 1 6 ]   s u b 1   v e r s i o n   * /  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ H A L _ V E R S I O N _ S U B 2       ( 0 x 0 8 U )   / * ! <   [ 1 5 : 8 ]     s u b 2   v e r s i o n   * /  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ H A L _ V E R S I O N _ R C           ( 0 x 0 0 U )   / * ! <   [ 7 : 0 ]     r e l e a s e   c a n d i d a t e   * /  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ H A L _ V E R S I O N                   ( ( _ _ S T M 3 2 F 1 x x _ H A L _ V E R S I O N _ M A I N   < <   2 4 ) \  
                                                                                 | ( _ _ S T M 3 2 F 1 x x _ H A L _ V E R S I O N _ S U B 1   < <   1 6 ) \  
                                                                                 | ( _ _ S T M 3 2 F 1 x x _ H A L _ V E R S I O N _ S U B 2   < <   8   ) \  
                                                                                 | ( _ _ S T M 3 2 F 1 x x _ H A L _ V E R S I O N _ R C ) )  
  
 # d e f i n e   I D C O D E _ D E V I D _ M A S K         0 x 0 0 0 0 0 F F F U  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   H A L _ P r i v a t e _ V a r i a b l e s   H A L   P r i v a t e   V a r i a b l e s  
     *   @ {  
     * /  
 _ _ I O   u i n t 3 2 _ t   u w T i c k ;  
 u i n t 3 2 _ t   u w T i c k P r i o       =   ( 1 U L   < <   _ _ N V I C _ P R I O _ B I T S ) ;   / *   I n v a l i d   P R I O   * /  
 H A L _ T i c k F r e q T y p e D e f   u w T i c k F r e q   =   H A L _ T I C K _ F R E Q _ D E F A U L T ;     / *   1 K H z   * /  
 / * *  
     *   @ }  
     * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   H A L _ E x p o r t e d _ F u n c t i o n s   H A L   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   H A L _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   F u n c t i o n s  
   *     @ b r i e f         I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
   *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                             # # # # #   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
       [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   I n i t i a l i z e s   t h e   F l a s h   i n t e r f a c e ,   t h e   N V I C   a l l o c a t i o n   a n d   i n i t i a l   c l o c k  
                     c o n f i g u r a t i o n .   I t   i n i t i a l i z e s   t h e   s y s t i c k   a l s o   w h e n   t i m e o u t   i s   n e e d e d  
                     a n d   t h e   b a c k u p   d o m a i n   w h e n   e n a b l e d .  
             ( + )   d e - I n i t i a l i z e s   c o m m o n   p a r t   o f   t h e   H A L .  
             ( + )   C o n f i g u r e   T h e   t i m e   b a s e   s o u r c e   t o   h a v e   1 m s   t i m e   b a s e   w i t h   a   d e d i c a t e d  
                     T i c k   i n t e r r u p t   p r i o r i t y .  
                 ( + + )   S y s T i c k   t i m e r   i s   u s e d   b y   d e f a u l t   a s   s o u r c e   o f   t i m e   b a s e ,   b u t   u s e r  
                           c a n   e v e n t u a l l y   i m p l e m e n t   h i s   p r o p e r   t i m e   b a s e   s o u r c e   ( a   g e n e r a l   p u r p o s e  
                           t i m e r   f o r   e x a m p l e   o r   o t h e r   t i m e   s o u r c e ) ,   k e e p i n g   i n   m i n d   t h a t   T i m e   b a s e  
                           d u r a t i o n   s h o u l d   b e   k e p t   1 m s   s i n c e   P P P _ T I M E O U T _ V A L U E s   a r e   d e f i n e d   a n d  
                           h a n d l e d   i n   m i l l i s e c o n d s   b a s i s .  
                 ( + + )   T i m e   b a s e   c o n f i g u r a t i o n   f u n c t i o n   ( H A L _ I n i t T i c k   ( ) )   i s   c a l l e d   a u t o m a t i c a l l y  
                           a t   t h e   b e g i n n i n g   o f   t h e   p r o g r a m   a f t e r   r e s e t   b y   H A L _ I n i t ( )   o r   a t   a n y   t i m e  
                           w h e n   c l o c k   i s   c o n f i g u r e d ,   b y   H A L _ R C C _ C l o c k C o n f i g ( ) .  
                 ( + + )   S o u r c e   o f   t i m e   b a s e   i s   c o n f i g u r e d     t o   g e n e r a t e   i n t e r r u p t s   a t   r e g u l a r  
                           t i m e   i n t e r v a l s .   C a r e   m u s t   b e   t a k e n   i f   H A L _ D e l a y ( )   i s   c a l l e d   f r o m   a  
                           p e r i p h e r a l   I S R   p r o c e s s ,   t h e   T i c k   i n t e r r u p t   l i n e   m u s t   h a v e   h i g h e r   p r i o r i t y  
                         ( n u m e r i c a l l y   l o w e r )   t h a n   t h e   p e r i p h e r a l   i n t e r r u p t .   O t h e r w i s e   t h e   c a l l e r  
                         I S R   p r o c e s s   w i l l   b e   b l o c k e d .  
               ( + + )   f u n c t i o n s   a f f e c t i n g   t i m e   b a s e   c o n f i g u r a t i o n s   a r e   d e c l a r e d   a s   _ _ w e a k  
                           t o   m a k e     o v e r r i d e   p o s s i b l e     i n   c a s e   o f   o t h e r     i m p l e m e n t a t i o n s   i n   u s e r   f i l e .  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   i s   u s e d   t o   i n i t i a l i z e   t h e   H A L   L i b r a r y ;   i t   m u s t   b e   t h e   f i r s t  
     *                   i n s t r u c t i o n   t o   b e   e x e c u t e d   i n   t h e   m a i n   p r o g r a m   ( b e f o r e   t o   c a l l   a n y   o t h e r  
     *                   H A L   f u n c t i o n ) ,   i t   p e r f o r m s   t h e   f o l l o w i n g :  
     *                       C o n f i g u r e   t h e   F l a s h   p r e f e t c h .  
     *                       C o n f i g u r e s   t h e   S y s T i c k   t o   g e n e r a t e   a n   i n t e r r u p t   e a c h   1   m i l l i s e c o n d ,  
     *                       w h i c h   i s   c l o c k e d   b y   t h e   H S I   ( a t   t h i s   s t a g e ,   t h e   c l o c k   i s   n o t   y e t  
     *                       c o n f i g u r e d   a n d   t h u s   t h e   s y s t e m   i s   r u n n i n g   f r o m   t h e   i n t e r n a l   H S I   a t   1 6   M H z ) .  
     *                       S e t   N V I C   G r o u p   P r i o r i t y   t o   4 .  
     *                       C a l l s   t h e   H A L _ M s p I n i t ( )   c a l l b a c k   f u n c t i o n   d e f i n e d   i n   u s e r   f i l e  
     *                       " s t m 3 2 f 1 x x _ h a l _ m s p . c "   t o   d o   t h e   g l o b a l   l o w   l e v e l   h a r d w a r e   i n i t i a l i z a t i o n  
     *  
     *   @ n o t e       S y s T i c k   i s   u s e d   a s   t i m e   b a s e   f o r   t h e   H A L _ D e l a y ( )   f u n c t i o n ,   t h e   a p p l i c a t i o n  
     *                   n e e d   t o   e n s u r e   t h a t   t h e   S y s T i c k   t i m e   b a s e   i s   a l w a y s   s e t   t o   1   m i l l i s e c o n d  
     *                   t o   h a v e   c o r r e c t   H A L   o p e r a t i o n .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I n i t ( v o i d )  
 {  
     / *   C o n f i g u r e   F l a s h   p r e f e t c h   * /  
 # i f   ( P R E F E T C H _ E N A B L E   ! =   0 )  
 # i f   d e f i n e d ( S T M 3 2 F 1 0 1 x 6 )   | |   d e f i n e d ( S T M 3 2 F 1 0 1 x B )   | |   d e f i n e d ( S T M 3 2 F 1 0 1 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 1 x G )   | |   \  
         d e f i n e d ( S T M 3 2 F 1 0 2 x 6 )   | |   d e f i n e d ( S T M 3 2 F 1 0 2 x B )   | |   \  
         d e f i n e d ( S T M 3 2 F 1 0 3 x 6 )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x G )   | |   \  
         d e f i n e d ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d ( S T M 3 2 F 1 0 7 x C )  
  
     / *   P r e f e t c h   b u f f e r   i s   n o t   a v a i l a b l e   o n   v a l u e   l i n e   d e v i c e s   * /  
     _ _ H A L _ F L A S H _ P R E F E T C H _ B U F F E R _ E N A B L E ( ) ;  
 # e n d i f  
 # e n d i f   / *   P R E F E T C H _ E N A B L E   * /  
  
     / *   S e t   I n t e r r u p t   G r o u p   P r i o r i t y   * /  
     H A L _ N V I C _ S e t P r i o r i t y G r o u p i n g ( N V I C _ P R I O R I T Y G R O U P _ 4 ) ;  
  
     / *   U s e   s y s t i c k   a s   t i m e   b a s e   s o u r c e   a n d   c o n f i g u r e   1 m s   t i c k   ( d e f a u l t   c l o c k   a f t e r   R e s e t   i s   H S I )   * /  
     H A L _ I n i t T i c k ( T I C K _ I N T _ P R I O R I T Y ) ;  
  
     / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
     H A L _ M s p I n i t ( ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f   T h i s   f u n c t i o n   d e - I n i t i a l i z e s   c o m m o n   p a r t   o f   t h e   H A L   a n d   s t o p s   t h e   s y s t i c k .  
     *                 o f   t i m e   b a s e .  
     *   @ n o t e   T h i s   f u n c t i o n   i s   o p t i o n a l .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D e I n i t ( v o i d )  
 {  
     / *   R e s e t   o f   a l l   p e r i p h e r a l s   * /  
     _ _ H A L _ R C C _ A P B 1 _ F O R C E _ R E S E T ( ) ;  
     _ _ H A L _ R C C _ A P B 1 _ R E L E A S E _ R E S E T ( ) ;  
  
     _ _ H A L _ R C C _ A P B 2 _ F O R C E _ R E S E T ( ) ;  
     _ _ H A L _ R C C _ A P B 2 _ R E L E A S E _ R E S E T ( ) ;  
  
 # i f   d e f i n e d ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d ( S T M 3 2 F 1 0 7 x C )  
     _ _ H A L _ R C C _ A H B _ F O R C E _ R E S E T ( ) ;  
     _ _ H A L _ R C C _ A H B _ R E L E A S E _ R E S E T ( ) ;  
 # e n d i f  
  
     / *   D e - I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
     H A L _ M s p D e I n i t ( ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   t h e   M S P .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ M s p I n i t ( v o i d )  
 {  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e s   t h e   M S P .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ M s p D e I n i t ( v o i d )  
 {  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f   T h i s   f u n c t i o n   c o n f i g u r e s   t h e   s o u r c e   o f   t h e   t i m e   b a s e .  
     *                 T h e   t i m e   s o u r c e   i s   c o n f i g u r e d     t o   h a v e   1 m s   t i m e   b a s e   w i t h   a   d e d i c a t e d  
     *                 T i c k   i n t e r r u p t   p r i o r i t y .  
     *   @ n o t e   T h i s   f u n c t i o n   i s   c a l l e d     a u t o m a t i c a l l y   a t   t h e   b e g i n n i n g   o f   p r o g r a m   a f t e r  
     *               r e s e t   b y   H A L _ I n i t ( )   o r   a t   a n y   t i m e   w h e n   c l o c k   i s   r e c o n f i g u r e d     b y   H A L _ R C C _ C l o c k C o n f i g ( ) .  
     *   @ n o t e   I n   t h e   d e f a u l t   i m p l e m e n t a t i o n ,   S y s T i c k   t i m e r   i s   t h e   s o u r c e   o f   t i m e   b a s e .  
     *               I t   i s   u s e d   t o   g e n e r a t e   i n t e r r u p t s   a t   r e g u l a r   t i m e   i n t e r v a l s .  
     *               C a r e   m u s t   b e   t a k e n   i f   H A L _ D e l a y ( )   i s   c a l l e d   f r o m   a   p e r i p h e r a l   I S R   p r o c e s s ,  
     *               T h e   S y s T i c k   i n t e r r u p t   m u s t   h a v e   h i g h e r   p r i o r i t y   ( n u m e r i c a l l y   l o w e r )  
     *               t h a n   t h e   p e r i p h e r a l   i n t e r r u p t .   O t h e r w i s e   t h e   c a l l e r   I S R   p r o c e s s   w i l l   b e   b l o c k e d .  
     *               T h e   f u n c t i o n   i s   d e c l a r e d   a s   _ _ w e a k     t o   b e   o v e r w r i t t e n     i n   c a s e   o f   o t h e r  
     *               i m p l e m e n t a t i o n     i n   u s e r   f i l e .  
     *   @ p a r a m   T i c k P r i o r i t y   T i c k   i n t e r r u p t   p r i o r i t y .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 _ _ w e a k   H A L _ S t a t u s T y p e D e f   H A L _ I n i t T i c k ( u i n t 3 2 _ t   T i c k P r i o r i t y )  
 {  
     / *   C o n f i g u r e   t h e   S y s T i c k   t o   h a v e   i n t e r r u p t   i n   1 m s   t i m e   b a s i s * /  
     i f   ( H A L _ S Y S T I C K _ C o n f i g ( S y s t e m C o r e C l o c k   /   ( 1 0 0 0 U   /   u w T i c k F r e q ) )   >   0 U )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C o n f i g u r e   t h e   S y s T i c k   I R Q   p r i o r i t y   * /  
     i f   ( T i c k P r i o r i t y   <   ( 1 U L   < <   _ _ N V I C _ P R I O _ B I T S ) )  
     {  
         H A L _ N V I C _ S e t P r i o r i t y ( S y s T i c k _ I R Q n ,   T i c k P r i o r i t y ,   0 U ) ;  
         u w T i c k P r i o   =   T i c k P r i o r i t y ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   H A L _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   H A L   C o n t r o l   f u n c t i o n s  
     *     @ b r i e f         H A L   C o n t r o l   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   H A L   C o n t r o l   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   P r o v i d e   a   t i c k   v a l u e   i n   m i l l i s e c o n d  
             ( + )   P r o v i d e   a   b l o c k i n g   d e l a y   i n   m i l l i s e c o n d  
             ( + )   S u s p e n d   t h e   t i m e   b a s e   s o u r c e   i n t e r r u p t  
             ( + )   R e s u m e   t h e   t i m e   b a s e   s o u r c e   i n t e r r u p t  
             ( + )   G e t   t h e   H A L   A P I   d r i v e r   v e r s i o n  
             ( + )   G e t   t h e   d e v i c e   i d e n t i f i e r  
             ( + )   G e t   t h e   d e v i c e   r e v i s i o n   i d e n t i f i e r  
             ( + )   E n a b l e / D i s a b l e   D e b u g   m o d u l e   d u r i n g   S L E E P   m o d e  
             ( + )   E n a b l e / D i s a b l e   D e b u g   m o d u l e   d u r i n g   S T O P   m o d e  
             ( + )   E n a b l e / D i s a b l e   D e b u g   m o d u l e   d u r i n g   S T A N D B Y   m o d e  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f   T h i s   f u n c t i o n   i s   c a l l e d   t o   i n c r e m e n t     a   g l o b a l   v a r i a b l e   " u w T i c k "  
     *                 u s e d   a s   a p p l i c a t i o n   t i m e   b a s e .  
     *   @ n o t e   I n   t h e   d e f a u l t   i m p l e m e n t a t i o n ,   t h i s   v a r i a b l e   i s   i n c r e m e n t e d   e a c h   1 m s  
     *               i n   S y s T i c k   I S R .  
     *   @ n o t e   T h i s   f u n c t i o n   i s   d e c l a r e d   a s   _ _ w e a k   t o   b e   o v e r w r i t t e n   i n   c a s e   o f   o t h e r  
     *             i m p l e m e n t a t i o n s   i n   u s e r   f i l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I n c T i c k ( v o i d )  
 {  
     u w T i c k   + =   u w T i c k F r e q ;  
 }  
  
 / * *  
     *   @ b r i e f   P r o v i d e s   a   t i c k   v a l u e   i n   m i l l i s e c o n d .  
     *   @ n o t e     T h i s   f u n c t i o n   i s   d e c l a r e d   a s   _ _ w e a k   t o   b e   o v e r w r i t t e n   i n   c a s e   o f   o t h e r  
     *               i m p l e m e n t a t i o n s   i n   u s e r   f i l e .  
     *   @ r e t v a l   t i c k   v a l u e  
     * /  
 _ _ w e a k   u i n t 3 2 _ t   H A L _ G e t T i c k ( v o i d )  
 {  
     r e t u r n   u w T i c k ;  
 }  
  
 / * *  
     *   @ b r i e f   T h i s   f u n c t i o n   r e t u r n s   a   t i c k   p r i o r i t y .  
     *   @ r e t v a l   t i c k   p r i o r i t y  
     * /  
 u i n t 3 2 _ t   H A L _ G e t T i c k P r i o ( v o i d )  
 {  
     r e t u r n   u w T i c k P r i o ;  
 }  
  
 / * *  
     *   @ b r i e f   S e t   n e w   t i c k   F r e q .  
     *   @ r e t v a l   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S e t T i c k F r e q ( H A L _ T i c k F r e q T y p e D e f   F r e q )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s     =   H A L _ O K ;  
     H A L _ T i c k F r e q T y p e D e f   p r e v T i c k F r e q ;  
  
     a s s e r t _ p a r a m ( I S _ T I C K F R E Q ( F r e q ) ) ;  
  
     i f   ( u w T i c k F r e q   ! =   F r e q )  
     {  
         / *   B a c k   u p   u w T i c k F r e q   f r e q u e n c y   * /  
         p r e v T i c k F r e q   =   u w T i c k F r e q ;  
  
         / *   U p d a t e   u w T i c k F r e q   g l o b a l   v a r i a b l e   u s e d   b y   H A L _ I n i t T i c k ( )   * /  
         u w T i c k F r e q   =   F r e q ;  
  
         / *   A p p l y   t h e   n e w   t i c k   F r e q     * /  
         s t a t u s   =   H A L _ I n i t T i c k ( u w T i c k P r i o ) ;  
  
         i f   ( s t a t u s   ! =   H A L _ O K )  
         {  
             / *   R e s t o r e   p r e v i o u s   t i c k   f r e q u e n c y   * /  
             u w T i c k F r e q   =   p r e v T i c k F r e q ;  
         }  
     }  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f   R e t u r n   t i c k   f r e q u e n c y .  
     *   @ r e t v a l   t i c k   p e r i o d   i n   H z  
     * /  
 H A L _ T i c k F r e q T y p e D e f   H A L _ G e t T i c k F r e q ( v o i d )  
 {  
     r e t u r n   u w T i c k F r e q ;  
 }  
  
 / * *  
     *   @ b r i e f   T h i s   f u n c t i o n   p r o v i d e s   m i n i m u m   d e l a y   ( i n   m i l l i s e c o n d s )   b a s e d  
     *                 o n   v a r i a b l e   i n c r e m e n t e d .  
     *   @ n o t e   I n   t h e   d e f a u l t   i m p l e m e n t a t i o n   ,   S y s T i c k   t i m e r   i s   t h e   s o u r c e   o f   t i m e   b a s e .  
     *               I t   i s   u s e d   t o   g e n e r a t e   i n t e r r u p t s   a t   r e g u l a r   t i m e   i n t e r v a l s   w h e r e   u w T i c k  
     *               i s   i n c r e m e n t e d .  
     *   @ n o t e   T h i s   f u n c t i o n   i s   d e c l a r e d   a s   _ _ w e a k   t o   b e   o v e r w r i t t e n   i n   c a s e   o f   o t h e r  
     *               i m p l e m e n t a t i o n s   i n   u s e r   f i l e .  
     *   @ p a r a m   D e l a y   s p e c i f i e s   t h e   d e l a y   t i m e   l e n g t h ,   i n   m i l l i s e c o n d s .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ D e l a y ( u i n t 3 2 _ t   D e l a y )  
 {  
     u i n t 3 2 _ t   t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
     u i n t 3 2 _ t   w a i t   =   D e l a y ;  
  
     / *   A d d   a   f r e q   t o   g u a r a n t e e   m i n i m u m   w a i t   * /  
     i f   ( w a i t   <   H A L _ M A X _ D E L A Y )  
     {  
         w a i t   + =   ( u i n t 3 2 _ t ) ( u w T i c k F r e q ) ;  
     }  
  
     w h i l e   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   <   w a i t )  
     {  
     }  
 }  
  
 / * *  
     *   @ b r i e f   S u s p e n d   T i c k   i n c r e m e n t .  
     *   @ n o t e   I n   t h e   d e f a u l t   i m p l e m e n t a t i o n   ,   S y s T i c k   t i m e r   i s   t h e   s o u r c e   o f   t i m e   b a s e .   I t   i s  
     *               u s e d   t o   g e n e r a t e   i n t e r r u p t s   a t   r e g u l a r   t i m e   i n t e r v a l s .   O n c e   H A L _ S u s p e n d T i c k ( )  
     *               i s   c a l l e d ,   t h e   S y s T i c k   i n t e r r u p t   w i l l   b e   d i s a b l e d   a n d   s o   T i c k   i n c r e m e n t  
     *               i s   s u s p e n d e d .  
     *   @ n o t e   T h i s   f u n c t i o n   i s   d e c l a r e d   a s   _ _ w e a k   t o   b e   o v e r w r i t t e n   i n   c a s e   o f   o t h e r  
     *               i m p l e m e n t a t i o n s   i n   u s e r   f i l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ S u s p e n d T i c k ( v o i d )  
 {  
     / *   D i s a b l e   S y s T i c k   I n t e r r u p t   * /  
     C L E A R _ B I T ( S y s T i c k - > C T R L ,   S y s T i c k _ C T R L _ T I C K I N T _ M s k ) ;  
 }  
  
 / * *  
     *   @ b r i e f   R e s u m e   T i c k   i n c r e m e n t .  
     *   @ n o t e   I n   t h e   d e f a u l t   i m p l e m e n t a t i o n   ,   S y s T i c k   t i m e r   i s   t h e   s o u r c e   o f   t i m e   b a s e .   I t   i s  
     *               u s e d   t o   g e n e r a t e   i n t e r r u p t s   a t   r e g u l a r   t i m e   i n t e r v a l s .   O n c e   H A L _ R e s u m e T i c k ( )  
     *               i s   c a l l e d ,   t h e   S y s T i c k   i n t e r r u p t   w i l l   b e   e n a b l e d   a n d   s o   T i c k   i n c r e m e n t  
     *               i s   r e s u m e d .  
     *   @ n o t e   T h i s   f u n c t i o n   i s   d e c l a r e d   a s   _ _ w e a k   t o   b e   o v e r w r i t t e n   i n   c a s e   o f   o t h e r  
     *               i m p l e m e n t a t i o n s   i n   u s e r   f i l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ R e s u m e T i c k ( v o i d )  
 {  
     / *   E n a b l e   S y s T i c k   I n t e r r u p t   * /  
     S E T _ B I T ( S y s T i c k - > C T R L ,   S y s T i c k _ C T R L _ T I C K I N T _ M s k ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n s   t h e   H A L   r e v i s i o n  
     *   @ r e t v a l   v e r s i o n   0 x X Y Z R   ( 8 b i t s   f o r   e a c h   d e c i m a l ,   R   f o r   R C )  
     * /  
 u i n t 3 2 _ t   H A L _ G e t H a l V e r s i o n ( v o i d )  
 {  
     r e t u r n   _ _ S T M 3 2 F 1 x x _ H A L _ V E R S I O N ;  
 }  
  
 / * *  
     *   @ b r i e f   R e t u r n s   t h e   d e v i c e   r e v i s i o n   i d e n t i f i e r .  
     *   N o t e :   O n   d e v i c e s   S T M 3 2 F 1 0 x x 8   a n d   S T M 3 2 F 1 0 x x B ,  
     *                                     S T M 3 2 F 1 0 1 x C / D / E   a n d   S T M 3 2 F 1 0 3 x C / D / E ,  
     *                                     S T M 3 2 F 1 0 1 x F / G   a n d   S T M 3 2 F 1 0 3 x F / G  
     *                                     S T M 3 2 F 1 0 x x 4   a n d   S T M 3 2 F 1 0 x x 6  
     *               D e b u g   r e g i s t e r s   D B G M C U _ I D C O D E   a n d   D B G M C U _ C R   a r e   a c c e s s i b l e   o n l y   i n  
     *               d e b u g   m o d e   ( n o t   a c c e s s i b l e   b y   t h e   u s e r   s o f t w a r e   i n   n o r m a l   m o d e ) .  
     *               R e f e r   t o   e r r a t a   s h e e t   o f   t h e s e   d e v i c e s   f o r   m o r e   d e t a i l s .  
     *   @ r e t v a l   D e v i c e   r e v i s i o n   i d e n t i f i e r  
     * /  
 u i n t 3 2 _ t   H A L _ G e t R E V I D ( v o i d )  
 {  
     r e t u r n   ( ( D B G M C U - > I D C O D E )   > >   D B G M C U _ I D C O D E _ R E V _ I D _ P o s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n s   t h e   d e v i c e   i d e n t i f i e r .  
     *   N o t e :   O n   d e v i c e s   S T M 3 2 F 1 0 x x 8   a n d   S T M 3 2 F 1 0 x x B ,  
     *                                     S T M 3 2 F 1 0 1 x C / D / E   a n d   S T M 3 2 F 1 0 3 x C / D / E ,  
     *                                     S T M 3 2 F 1 0 1 x F / G   a n d   S T M 3 2 F 1 0 3 x F / G  
     *                                     S T M 3 2 F 1 0 x x 4   a n d   S T M 3 2 F 1 0 x x 6  
     *               D e b u g   r e g i s t e r s   D B G M C U _ I D C O D E   a n d   D B G M C U _ C R   a r e   a c c e s s i b l e   o n l y   i n  
     *               d e b u g   m o d e   ( n o t   a c c e s s i b l e   b y   t h e   u s e r   s o f t w a r e   i n   n o r m a l   m o d e ) .  
     *               R e f e r   t o   e r r a t a   s h e e t   o f   t h e s e   d e v i c e s   f o r   m o r e   d e t a i l s .  
     *   @ r e t v a l   D e v i c e   i d e n t i f i e r  
     * /  
 u i n t 3 2 _ t   H A L _ G e t D E V I D ( v o i d )  
 {  
     r e t u r n   ( ( D B G M C U - > I D C O D E )   &   I D C O D E _ D E V I D _ M A S K ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n s   f i r s t   w o r d   o f   t h e   u n i q u e   d e v i c e   i d e n t i f i e r   ( U I D   b a s e d   o n   9 6   b i t s )  
     *   @ r e t v a l   D e v i c e   i d e n t i f i e r  
     * /  
 u i n t 3 2 _ t   H A L _ G e t U I D w 0 ( v o i d )  
 {  
       r e t u r n ( R E A D _ R E G ( * ( ( u i n t 3 2 _ t   * ) U I D _ B A S E ) ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n s   s e c o n d   w o r d   o f   t h e   u n i q u e   d e v i c e   i d e n t i f i e r   ( U I D   b a s e d   o n   9 6   b i t s )  
     *   @ r e t v a l   D e v i c e   i d e n t i f i e r  
     * /  
 u i n t 3 2 _ t   H A L _ G e t U I D w 1 ( v o i d )  
 {  
       r e t u r n ( R E A D _ R E G ( * ( ( u i n t 3 2 _ t   * ) ( U I D _ B A S E   +   4 U ) ) ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n s   t h i r d   w o r d   o f   t h e   u n i q u e   d e v i c e   i d e n t i f i e r   ( U I D   b a s e d   o n   9 6   b i t s )  
     *   @ r e t v a l   D e v i c e   i d e n t i f i e r  
     * /  
 u i n t 3 2 _ t   H A L _ G e t U I D w 2 ( v o i d )  
 {  
       r e t u r n ( R E A D _ R E G ( * ( ( u i n t 3 2 _ t   * ) ( U I D _ B A S E   +   8 U ) ) ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   D e b u g   M o d u l e   d u r i n g   S L E E P   m o d e  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ D B G M C U _ E n a b l e D B G S l e e p M o d e ( v o i d )  
 {  
     S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ S L E E P ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   t h e   D e b u g   M o d u l e   d u r i n g   S L E E P   m o d e  
     *   N o t e :   O n   d e v i c e s   S T M 3 2 F 1 0 x x 8   a n d   S T M 3 2 F 1 0 x x B ,  
     *                                     S T M 3 2 F 1 0 1 x C / D / E   a n d   S T M 3 2 F 1 0 3 x C / D / E ,  
     *                                     S T M 3 2 F 1 0 1 x F / G   a n d   S T M 3 2 F 1 0 3 x F / G  
     *                                     S T M 3 2 F 1 0 x x 4   a n d   S T M 3 2 F 1 0 x x 6  
     *               D e b u g   r e g i s t e r s   D B G M C U _ I D C O D E   a n d   D B G M C U _ C R   a r e   a c c e s s i b l e   o n l y   i n  
     *               d e b u g   m o d e   ( n o t   a c c e s s i b l e   b y   t h e   u s e r   s o f t w a r e   i n   n o r m a l   m o d e ) .  
     *               R e f e r   t o   e r r a t a   s h e e t   o f   t h e s e   d e v i c e s   f o r   m o r e   d e t a i l s .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ D B G M C U _ D i s a b l e D B G S l e e p M o d e ( v o i d )  
 {  
     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ S L E E P ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   D e b u g   M o d u l e   d u r i n g   S T O P   m o d e  
     *   N o t e :   O n   d e v i c e s   S T M 3 2 F 1 0 x x 8   a n d   S T M 3 2 F 1 0 x x B ,  
     *                                     S T M 3 2 F 1 0 1 x C / D / E   a n d   S T M 3 2 F 1 0 3 x C / D / E ,  
     *                                     S T M 3 2 F 1 0 1 x F / G   a n d   S T M 3 2 F 1 0 3 x F / G  
     *                                     S T M 3 2 F 1 0 x x 4   a n d   S T M 3 2 F 1 0 x x 6  
     *               D e b u g   r e g i s t e r s   D B G M C U _ I D C O D E   a n d   D B G M C U _ C R   a r e   a c c e s s i b l e   o n l y   i n  
     *               d e b u g   m o d e   ( n o t   a c c e s s i b l e   b y   t h e   u s e r   s o f t w a r e   i n   n o r m a l   m o d e ) .  
     *               R e f e r   t o   e r r a t a   s h e e t   o f   t h e s e   d e v i c e s   f o r   m o r e   d e t a i l s .  
     *   N o t e :   O n   a l l   S T M 3 2 F 1   d e v i c e s :  
     *               I f   t h e   s y s t e m   t i c k   t i m e r   i n t e r r u p t   i s   e n a b l e d   d u r i n g   t h e   S t o p   m o d e  
     *               d e b u g   ( D B G _ S T O P   b i t   s e t   i n   t h e   D B G M C U _ C R   r e g i s t e r   ) ,   i t   w i l l   w a k e u p  
     *               t h e   s y s t e m   f r o m   S t o p   m o d e .  
     *               W o r k a r o u n d :   T o   d e b u g   t h e   S t o p   m o d e ,   d i s a b l e   t h e   s y s t e m   t i c k   t i m e r  
     *               i n t e r r u p t .  
     *               R e f e r   t o   e r r a t a   s h e e t   o f   t h e s e   d e v i c e s   f o r   m o r e   d e t a i l s .  
     *   N o t e :   O n   a l l   S T M 3 2 F 1   d e v i c e s :  
     *               I f   t h e   s y s t e m   t i c k   t i m e r   i n t e r r u p t   i s   e n a b l e d   d u r i n g   t h e   S t o p   m o d e  
     *               d e b u g   ( D B G _ S T O P   b i t   s e t   i n   t h e   D B G M C U _ C R   r e g i s t e r   ) ,   i t   w i l l   w a k e u p  
     *               t h e   s y s t e m   f r o m   S t o p   m o d e .  
     *               W o r k a r o u n d :   T o   d e b u g   t h e   S t o p   m o d e ,   d i s a b l e   t h e   s y s t e m   t i c k   t i m e r  
     *               i n t e r r u p t .  
     *               R e f e r   t o   e r r a t a   s h e e t   o f   t h e s e   d e v i c e s   f o r   m o r e   d e t a i l s .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ D B G M C U _ E n a b l e D B G S t o p M o d e ( v o i d )  
 {  
     S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ S T O P ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   t h e   D e b u g   M o d u l e   d u r i n g   S T O P   m o d e  
     *   N o t e :   O n   d e v i c e s   S T M 3 2 F 1 0 x x 8   a n d   S T M 3 2 F 1 0 x x B ,  
     *                                     S T M 3 2 F 1 0 1 x C / D / E   a n d   S T M 3 2 F 1 0 3 x C / D / E ,  
     *                                     S T M 3 2 F 1 0 1 x F / G   a n d   S T M 3 2 F 1 0 3 x F / G  
     *                                     S T M 3 2 F 1 0 x x 4   a n d   S T M 3 2 F 1 0 x x 6  
     *               D e b u g   r e g i s t e r s   D B G M C U _ I D C O D E   a n d   D B G M C U _ C R   a r e   a c c e s s i b l e   o n l y   i n  
     *               d e b u g   m o d e   ( n o t   a c c e s s i b l e   b y   t h e   u s e r   s o f t w a r e   i n   n o r m a l   m o d e ) .  
     *               R e f e r   t o   e r r a t a   s h e e t   o f   t h e s e   d e v i c e s   f o r   m o r e   d e t a i l s .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ D B G M C U _ D i s a b l e D B G S t o p M o d e ( v o i d )  
 {  
     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ S T O P ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   D e b u g   M o d u l e   d u r i n g   S T A N D B Y   m o d e  
     *   N o t e :   O n   d e v i c e s   S T M 3 2 F 1 0 x x 8   a n d   S T M 3 2 F 1 0 x x B ,  
     *                                     S T M 3 2 F 1 0 1 x C / D / E   a n d   S T M 3 2 F 1 0 3 x C / D / E ,  
     *                                     S T M 3 2 F 1 0 1 x F / G   a n d   S T M 3 2 F 1 0 3 x F / G  
     *                                     S T M 3 2 F 1 0 x x 4   a n d   S T M 3 2 F 1 0 x x 6  
     *               D e b u g   r e g i s t e r s   D B G M C U _ I D C O D E   a n d   D B G M C U _ C R   a r e   a c c e s s i b l e   o n l y   i n  
     *               d e b u g   m o d e   ( n o t   a c c e s s i b l e   b y   t h e   u s e r   s o f t w a r e   i n   n o r m a l   m o d e ) .  
     *               R e f e r   t o   e r r a t a   s h e e t   o f   t h e s e   d e v i c e s   f o r   m o r e   d e t a i l s .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ D B G M C U _ E n a b l e D B G S t a n d b y M o d e ( v o i d )  
 {  
     S E T _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ S T A N D B Y ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   t h e   D e b u g   M o d u l e   d u r i n g   S T A N D B Y   m o d e  
     *   N o t e :   O n   d e v i c e s   S T M 3 2 F 1 0 x x 8   a n d   S T M 3 2 F 1 0 x x B ,  
     *                                     S T M 3 2 F 1 0 1 x C / D / E   a n d   S T M 3 2 F 1 0 3 x C / D / E ,  
     *                                     S T M 3 2 F 1 0 1 x F / G   a n d   S T M 3 2 F 1 0 3 x F / G  
     *                                     S T M 3 2 F 1 0 x x 4   a n d   S T M 3 2 F 1 0 x x 6  
     *               D e b u g   r e g i s t e r s   D B G M C U _ I D C O D E   a n d   D B G M C U _ C R   a r e   a c c e s s i b l e   o n l y   i n  
     *               d e b u g   m o d e   ( n o t   a c c e s s i b l e   b y   t h e   u s e r   s o f t w a r e   i n   n o r m a l   m o d e ) .  
     *               R e f e r   t o   e r r a t a   s h e e t   o f   t h e s e   d e v i c e s   f o r   m o r e   d e t a i l s .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ D B G M C U _ D i s a b l e D B G S t a n d b y M o d e ( v o i d )  
 {  
     C L E A R _ B I T ( D B G M C U - > C R ,   D B G M C U _ C R _ D B G _ S T A N D B Y ) ;  
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
 # e n d i f   / *   H A L _ M O D U L E _ E N A B L E D   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  