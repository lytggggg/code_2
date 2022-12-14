??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ a d c . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   c o n t a i n i n g   f u n c t i o n s   p r o t o t y p e s   o f   A D C   H A L   l i b r a r y .  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
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
 / *   D e f i n e   t o   p r e v e n t   r e c u r s i v e   i n c l u s i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ H A L _ A D C _ H  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ H A L _ A D C _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
   e x t e r n   " C "   {  
 # e n d i f  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ d e f . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   A D C  
     *   @ {  
     * /    
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /    
 / * *   @ d e f g r o u p   A D C _ E x p o r t e d _ T y p e s   A D C   E x p o r t e d   T y p e s  
     *   @ {  
     * /  
  
 / * *    
     *   @ b r i e f     S t r u c t u r e   d e f i n i t i o n   o f   A D C   a n d   r e g u l a r   g r o u p   i n i t i a l i z a t i o n    
     *   @ n o t e       P a r a m e t e r s   o f   t h i s   s t r u c t u r e   a r e   s h a r e d   w i t h i n   2   s c o p e s :  
     *                     -   S c o p e   e n t i r e   A D C   ( a f f e c t s   r e g u l a r   a n d   i n j e c t e d   g r o u p s ) :   D a t a A l i g n ,   S c a n C o n v M o d e .  
     *                     -   S c o p e   r e g u l a r   g r o u p :   C o n t i n u o u s C o n v M o d e ,   N b r O f C o n v e r s i o n ,   D i s c o n t i n u o u s C o n v M o d e ,   N b r O f D i s c C o n v e r s i o n ,   E x t e r n a l T r i g C o n v E d g e ,   E x t e r n a l T r i g C o n v .  
     *   @ n o t e       T h e   s e t t i n g   o f   t h e s e   p a r a m e t e r s   w i t h   f u n c t i o n   H A L _ A D C _ I n i t ( )   i s   c o n d i t i o n e d   t o   A D C   s t a t e .  
     *                   A D C   c a n   b e   e i t h e r   d i s a b l e d   o r   e n a b l e d   w i t h o u t   c o n v e r s i o n   o n   g o i n g   o n   r e g u l a r   g r o u p .  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   D a t a A l i g n ;                                                 / * ! <   S p e c i f i e s   A D C   d a t a   a l i g n m e n t   t o   r i g h t   ( M S B   o n   r e g i s t e r   b i t   1 1   a n d   L S B   o n   r e g i s t e r   b i t   0 )   ( d e f a u l t   s e t t i n g )  
                                                                                                     o r   t o   l e f t   ( i f   r e g u l a r   g r o u p :   M S B   o n   r e g i s t e r   b i t   1 5   a n d   L S B   o n   r e g i s t e r   b i t   4 ,   i f   i n j e c t e d   g r o u p   ( M S B   k e p t   a s   s i g n e d   v a l u e   d u e   t o   p o t e n t i a l   n e g a t i v e   v a l u e   a f t e r   o f f s e t   a p p l i c a t i o n ) :   M S B   o n   r e g i s t e r   b i t   1 4   a n d   L S B   o n   r e g i s t e r   b i t   3 ) .  
                                                                                                     T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ D a t a _ a l i g n   * /  
     u i n t 3 2 _ t   S c a n C o n v M o d e ;                                           / * ! <   C o n f i g u r e s   t h e   s e q u e n c e r   o f   r e g u l a r   a n d   i n j e c t e d   g r o u p s .  
                                                                                                     T h i s   p a r a m e t e r   c a n   b e   a s s o c i a t e d   t o   p a r a m e t e r   ' D i s c o n t i n u o u s C o n v M o d e '   t o   h a v e   m a i n   s e q u e n c e   s u b d i v i d e d   i n   s u c c e s s i v e   p a r t s .  
                                                                                                     I f   d i s a b l e d :   C o n v e r s i o n   i s   p e r f o r m e d   i n   s i n g l e   m o d e   ( o n e   c h a n n e l   c o n v e r t e d ,   t h e   o n e   d e f i n e d   i n   r a n k   1 ) .  
                                                                                                                               P a r a m e t e r s   ' N b r O f C o n v e r s i o n '   a n d   ' I n j e c t e d N b r O f C o n v e r s i o n '   a r e   d i s c a r d e d   ( e q u i v a l e n t   t o   s e t   t o   1 ) .  
                                                                                                     I f   e n a b l e d :     C o n v e r s i o n s   a r e   p e r f o r m e d   i n   s e q u e n c e   m o d e   ( m u l t i p l e   r a n k s   d e f i n e d   b y   ' N b r O f C o n v e r s i o n ' / ' I n j e c t e d N b r O f C o n v e r s i o n '   a n d   e a c h   c h a n n e l   r a n k ) .  
                                                                                                                               S c a n   d i r e c t i o n   i s   u p w a r d :   f r o m   r a n k 1   t o   r a n k   ' n ' .  
                                                                                                     T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ S c a n _ m o d e  
                                                                                                     N o t e :   F o r   r e g u l a r   g r o u p ,   t h i s   p a r a m e t e r   s h o u l d   b e   e n a b l e d   i n   c o n v e r s i o n   e i t h e r   b y   p o l l i n g   ( H A L _ A D C _ S t a r t   w i t h   D i s c o n t i n u o u s   m o d e   a n d   N b r O f D i s c C o n v e r s i o n = 1 )  
                                                                                                                 o r   b y   D M A   ( H A L _ A D C _ S t a r t _ D M A ) ,   b u t   n o t   b y   i n t e r r u p t i o n   ( H A L _ A D C _ S t a r t _ I T ) :   i n   s c a n   m o d e ,   i n t e r r u p t i o n   i s   t r i g g e r e d   o n l y   o n   t h e  
                                                                                                                 t h e   l a s t   c o n v e r s i o n   o f   t h e   s e q u e n c e .   A l l   p r e v i o u s   c o n v e r s i o n s   w o u l d   b e   o v e r w r i t t e n   b y   t h e   l a s t   o n e .  
                                                                                                                 I n j e c t e d   g r o u p   u s e d   w i t h   s c a n   m o d e   h a s   n o t   t h i s   c o n s t r a i n t :   e a c h   r a n k   h a s   i t s   o w n   r e s u l t   r e g i s t e r ,   n o   d a t a   i s   o v e r w r i t t e n .   * /  
     F u n c t i o n a l S t a t e   C o n t i n u o u s C o n v M o d e ;                   / * ! <   S p e c i f i e s   w h e t h e r   t h e   c o n v e r s i o n   i s   p e r f o r m e d   i n   s i n g l e   m o d e   ( o n e   c o n v e r s i o n )   o r   c o n t i n u o u s   m o d e   f o r   r e g u l a r   g r o u p ,  
                                                                                                     a f t e r   t h e   s e l e c t e d   t r i g g e r   o c c u r r e d   ( s o f t w a r e   s t a r t   o r   e x t e r n a l   t r i g g e r ) .  
                                                                                                     T h i s   p a r a m e t e r   c a n   b e   s e t   t o   E N A B L E   o r   D I S A B L E .   * /  
     u i n t 3 2 _ t   N b r O f C o n v e r s i o n ;                                     / * ! <   S p e c i f i e s   t h e   n u m b e r   o f   r a n k s   t h a t   w i l l   b e   c o n v e r t e d   w i t h i n   t h e   r e g u l a r   g r o u p   s e q u e n c e r .  
                                                                                                     T o   u s e   r e g u l a r   g r o u p   s e q u e n c e r   a n d   c o n v e r t   s e v e r a l   r a n k s ,   p a r a m e t e r   ' S c a n C o n v M o d e '   m u s t   b e   e n a b l e d .  
                                                                                                     T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   1   a n d   M a x _ D a t a   =   1 6 .   * /  
     F u n c t i o n a l S t a t e     D i s c o n t i n u o u s C o n v M o d e ;         / * ! <   S p e c i f i e s   w h e t h e r   t h e   c o n v e r s i o n s   s e q u e n c e   o f   r e g u l a r   g r o u p   i s   p e r f o r m e d   i n   C o m p l e t e - s e q u e n c e / D i s c o n t i n u o u s - s e q u e n c e   ( m a i n   s e q u e n c e   s u b d i v i d e d   i n   s u c c e s s i v e   p a r t s ) .  
                                                                                                     D i s c o n t i n u o u s   m o d e   i s   u s e d   o n l y   i f   s e q u e n c e r   i s   e n a b l e d   ( p a r a m e t e r   ' S c a n C o n v M o d e ' ) .   I f   s e q u e n c e r   i s   d i s a b l e d ,   t h i s   p a r a m e t e r   i s   d i s c a r d e d .  
                                                                                                     D i s c o n t i n u o u s   m o d e   c a n   b e   e n a b l e d   o n l y   i f   c o n t i n u o u s   m o d e   i s   d i s a b l e d .   I f   c o n t i n u o u s   m o d e   i s   e n a b l e d ,   t h i s   p a r a m e t e r   s e t t i n g   i s   d i s c a r d e d .  
                                                                                                     T h i s   p a r a m e t e r   c a n   b e   s e t   t o   E N A B L E   o r   D I S A B L E .   * /  
     u i n t 3 2 _ t   N b r O f D i s c C o n v e r s i o n ;                             / * ! <   S p e c i f i e s   t h e   n u m b e r   o f   d i s c o n t i n u o u s   c o n v e r s i o n s   i n   w h i c h   t h e     m a i n   s e q u e n c e   o f   r e g u l a r   g r o u p   ( p a r a m e t e r   N b r O f C o n v e r s i o n )   w i l l   b e   s u b d i v i d e d .  
                                                                                                     I f   p a r a m e t e r   ' D i s c o n t i n u o u s C o n v M o d e '   i s   d i s a b l e d ,   t h i s   p a r a m e t e r   i s   d i s c a r d e d .  
                                                                                                     T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   1   a n d   M a x _ D a t a   =   8 .   * /  
     u i n t 3 2 _ t   E x t e r n a l T r i g C o n v ;                                   / * ! <   S e l e c t s   t h e   e x t e r n a l   e v e n t   u s e d   t o   t r i g g e r   t h e   c o n v e r s i o n   s t a r t   o f   r e g u l a r   g r o u p .  
                                                                                                     I f   s e t   t o   A D C _ S O F T W A R E _ S T A R T ,   e x t e r n a l   t r i g g e r s   a r e   d i s a b l e d .  
                                                                                                     I f   s e t   t o   e x t e r n a l   t r i g g e r   s o u r c e ,   t r i g g e r i n g   i s   o n   e v e n t   r i s i n g   e d g e .  
                                                                                                     T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ E x t e r n a l _ t r i g g e r _ s o u r c e _ R e g u l a r   * /  
 } A D C _ I n i t T y p e D e f ;  
  
 / * *    
     *   @ b r i e f     S t r u c t u r e   d e f i n i t i o n   o f   A D C   c h a n n e l   f o r   r e g u l a r   g r o u p        
     *   @ n o t e       T h e   s e t t i n g   o f   t h e s e   p a r a m e t e r s   w i t h   f u n c t i o n   H A L _ A D C _ C o n f i g C h a n n e l ( )   i s   c o n d i t i o n e d   t o   A D C   s t a t e .  
     *                   A D C   c a n   b e   e i t h e r   d i s a b l e d   o r   e n a b l e d   w i t h o u t   c o n v e r s i o n   o n   g o i n g   o n   r e g u l a r   g r o u p .  
     * /    
 t y p e d e f   s t r u c t    
 {  
     u i n t 3 2 _ t   C h a n n e l ;                                 / * ! <   S p e c i f i e s   t h e   c h a n n e l   t o   c o n f i g u r e   i n t o   A D C   r e g u l a r   g r o u p .  
                                                                                 T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ c h a n n e l s  
                                                                                 N o t e :   D e p e n d i n g   o n   d e v i c e s ,   s o m e   c h a n n e l s   m a y   n o t   b e   a v a i l a b l e   o n   p a c k a g e   p i n s .   R e f e r   t o   d e v i c e   d a t a s h e e t   f o r   c h a n n e l s   a v a i l a b i l i t y .  
                                                                                 N o t e :   O n   S T M 3 2 F 1   d e v i c e s   w i t h   s e v e r a l   A D C :   O n l y   A D C 1   c a n   a c c e s s   i n t e r n a l   m e a s u r e m e n t   c h a n n e l s   ( V r e f I n t / T e m p S e n s o r )    
                                                                                 N o t e :   O n   S T M 3 2 F 1 0 x x 8   a n d   S T M 3 2 F 1 0 x x B   d e v i c e s :   A   l o w - a m p l i t u d e   v o l t a g e   g l i t c h   m a y   b e   g e n e r a t e d   ( o n   A D C   i n p u t   0 )   o n   t h e   P A 0   p i n ,   w h e n   t h e   A D C   i s   c o n v e r t i n g   w i t h   i n j e c t i o n   t r i g g e r .  
                                                                                             I t   i s   a d v i s e d   t o   d i s t r i b u t e   t h e   a n a l o g   c h a n n e l s   s o   t h a t   C h a n n e l   0   i s   c o n f i g u r e d   a s   a n   i n j e c t e d   c h a n n e l .  
                                                                                             R e f e r   t o   e r r a t a   s h e e t   o f   t h e s e   d e v i c e s   f o r   m o r e   d e t a i l s .   * /  
     u i n t 3 2 _ t   R a n k ;                                       / * ! <   S p e c i f i e s   t h e   r a n k   i n   t h e   r e g u l a r   g r o u p   s e q u e n c e r    
                                                                                 T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ r e g u l a r _ r a n k  
                                                                                 N o t e :   I n   c a s e   o f   n e e d   t o   d i s a b l e   a   c h a n n e l   o r   c h a n g e   o r d e r   o f   c o n v e r s i o n   s e q u e n c e r ,   r a n k   c o n t a i n i n g   a   p r e v i o u s   c h a n n e l   s e t t i n g   c a n   b e   o v e r w r i t t e n   b y   t h e   n e w   c h a n n e l   s e t t i n g   ( o r   p a r a m e t e r   n u m b e r   o f   c o n v e r s i o n s   c a n   b e   a d j u s t e d )   * /  
     u i n t 3 2 _ t   S a m p l i n g T i m e ;                       / * ! <   S a m p l i n g   t i m e   v a l u e   t o   b e   s e t   f o r   t h e   s e l e c t e d   c h a n n e l .  
                                                                                 U n i t :   A D C   c l o c k   c y c l e s  
                                                                                 C o n v e r s i o n   t i m e   i s   t h e   a d d i t i o n   o f   s a m p l i n g   t i m e   a n d   p r o c e s s i n g   t i m e   ( 1 2 . 5   A D C   c l o c k   c y c l e s   a t   A D C   r e s o l u t i o n   1 2   b i t s ) .  
                                                                                 T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ s a m p l i n g _ t i m e s  
                                                                                 C a u t i o n :   T h i s   p a r a m e t e r   u p d a t e s   t h e   p a r a m e t e r   p r o p e r t y   o f   t h e   c h a n n e l ,   t h a t   c a n   b e   u s e d   i n t o   r e g u l a r   a n d / o r   i n j e c t e d   g r o u p s .  
                                                                                                   I f   t h i s   s a m e   c h a n n e l   h a s   b e e n   p r e v i o u s l y   c o n f i g u r e d   i n   t h e   o t h e r   g r o u p   ( r e g u l a r / i n j e c t e d ) ,   i t   w i l l   b e   u p d a t e d   t o   l a s t   s e t t i n g .  
                                                                                 N o t e :   I n   c a s e   o f   u s a g e   o f   i n t e r n a l   m e a s u r e m e n t   c h a n n e l s   ( V r e f I n t / T e m p S e n s o r ) ,  
                                                                                             s a m p l i n g   t i m e   c o n s t r a i n t s   m u s t   b e   r e s p e c t e d   ( s a m p l i n g   t i m e   c a n   b e   a d j u s t e d   i n   f u n c t i o n   o f   A D C   c l o c k   f r e q u e n c y   a n d   s a m p l i n g   t i m e   s e t t i n g )  
                                                                                             R e f e r   t o   d e v i c e   d a t a s h e e t   f o r   t i m i n g s   v a l u e s ,   p a r a m e t e r s   T S _ v r e f i n t ,   T S _ t e m p   ( v a l u e s   r o u g h   o r d e r :   5 u s   t o   1 7 . 1 u s   m i n ) .   * /  
 } A D C _ C h a n n e l C o n f T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     A D C   C o n f i g u r a t i o n   a n a l o g   w a t c h d o g   d e f i n i t i o n  
     *   @ n o t e       T h e   s e t t i n g   o f   t h e s e   p a r a m e t e r s   w i t h   f u n c t i o n   i s   c o n d i t i o n e d   t o   A D C   s t a t e .  
     *                   A D C   s t a t e   c a n   b e   e i t h e r   d i s a b l e d   o r   e n a b l e d   w i t h o u t   c o n v e r s i o n   o n   g o i n g   o n   r e g u l a r   a n d   i n j e c t e d   g r o u p s .  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   W a t c h d o g M o d e ;             / * ! <   C o n f i g u r e s   t h e   A D C   a n a l o g   w a t c h d o g   m o d e :   s i n g l e / a l l   c h a n n e l s ,   r e g u l a r / i n j e c t e d   g r o u p .  
                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ a n a l o g _ w a t c h d o g _ m o d e .   * /  
     u i n t 3 2 _ t   C h a n n e l ;                       / * ! <   S e l e c t s   w h i c h   A D C   c h a n n e l   t o   m o n i t o r   b y   a n a l o g   w a t c h d o g .  
                                                                       T h i s   p a r a m e t e r   h a s   a n   e f f e c t   o n l y   i f   w a t c h d o g   m o d e   i s   c o n f i g u r e d   o n   s i n g l e   c h a n n e l   ( p a r a m e t e r   W a t c h d o g M o d e )  
                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ c h a n n e l s .   * /  
     F u n c t i o n a l S t a t e     I T M o d e ;         / * ! <   S p e c i f i e s   w h e t h e r   t h e   a n a l o g   w a t c h d o g   i s   c o n f i g u r e d   i n   i n t e r r u p t   o r   p o l l i n g   m o d e .  
                                                                       T h i s   p a r a m e t e r   c a n   b e   s e t   t o   E N A B L E   o r   D I S A B L E   * /  
     u i n t 3 2 _ t   H i g h T h r e s h o l d ;           / * ! <   C o n f i g u r e s   t h e   A D C   a n a l o g   w a t c h d o g   H i g h   t h r e s h o l d   v a l u e .  
                                                                       T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0 0   a n d   M a x _ D a t a   =   0 x F F F .   * /  
     u i n t 3 2 _ t   L o w T h r e s h o l d ;             / * ! <   C o n f i g u r e s   t h e   A D C   a n a l o g   w a t c h d o g   H i g h   t h r e s h o l d   v a l u e .  
                                                                       T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0 0   a n d   M a x _ D a t a   =   0 x F F F .   * /  
     u i n t 3 2 _ t   W a t c h d o g N u m b e r ;         / * ! <   R e s e r v e d   f o r   f u t u r e   u s e ,   c a n   b e   s e t   t o   0   * /  
 } A D C _ A n a l o g W D G C o n f T y p e D e f ;  
  
 / * *    
     *   @ b r i e f     H A L   A D C   s t a t e   m a c h i n e :   A D C   s t a t e s   d e f i n i t i o n   ( b i t f i e l d s )  
     * /    
 / *   S t a t e s   o f   A D C   g l o b a l   s c o p e   * /  
 # d e f i n e   H A L _ A D C _ S T A T E _ R E S E T                           0 x 0 0 0 0 0 0 0 0 U         / * ! <   A D C   n o t   y e t   i n i t i a l i z e d   o r   d i s a b l e d   * /  
 # d e f i n e   H A L _ A D C _ S T A T E _ R E A D Y                           0 x 0 0 0 0 0 0 0 1 U         / * ! <   A D C   p e r i p h e r a l   r e a d y   f o r   u s e   * /  
 # d e f i n e   H A L _ A D C _ S T A T E _ B U S Y _ I N T E R N A L           0 x 0 0 0 0 0 0 0 2 U         / * ! <   A D C   i s   b u s y   t o   i n t e r n a l   p r o c e s s   ( i n i t i a l i z a t i o n ,   c a l i b r a t i o n )   * /  
 # d e f i n e   H A L _ A D C _ S T A T E _ T I M E O U T                       0 x 0 0 0 0 0 0 0 4 U         / * ! <   T i m e O u t   o c c u r r e n c e   * /  
  
 / *   S t a t e s   o f   A D C   e r r o r s   * /  
 # d e f i n e   H A L _ A D C _ S T A T E _ E R R O R _ I N T E R N A L         0 x 0 0 0 0 0 0 1 0 U         / * ! <   I n t e r n a l   e r r o r   o c c u r r e n c e   * /  
 # d e f i n e   H A L _ A D C _ S T A T E _ E R R O R _ C O N F I G             0 x 0 0 0 0 0 0 2 0 U         / * ! <   C o n f i g u r a t i o n   e r r o r   o c c u r r e n c e   * /  
 # d e f i n e   H A L _ A D C _ S T A T E _ E R R O R _ D M A                   0 x 0 0 0 0 0 0 4 0 U         / * ! <   D M A   e r r o r   o c c u r r e n c e   * /  
  
 / *   S t a t e s   o f   A D C   g r o u p   r e g u l a r   * /  
 # d e f i n e   H A L _ A D C _ S T A T E _ R E G _ B U S Y                     0 x 0 0 0 0 0 1 0 0 U         / * ! <   A   c o n v e r s i o n   o n   g r o u p   r e g u l a r   i s   o n g o i n g   o r   c a n   o c c u r   ( e i t h e r   b y   c o n t i n u o u s   m o d e ,  
                                                                                                                       e x t e r n a l   t r i g g e r ,   l o w   p o w e r   a u t o   p o w e r - o n ,   m u l t i m o d e   A D C   m a s t e r   c o n t r o l )   * /  
 # d e f i n e   H A L _ A D C _ S T A T E _ R E G _ E O C                       0 x 0 0 0 0 0 2 0 0 U         / * ! <   C o n v e r s i o n   d a t a   a v a i l a b l e   o n   g r o u p   r e g u l a r   * /  
 # d e f i n e   H A L _ A D C _ S T A T E _ R E G _ O V R                       0 x 0 0 0 0 0 4 0 0 U         / * ! <   N o t   a v a i l a b l e   o n   S T M 3 2 F 1   d e v i c e :   O v e r r u n   o c c u r r e n c e   * /  
 # d e f i n e   H A L _ A D C _ S T A T E _ R E G _ E O S M P                   0 x 0 0 0 0 0 8 0 0 U         / * ! <   N o t   a v a i l a b l e   o n   S T M 3 2 F 1   d e v i c e :   E n d   O f   S a m p l i n g   f l a g   r a i s e d     * /  
  
 / *   S t a t e s   o f   A D C   g r o u p   i n j e c t e d   * /  
 # d e f i n e   H A L _ A D C _ S T A T E _ I N J _ B U S Y                     0 x 0 0 0 0 1 0 0 0 U         / * ! <   A   c o n v e r s i o n   o n   g r o u p   i n j e c t e d   i s   o n g o i n g   o r   c a n   o c c u r   ( e i t h e r   b y   a u t o - i n j e c t i o n   m o d e ,  
                                                                                                                       e x t e r n a l   t r i g g e r ,   l o w   p o w e r   a u t o   p o w e r - o n ,   m u l t i m o d e   A D C   m a s t e r   c o n t r o l )   * /  
 # d e f i n e   H A L _ A D C _ S T A T E _ I N J _ E O C                       0 x 0 0 0 0 2 0 0 0 U         / * ! <   C o n v e r s i o n   d a t a   a v a i l a b l e   o n   g r o u p   i n j e c t e d   * /  
 # d e f i n e   H A L _ A D C _ S T A T E _ I N J _ J Q O V F                   0 x 0 0 0 0 4 0 0 0 U         / * ! <   N o t   a v a i l a b l e   o n   S T M 3 2 F 1   d e v i c e :   I n j e c t e d   q u e u e   o v e r f l o w   o c c u r r e n c e   * /  
  
 / *   S t a t e s   o f   A D C   a n a l o g   w a t c h d o g s   * /  
 # d e f i n e   H A L _ A D C _ S T A T E _ A W D 1                             0 x 0 0 0 1 0 0 0 0 U         / * ! <   O u t - o f - w i n d o w   o c c u r r e n c e   o f   a n a l o g   w a t c h d o g   1   * /  
 # d e f i n e   H A L _ A D C _ S T A T E _ A W D 2                             0 x 0 0 0 2 0 0 0 0 U         / * ! <   N o t   a v a i l a b l e   o n   S T M 3 2 F 1   d e v i c e :   O u t - o f - w i n d o w   o c c u r r e n c e   o f   a n a l o g   w a t c h d o g   2   * /  
 # d e f i n e   H A L _ A D C _ S T A T E _ A W D 3                             0 x 0 0 0 4 0 0 0 0 U         / * ! <   N o t   a v a i l a b l e   o n   S T M 3 2 F 1   d e v i c e :   O u t - o f - w i n d o w   o c c u r r e n c e   o f   a n a l o g   w a t c h d o g   3   * /  
  
 / *   S t a t e s   o f   A D C   m u l t i - m o d e   * /  
 # d e f i n e   H A L _ A D C _ S T A T E _ M U L T I M O D E _ S L A V E       0 x 0 0 1 0 0 0 0 0 U         / * ! <   A D C   i n   m u l t i m o d e   s l a v e   s t a t e ,   c o n t r o l l e d   b y   a n o t h e r   A D C   m a s t e r   (   * /  
  
  
 / * *  
     *   @ b r i e f     A D C   h a n d l e   S t r u c t u r e   d e f i n i t i o n      
     * /    
 t y p e d e f   s t r u c t   _ _ A D C _ H a n d l e T y p e D e f  
 {  
     A D C _ T y p e D e f                                       * I n s t a n c e ;                             / * ! <   R e g i s t e r   b a s e   a d d r e s s   * /  
  
     A D C _ I n i t T y p e D e f                               I n i t ;                                       / * ! <   A D C   r e q u i r e d   p a r a m e t e r s   * /  
  
     D M A _ H a n d l e T y p e D e f                           * D M A _ H a n d l e ;                         / * ! <   P o i n t e r   D M A   H a n d l e r   * /  
  
     H A L _ L o c k T y p e D e f                               L o c k ;                                       / * ! <   A D C   l o c k i n g   o b j e c t   * /  
      
     _ _ I O   u i n t 3 2 _ t                                   S t a t e ;                                     / * ! <   A D C   c o m m u n i c a t i o n   s t a t e   ( b i t m a p   o f   A D C   s t a t e s )   * /  
  
     _ _ I O   u i n t 3 2 _ t                                   E r r o r C o d e ;                             / * ! <   A D C   E r r o r   c o d e   * /  
  
 # i f   ( U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     v o i d   ( *   C o n v C p l t C a l l b a c k ) ( s t r u c t   _ _ A D C _ H a n d l e T y p e D e f   * h a d c ) ;                             / * ! <   A D C   c o n v e r s i o n   c o m p l e t e   c a l l b a c k   * /  
     v o i d   ( *   C o n v H a l f C p l t C a l l b a c k ) ( s t r u c t   _ _ A D C _ H a n d l e T y p e D e f   * h a d c ) ;                     / * ! <   A D C   c o n v e r s i o n   D M A   h a l f - t r a n s f e r   c a l l b a c k   * /  
     v o i d   ( *   L e v e l O u t O f W i n d o w C a l l b a c k ) ( s t r u c t   _ _ A D C _ H a n d l e T y p e D e f   * h a d c ) ;             / * ! <   A D C   a n a l o g   w a t c h d o g   1   c a l l b a c k   * /  
     v o i d   ( *   E r r o r C a l l b a c k ) ( s t r u c t   _ _ A D C _ H a n d l e T y p e D e f   * h a d c ) ;                                   / * ! <   A D C   e r r o r   c a l l b a c k   * /  
     v o i d   ( *   I n j e c t e d C o n v C p l t C a l l b a c k ) ( s t r u c t   _ _ A D C _ H a n d l e T y p e D e f   * h a d c ) ;             / * ! <   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   c o m p l e t e   c a l l b a c k   * /               / * ! <   A D C   e n d   o f   s a m p l i n g   c a l l b a c k   * /  
     v o i d   ( *   M s p I n i t C a l l b a c k ) ( s t r u c t   _ _ A D C _ H a n d l e T y p e D e f   * h a d c ) ;                               / * ! <   A D C   M s p   I n i t   c a l l b a c k   * /  
     v o i d   ( *   M s p D e I n i t C a l l b a c k ) ( s t r u c t   _ _ A D C _ H a n d l e T y p e D e f   * h a d c ) ;                           / * ! <   A D C   M s p   D e I n i t   c a l l b a c k   * /  
 # e n d i f   / *   U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   * /  
 } A D C _ H a n d l e T y p e D e f ;  
  
  
 # i f   ( U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     H A L   A D C   C a l l b a c k   I D   e n u m e r a t i o n   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ A D C _ C O N V E R S I O N _ C O M P L E T E _ C B _ I D           =   0 x 0 0 U ,     / * ! <   A D C   c o n v e r s i o n   c o m p l e t e   c a l l b a c k   I D   * /  
     H A L _ A D C _ C O N V E R S I O N _ H A L F _ C B _ I D                   =   0 x 0 1 U ,     / * ! <   A D C   c o n v e r s i o n   D M A   h a l f - t r a n s f e r   c a l l b a c k   I D   * /  
     H A L _ A D C _ L E V E L _ O U T _ O F _ W I N D O W _ 1 _ C B _ I D       =   0 x 0 2 U ,     / * ! <   A D C   a n a l o g   w a t c h d o g   1   c a l l b a c k   I D   * /  
     H A L _ A D C _ E R R O R _ C B _ I D                                       =   0 x 0 3 U ,     / * ! <   A D C   e r r o r   c a l l b a c k   I D   * /  
     H A L _ A D C _ I N J _ C O N V E R S I O N _ C O M P L E T E _ C B _ I D   =   0 x 0 4 U ,     / * ! <   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   c o m p l e t e   c a l l b a c k   I D   * /  
     H A L _ A D C _ M S P I N I T _ C B _ I D                                   =   0 x 0 9 U ,     / * ! <   A D C   M s p   I n i t   c a l l b a c k   I D                     * /  
     H A L _ A D C _ M S P D E I N I T _ C B _ I D                               =   0 x 0 A U       / * ! <   A D C   M s p   D e I n i t   c a l l b a c k   I D                 * /  
 }   H A L _ A D C _ C a l l b a c k I D T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     H A L   A D C   C a l l b a c k   p o i n t e r   d e f i n i t i o n  
     * /  
 t y p e d e f     v o i d   ( * p A D C _ C a l l b a c k T y p e D e f ) ( A D C _ H a n d l e T y p e D e f   * h a d c ) ;   / * ! <   p o i n t e r   t o   a   A D C   c a l l b a c k   f u n c t i o n   * /  
  
 # e n d i f   / *   U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   A D C _ E x p o r t e d _ C o n s t a n t s   A D C   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ E r r o r _ C o d e   A D C   E r r o r   C o d e  
     *   @ {  
     * /  
 # d e f i n e   H A L _ A D C _ E R R O R _ N O N E                                 0 x 0 0 U       / * ! <   N o   e r r o r                                                                                             * /  
 # d e f i n e   H A L _ A D C _ E R R O R _ I N T E R N A L                         0 x 0 1 U       / * ! <   A D C   I P   i n t e r n a l   e r r o r :   i f   p r o b l e m   o f   c l o c k i n g ,    
                                                                                                               e n a b l e / d i s a b l e ,   e r r o n e o u s   s t a t e                                               * /  
 # d e f i n e   H A L _ A D C _ E R R O R _ O V R                                   0 x 0 2 U       / * ! <   O v e r r u n   e r r o r                                                                                   * /  
 # d e f i n e   H A L _ A D C _ E R R O R _ D M A                                   0 x 0 4 U       / * ! <   D M A   t r a n s f e r   e r r o r                                                                         * /  
  
 # i f   ( U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 # d e f i n e   H A L _ A D C _ E R R O R _ I N V A L I D _ C A L L B A C K     ( 0 x 1 0 U )       / * ! <   I n v a l i d   C a l l b a c k   e r r o r   * /  
 # e n d i f   / *   U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   * /  
 / * *  
     *   @ }  
     * /  
  
  
 / * *   @ d e f g r o u p   A D C _ D a t a _ a l i g n   A D C   d a t a   a l i g n m e n t  
     *   @ {  
     * /  
 # d e f i n e   A D C _ D A T A A L I G N _ R I G H T             0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   A D C _ D A T A A L I G N _ L E F T               ( ( u i n t 3 2 _ t ) A D C _ C R 2 _ A L I G N )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ S c a n _ m o d e   A D C   s c a n   m o d e  
     *   @ {  
     * /  
 / *   N o t e :   S c a n   m o d e   v a l u e s   a r e   n o t   a m o n g   b i n a r y   c h o i c e s   E N A B L E / D I S A B L E   f o r           * /  
 / *               c o m p a t i b i l i t y   w i t h   o t h e r   S T M 3 2   d e v i c e s   h a v i n g   a   s e q u e n c e r   w i t h               * /  
 / *               a d d i t i o n a l   o p t i o n s .                                                                                                     * /  
 # d e f i n e   A D C _ S C A N _ D I S A B L E                   0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   A D C _ S C A N _ E N A B L E                     ( ( u i n t 3 2 _ t ) A D C _ C R 1 _ S C A N )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ E x t e r n a l _ t r i g g e r _ e d g e _ R e g u l a r   A D C   e x t e r n a l   t r i g g e r   e n a b l e   f o r   r e g u l a r   g r o u p  
     *   @ {  
     * /  
 # d e f i n e   A D C _ E X T E R N A L T R I G C O N V E D G E _ N O N E                       0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   A D C _ E X T E R N A L T R I G C O N V E D G E _ R I S I N G                   ( ( u i n t 3 2 _ t ) A D C _ C R 2 _ E X T T R I G )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ c h a n n e l s   A D C   c h a n n e l s  
     *   @ {  
     * /  
 / *   N o t e :   D e p e n d i n g   o n   d e v i c e s ,   s o m e   c h a n n e l s   m a y   n o t   b e   a v a i l a b l e   o n   p a c k a g e     * /  
 / *               p i n s .   R e f e r   t o   d e v i c e   d a t a s h e e t   f o r   c h a n n e l s   a v a i l a b i l i t y .                       * /  
 # d e f i n e   A D C _ C H A N N E L _ 0                                               0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   A D C _ C H A N N E L _ 1                       ( ( u i n t 3 2 _ t ) (                                                                                                                                         A D C _ S Q R 3 _ S Q 1 _ 0 ) )  
 # d e f i n e   A D C _ C H A N N E L _ 2                       ( ( u i n t 3 2 _ t ) (                                                                                                       A D C _ S Q R 3 _ S Q 1 _ 1                                   ) )  
 # d e f i n e   A D C _ C H A N N E L _ 3                       ( ( u i n t 3 2 _ t ) (                                                                                                       A D C _ S Q R 3 _ S Q 1 _ 1   |   A D C _ S Q R 3 _ S Q 1 _ 0 ) )  
 # d e f i n e   A D C _ C H A N N E L _ 4                       ( ( u i n t 3 2 _ t ) (                                                                     A D C _ S Q R 3 _ S Q 1 _ 2                                                                     ) )  
 # d e f i n e   A D C _ C H A N N E L _ 5                       ( ( u i n t 3 2 _ t ) (                                                                     A D C _ S Q R 3 _ S Q 1 _ 2                                     |   A D C _ S Q R 3 _ S Q 1 _ 0 ) )  
 # d e f i n e   A D C _ C H A N N E L _ 6                       ( ( u i n t 3 2 _ t ) (                                                                     A D C _ S Q R 3 _ S Q 1 _ 2   |   A D C _ S Q R 3 _ S Q 1 _ 1                                   ) )  
 # d e f i n e   A D C _ C H A N N E L _ 7                       ( ( u i n t 3 2 _ t ) (                                                                     A D C _ S Q R 3 _ S Q 1 _ 2   |   A D C _ S Q R 3 _ S Q 1 _ 1   |   A D C _ S Q R 3 _ S Q 1 _ 0 ) )  
 # d e f i n e   A D C _ C H A N N E L _ 8                       ( ( u i n t 3 2 _ t ) (                                   A D C _ S Q R 3 _ S Q 1 _ 3                                                                                                       ) )  
 # d e f i n e   A D C _ C H A N N E L _ 9                       ( ( u i n t 3 2 _ t ) (                                   A D C _ S Q R 3 _ S Q 1 _ 3                                                                       |   A D C _ S Q R 3 _ S Q 1 _ 0 ) )  
 # d e f i n e   A D C _ C H A N N E L _ 1 0                     ( ( u i n t 3 2 _ t ) (                                   A D C _ S Q R 3 _ S Q 1 _ 3                                     |   A D C _ S Q R 3 _ S Q 1 _ 1                                   ) )  
 # d e f i n e   A D C _ C H A N N E L _ 1 1                     ( ( u i n t 3 2 _ t ) (                                   A D C _ S Q R 3 _ S Q 1 _ 3                                     |   A D C _ S Q R 3 _ S Q 1 _ 1   |   A D C _ S Q R 3 _ S Q 1 _ 0 ) )  
 # d e f i n e   A D C _ C H A N N E L _ 1 2                     ( ( u i n t 3 2 _ t ) (                                   A D C _ S Q R 3 _ S Q 1 _ 3   |   A D C _ S Q R 3 _ S Q 1 _ 2                                                                     ) )  
 # d e f i n e   A D C _ C H A N N E L _ 1 3                     ( ( u i n t 3 2 _ t ) (                                   A D C _ S Q R 3 _ S Q 1 _ 3   |   A D C _ S Q R 3 _ S Q 1 _ 2                                     |   A D C _ S Q R 3 _ S Q 1 _ 0 ) )  
 # d e f i n e   A D C _ C H A N N E L _ 1 4                     ( ( u i n t 3 2 _ t ) (                                   A D C _ S Q R 3 _ S Q 1 _ 3   |   A D C _ S Q R 3 _ S Q 1 _ 2   |   A D C _ S Q R 3 _ S Q 1 _ 1                                   ) )  
 # d e f i n e   A D C _ C H A N N E L _ 1 5                     ( ( u i n t 3 2 _ t ) (                                   A D C _ S Q R 3 _ S Q 1 _ 3   |   A D C _ S Q R 3 _ S Q 1 _ 2   |   A D C _ S Q R 3 _ S Q 1 _ 1   |   A D C _ S Q R 3 _ S Q 1 _ 0 ) )  
 # d e f i n e   A D C _ C H A N N E L _ 1 6                     ( ( u i n t 3 2 _ t ) ( A D C _ S Q R 3 _ S Q 1 _ 4                                                                                                                                         ) )  
 # d e f i n e   A D C _ C H A N N E L _ 1 7                     ( ( u i n t 3 2 _ t ) ( A D C _ S Q R 3 _ S Q 1 _ 4                                                                                                         |   A D C _ S Q R 3 _ S Q 1 _ 0 ) )  
  
 # d e f i n e   A D C _ C H A N N E L _ T E M P S E N S O R     A D C _ C H A N N E L _ 1 6     / *   A D C   i n t e r n a l   c h a n n e l   ( n o   c o n n e c t i o n   o n   d e v i c e   p i n )   * /  
 # d e f i n e   A D C _ C H A N N E L _ V R E F I N T           A D C _ C H A N N E L _ 1 7     / *   A D C   i n t e r n a l   c h a n n e l   ( n o   c o n n e c t i o n   o n   d e v i c e   p i n )   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ s a m p l i n g _ t i m e s   A D C   s a m p l i n g   t i m e s  
     *   @ {  
     * /  
 # d e f i n e   A D C _ S A M P L E T I M E _ 1 C Y C L E _ 5                                       0 x 0 0 0 0 0 0 0 0 U                                                                                             / * ! <   S a m p l i n g   t i m e   1 . 5   A D C   c l o c k   c y c l e   * /  
 # d e f i n e   A D C _ S A M P L E T I M E _ 7 C Y C L E S _ 5             ( ( u i n t 3 2 _ t ) (                                                                             A D C _ S M P R 2 _ S M P 0 _ 0 ) )   / * ! <   S a m p l i n g   t i m e   7 . 5   A D C   c l o c k   c y c l e s   * /  
 # d e f i n e   A D C _ S A M P L E T I M E _ 1 3 C Y C L E S _ 5           ( ( u i n t 3 2 _ t ) (                                       A D C _ S M P R 2 _ S M P 0 _ 1                                       ) )   / * ! <   S a m p l i n g   t i m e   1 3 . 5   A D C   c l o c k   c y c l e s   * /  
 # d e f i n e   A D C _ S A M P L E T I M E _ 2 8 C Y C L E S _ 5           ( ( u i n t 3 2 _ t ) (                                       A D C _ S M P R 2 _ S M P 0 _ 1   |   A D C _ S M P R 2 _ S M P 0 _ 0 ) )   / * ! <   S a m p l i n g   t i m e   2 8 . 5   A D C   c l o c k   c y c l e s   * /  
 # d e f i n e   A D C _ S A M P L E T I M E _ 4 1 C Y C L E S _ 5           ( ( u i n t 3 2 _ t ) ( A D C _ S M P R 2 _ S M P 0 _ 2                                                                             ) )   / * ! <   S a m p l i n g   t i m e   4 1 . 5   A D C   c l o c k   c y c l e s   * /  
 # d e f i n e   A D C _ S A M P L E T I M E _ 5 5 C Y C L E S _ 5           ( ( u i n t 3 2 _ t ) ( A D C _ S M P R 2 _ S M P 0 _ 2                                         |   A D C _ S M P R 2 _ S M P 0 _ 0 ) )   / * ! <   S a m p l i n g   t i m e   5 5 . 5   A D C   c l o c k   c y c l e s   * /  
 # d e f i n e   A D C _ S A M P L E T I M E _ 7 1 C Y C L E S _ 5           ( ( u i n t 3 2 _ t ) ( A D C _ S M P R 2 _ S M P 0 _ 2   |   A D C _ S M P R 2 _ S M P 0 _ 1                                       ) )   / * ! <   S a m p l i n g   t i m e   7 1 . 5   A D C   c l o c k   c y c l e s   * /  
 # d e f i n e   A D C _ S A M P L E T I M E _ 2 3 9 C Y C L E S _ 5         ( ( u i n t 3 2 _ t ) ( A D C _ S M P R 2 _ S M P 0 _ 2   |   A D C _ S M P R 2 _ S M P 0 _ 1   |   A D C _ S M P R 2 _ S M P 0 _ 0 ) )   / * ! <   S a m p l i n g   t i m e   2 3 9 . 5   A D C   c l o c k   c y c l e s   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ r e g u l a r _ r a n k   A D C   r a n k   i n t o   r e g u l a r   g r o u p  
     *   @ {  
     * /  
 # d e f i n e   A D C _ R E G U L A R _ R A N K _ 1                                   0 x 0 0 0 0 0 0 0 1 U  
 # d e f i n e   A D C _ R E G U L A R _ R A N K _ 2                                   0 x 0 0 0 0 0 0 0 2 U  
 # d e f i n e   A D C _ R E G U L A R _ R A N K _ 3                                   0 x 0 0 0 0 0 0 0 3 U  
 # d e f i n e   A D C _ R E G U L A R _ R A N K _ 4                                   0 x 0 0 0 0 0 0 0 4 U  
 # d e f i n e   A D C _ R E G U L A R _ R A N K _ 5                                   0 x 0 0 0 0 0 0 0 5 U  
 # d e f i n e   A D C _ R E G U L A R _ R A N K _ 6                                   0 x 0 0 0 0 0 0 0 6 U  
 # d e f i n e   A D C _ R E G U L A R _ R A N K _ 7                                   0 x 0 0 0 0 0 0 0 7 U  
 # d e f i n e   A D C _ R E G U L A R _ R A N K _ 8                                   0 x 0 0 0 0 0 0 0 8 U  
 # d e f i n e   A D C _ R E G U L A R _ R A N K _ 9                                   0 x 0 0 0 0 0 0 0 9 U  
 # d e f i n e   A D C _ R E G U L A R _ R A N K _ 1 0                                 0 x 0 0 0 0 0 0 0 A U  
 # d e f i n e   A D C _ R E G U L A R _ R A N K _ 1 1                                 0 x 0 0 0 0 0 0 0 B U  
 # d e f i n e   A D C _ R E G U L A R _ R A N K _ 1 2                                 0 x 0 0 0 0 0 0 0 C U  
 # d e f i n e   A D C _ R E G U L A R _ R A N K _ 1 3                                 0 x 0 0 0 0 0 0 0 D U  
 # d e f i n e   A D C _ R E G U L A R _ R A N K _ 1 4                                 0 x 0 0 0 0 0 0 0 E U  
 # d e f i n e   A D C _ R E G U L A R _ R A N K _ 1 5                                 0 x 0 0 0 0 0 0 0 F U  
 # d e f i n e   A D C _ R E G U L A R _ R A N K _ 1 6                                 0 x 0 0 0 0 0 0 1 0 U  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ a n a l o g _ w a t c h d o g _ m o d e   A D C   a n a l o g   w a t c h d o g   m o d e  
     *   @ {  
     * /  
 # d e f i n e   A D C _ A N A L O G W A T C H D O G _ N O N E                                                           0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   A D C _ A N A L O G W A T C H D O G _ S I N G L E _ R E G                       ( ( u i n t 3 2 _ t ) ( A D C _ C R 1 _ A W D S G L   |   A D C _ C R 1 _ A W D E N ) )  
 # d e f i n e   A D C _ A N A L O G W A T C H D O G _ S I N G L E _ I N J E C                   ( ( u i n t 3 2 _ t ) ( A D C _ C R 1 _ A W D S G L   |   A D C _ C R 1 _ J A W D E N ) )  
 # d e f i n e   A D C _ A N A L O G W A T C H D O G _ S I N G L E _ R E G I N J E C             ( ( u i n t 3 2 _ t ) ( A D C _ C R 1 _ A W D S G L   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ J A W D E N ) )  
 # d e f i n e   A D C _ A N A L O G W A T C H D O G _ A L L _ R E G                             ( ( u i n t 3 2 _ t ) A D C _ C R 1 _ A W D E N )  
 # d e f i n e   A D C _ A N A L O G W A T C H D O G _ A L L _ I N J E C                         ( ( u i n t 3 2 _ t ) A D C _ C R 1 _ J A W D E N )  
 # d e f i n e   A D C _ A N A L O G W A T C H D O G _ A L L _ R E G I N J E C                   ( ( u i n t 3 2 _ t ) ( A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ J A W D E N ) )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ c o n v e r s i o n _ g r o u p   A D C   c o n v e r s i o n   g r o u p  
     *   @ {  
     * /  
 # d e f i n e   A D C _ R E G U L A R _ G R O U P                           ( ( u i n t 3 2 _ t ) ( A D C _ F L A G _ E O C ) )  
 # d e f i n e   A D C _ I N J E C T E D _ G R O U P                         ( ( u i n t 3 2 _ t ) ( A D C _ F L A G _ J E O C ) )  
 # d e f i n e   A D C _ R E G U L A R _ I N J E C T E D _ G R O U P         ( ( u i n t 3 2 _ t ) ( A D C _ F L A G _ E O C   |   A D C _ F L A G _ J E O C ) )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ E v e n t _ t y p e   A D C   E v e n t   t y p e  
     *   @ {  
     * /  
 # d e f i n e   A D C _ A W D _ E V E N T                               ( ( u i n t 3 2 _ t ) A D C _ F L A G _ A W D )       / * ! <   A D C   A n a l o g   w a t c h d o g   e v e n t   * /  
  
 # d e f i n e   A D C _ A W D 1 _ E V E N T                             A D C _ A W D _ E V E N T                             / * ! <   A D C   A n a l o g   w a t c h d o g   1   e v e n t :   A l t e r n a t e   n a m i n g   f o r   c o m p a t i b i l i t y   w i t h   o t h e r   S T M 3 2   d e v i c e s   h a v i n g   s e v e r a l   a n a l o g   w a t c h d o g s   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ i n t e r r u p t s _ d e f i n i t i o n   A D C   i n t e r r u p t s   d e f i n i t i o n  
     *   @ {  
     * /  
 # d e f i n e   A D C _ I T _ E O C                       A D C _ C R 1 _ E O C I E                 / * ! <   A D C   E n d   o f   R e g u l a r   C o n v e r s i o n   i n t e r r u p t   s o u r c e   * /  
 # d e f i n e   A D C _ I T _ J E O C                     A D C _ C R 1 _ J E O C I E               / * ! <   A D C   E n d   o f   I n j e c t e d   C o n v e r s i o n   i n t e r r u p t   s o u r c e   * /  
 # d e f i n e   A D C _ I T _ A W D                       A D C _ C R 1 _ A W D I E                 / * ! <   A D C   A n a l o g   w a t c h d o g   i n t e r r u p t   s o u r c e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ f l a g s _ d e f i n i t i o n   A D C   f l a g s   d e f i n i t i o n  
     *   @ {  
     * /  
 # d e f i n e   A D C _ F L A G _ S T R T                     A D C _ S R _ S T R T           / * ! <   A D C   R e g u l a r   g r o u p   s t a r t   f l a g   * /  
 # d e f i n e   A D C _ F L A G _ J S T R T                   A D C _ S R _ J S T R T         / * ! <   A D C   I n j e c t e d   g r o u p   s t a r t   f l a g   * /  
 # d e f i n e   A D C _ F L A G _ E O C                       A D C _ S R _ E O C             / * ! <   A D C   E n d   o f   R e g u l a r   c o n v e r s i o n   f l a g   * /  
 # d e f i n e   A D C _ F L A G _ J E O C                     A D C _ S R _ J E O C           / * ! <   A D C   E n d   o f   I n j e c t e d   c o n v e r s i o n   f l a g   * /  
 # d e f i n e   A D C _ F L A G _ A W D                       A D C _ S R _ A W D             / * ! <   A D C   A n a l o g   w a t c h d o g   f l a g   * /  
 / * *  
     *   @ }  
     * /  
  
  
 / * *  
     *   @ }  
     * /    
  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ a d d t o g r o u p   A D C _ P r i v a t e _ C o n s t a n t s   A D C   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ c o n v e r s i o n _ c y c l e s   A D C   c o n v e r s i o n   c y c l e s  
     *   @ {  
     * /  
 / *   A D C   c o n v e r s i o n   c y c l e s   ( u n i t :   A D C   c l o c k   c y c l e s )                                                       * /  
 / *   ( s e l e c t e d   s a m p l i n g   t i m e   +   c o n v e r s i o n   t i m e   o f   1 2 . 5   A D C   c l o c k   c y c l e s ,   w i t h   * /  
 / *   r e s o l u t i o n   1 2   b i t s )                                                                                                             * /  
 # d e f i n e   A D C _ C O N V E R S I O N C L O C K C Y C L E S _ S A M P L E T I M E _ 1 C Y C L E 5                                     1 4 U  
 # d e f i n e   A D C _ C O N V E R S I O N C L O C K C Y C L E S _ S A M P L E T I M E _ 7 C Y C L E S 5                                   2 0 U  
 # d e f i n e   A D C _ C O N V E R S I O N C L O C K C Y C L E S _ S A M P L E T I M E _ 1 3 C Y C L E S 5                                 2 6 U  
 # d e f i n e   A D C _ C O N V E R S I O N C L O C K C Y C L E S _ S A M P L E T I M E _ 2 8 C Y C L E S 5                                 4 1 U  
 # d e f i n e   A D C _ C O N V E R S I O N C L O C K C Y C L E S _ S A M P L E T I M E _ 4 1 C Y C L E S 5                                 5 4 U  
 # d e f i n e   A D C _ C O N V E R S I O N C L O C K C Y C L E S _ S A M P L E T I M E _ 5 5 C Y C L E S 5                                 6 8 U  
 # d e f i n e   A D C _ C O N V E R S I O N C L O C K C Y C L E S _ S A M P L E T I M E _ 7 1 C Y C L E S 5                                 8 4 U  
 # d e f i n e   A D C _ C O N V E R S I O N C L O C K C Y C L E S _ S A M P L E T I M E _ 2 3 9 C Y C L E S 5                             2 5 2 U  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ s a m p l i n g _ t i m e s _ a l l _ c h a n n e l s   A D C   s a m p l i n g   t i m e s   a l l   c h a n n e l s  
     *   @ {  
     * /  
 # d e f i n e   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 2 B I T 2                                                                                     \  
           ( A D C _ S M P R 2 _ S M P 9 _ 2   |   A D C _ S M P R 2 _ S M P 8 _ 2   |   A D C _ S M P R 2 _ S M P 7 _ 2   |   A D C _ S M P R 2 _ S M P 6 _ 2   |           \  
             A D C _ S M P R 2 _ S M P 5 _ 2   |   A D C _ S M P R 2 _ S M P 4 _ 2   |   A D C _ S M P R 2 _ S M P 3 _ 2   |   A D C _ S M P R 2 _ S M P 2 _ 2   |           \  
             A D C _ S M P R 2 _ S M P 1 _ 2   |   A D C _ S M P R 2 _ S M P 0 _ 2 )  
 # d e f i n e   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 1 B I T 2                                                                                     \  
           ( A D C _ S M P R 1 _ S M P 1 7 _ 2   |   A D C _ S M P R 1 _ S M P 1 6 _ 2   |   A D C _ S M P R 1 _ S M P 1 5 _ 2   |   A D C _ S M P R 1 _ S M P 1 4 _ 2   |   \  
             A D C _ S M P R 1 _ S M P 1 3 _ 2   |   A D C _ S M P R 1 _ S M P 1 2 _ 2   |   A D C _ S M P R 1 _ S M P 1 1 _ 2   |   A D C _ S M P R 1 _ S M P 1 0 _ 2   )  
  
 # d e f i n e   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 2 B I T 1                                                                                     \  
           ( A D C _ S M P R 2 _ S M P 9 _ 1   |   A D C _ S M P R 2 _ S M P 8 _ 1   |   A D C _ S M P R 2 _ S M P 7 _ 1   |   A D C _ S M P R 2 _ S M P 6 _ 1   |           \  
             A D C _ S M P R 2 _ S M P 5 _ 1   |   A D C _ S M P R 2 _ S M P 4 _ 1   |   A D C _ S M P R 2 _ S M P 3 _ 1   |   A D C _ S M P R 2 _ S M P 2 _ 1   |           \  
             A D C _ S M P R 2 _ S M P 1 _ 1   |   A D C _ S M P R 2 _ S M P 0 _ 1 )  
 # d e f i n e   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 1 B I T 1                                                                                     \  
           ( A D C _ S M P R 1 _ S M P 1 7 _ 1   |   A D C _ S M P R 1 _ S M P 1 6 _ 1   |   A D C _ S M P R 1 _ S M P 1 5 _ 1   |   A D C _ S M P R 1 _ S M P 1 4 _ 1   |   \  
             A D C _ S M P R 1 _ S M P 1 3 _ 1   |   A D C _ S M P R 1 _ S M P 1 2 _ 1   |   A D C _ S M P R 1 _ S M P 1 1 _ 1   |   A D C _ S M P R 1 _ S M P 1 0 _ 1   )  
  
 # d e f i n e   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 2 B I T 0                                                                                     \  
           ( A D C _ S M P R 2 _ S M P 9 _ 0   |   A D C _ S M P R 2 _ S M P 8 _ 0   |   A D C _ S M P R 2 _ S M P 7 _ 0   |   A D C _ S M P R 2 _ S M P 6 _ 0   |           \  
             A D C _ S M P R 2 _ S M P 5 _ 0   |   A D C _ S M P R 2 _ S M P 4 _ 0   |   A D C _ S M P R 2 _ S M P 3 _ 0   |   A D C _ S M P R 2 _ S M P 2 _ 0   |           \  
             A D C _ S M P R 2 _ S M P 1 _ 0   |   A D C _ S M P R 2 _ S M P 0 _ 0 )  
 # d e f i n e   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 1 B I T 0                                                                                     \  
           ( A D C _ S M P R 1 _ S M P 1 7 _ 0   |   A D C _ S M P R 1 _ S M P 1 6 _ 0   |   A D C _ S M P R 1 _ S M P 1 5 _ 0   |   A D C _ S M P R 1 _ S M P 1 4 _ 0   |   \  
             A D C _ S M P R 1 _ S M P 1 3 _ 0   |   A D C _ S M P R 1 _ S M P 1 2 _ 0   |   A D C _ S M P R 1 _ S M P 1 1 _ 0   |   A D C _ S M P R 1 _ S M P 1 0 _ 0   )  
  
 # d e f i n e   A D C _ S A M P L E T I M E _ 1 C Y C L E 5 _ S M P R 2 A L L C H A N N E L S         0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   A D C _ S A M P L E T I M E _ 7 C Y C L E S 5 _ S M P R 2 A L L C H A N N E L S       ( A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 2 B I T 0 )  
 # d e f i n e   A D C _ S A M P L E T I M E _ 1 3 C Y C L E S 5 _ S M P R 2 A L L C H A N N E L S     ( A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 2 B I T 1 )  
 # d e f i n e   A D C _ S A M P L E T I M E _ 2 8 C Y C L E S 5 _ S M P R 2 A L L C H A N N E L S     ( A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 2 B I T 1   |   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 2 B I T 0 )  
 # d e f i n e   A D C _ S A M P L E T I M E _ 4 1 C Y C L E S 5 _ S M P R 2 A L L C H A N N E L S     ( A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 2 B I T 2 )  
 # d e f i n e   A D C _ S A M P L E T I M E _ 5 5 C Y C L E S 5 _ S M P R 2 A L L C H A N N E L S     ( A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 2 B I T 2   |   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 2 B I T 0 )  
 # d e f i n e   A D C _ S A M P L E T I M E _ 7 1 C Y C L E S 5 _ S M P R 2 A L L C H A N N E L S     ( A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 2 B I T 2   |   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 2 B I T 1 )  
 # d e f i n e   A D C _ S A M P L E T I M E _ 2 3 9 C Y C L E S 5 _ S M P R 2 A L L C H A N N E L S   ( A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 2 B I T 2   |   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 2 B I T 1   |   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 2 B I T 0 )  
  
 # d e f i n e   A D C _ S A M P L E T I M E _ 1 C Y C L E 5 _ S M P R 1 A L L C H A N N E L S         0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   A D C _ S A M P L E T I M E _ 7 C Y C L E S 5 _ S M P R 1 A L L C H A N N E L S       ( A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 1 B I T 0 )  
 # d e f i n e   A D C _ S A M P L E T I M E _ 1 3 C Y C L E S 5 _ S M P R 1 A L L C H A N N E L S     ( A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 1 B I T 1 )  
 # d e f i n e   A D C _ S A M P L E T I M E _ 2 8 C Y C L E S 5 _ S M P R 1 A L L C H A N N E L S     ( A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 1 B I T 1   |   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 1 B I T 0 )  
 # d e f i n e   A D C _ S A M P L E T I M E _ 4 1 C Y C L E S 5 _ S M P R 1 A L L C H A N N E L S     ( A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 1 B I T 2 )  
 # d e f i n e   A D C _ S A M P L E T I M E _ 5 5 C Y C L E S 5 _ S M P R 1 A L L C H A N N E L S     ( A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 1 B I T 2   |   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 1 B I T 0 )  
 # d e f i n e   A D C _ S A M P L E T I M E _ 7 1 C Y C L E S 5 _ S M P R 1 A L L C H A N N E L S     ( A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 1 B I T 2   |   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 1 B I T 1 )  
 # d e f i n e   A D C _ S A M P L E T I M E _ 2 3 9 C Y C L E S 5 _ S M P R 1 A L L C H A N N E L S   ( A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 1 B I T 2   |   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 1 B I T 1   |   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 1 B I T 0 )  
 / * *  
     *   @ }  
     * /  
  
 / *   C o m b i n a t i o n   o f   a l l   p o s t - c o n v e r s i o n   f l a g s   b i t s :   E O C / E O S ,   J E O C / J E O S ,   O V R ,   A W D x   * /  
 # d e f i n e   A D C _ F L A G _ P O S T C O N V _ A L L       ( A D C _ F L A G _ E O C   |   A D C _ F L A G _ J E O C   |   A D C _ F L A G _ A W D   )  
  
 / * *  
     *   @ }  
     * /  
  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   A D C _ E x p o r t e d _ M a c r o s   A D C   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
 / *   M a c r o   f o r   i n t e r n a l   H A L   d r i v e r   u s a g e ,   a n d   p o s s i b l y   c a n   b e   u s e d   i n t o   c o d e   o f   * /  
 / *   f i n a l   u s e r .                                                                                                                                 * /          
  
 / * *  
     *   @ b r i e f   E n a b l e   t h e   A D C   p e r i p h e r a l  
     *   @ n o t e   A D C   e n a b l e   r e q u i r e s   a   d e l a y   f o r   A D C   s t a b i l i z a t i o n   t i m e  
     *               ( r e f e r   t o   d e v i c e   d a t a s h e e t ,   p a r a m e t e r   t S T A B )  
     *   @ n o t e   O n   S T M 3 2 F 1 ,   i f   A D C   i s   a l r e a d y   e n a b l e d   t h i s   m a c r o   t r i g s   a   c o n v e r s i o n    
     *               S W   s t a r t   o n   r e g u l a r   g r o u p .  
     *   @ p a r a m   _ _ H A N D L E _ _ :   A D C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ A D C _ E N A B L E ( _ _ H A N D L E _ _ )                                                                                       \  
     ( S E T _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 2 ,   ( A D C _ C R 2 _ A D O N ) ) )  
          
 / * *  
     *   @ b r i e f   D i s a b l e   t h e   A D C   p e r i p h e r a l  
     *   @ p a r a m   _ _ H A N D L E _ _ :   A D C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ A D C _ D I S A B L E ( _ _ H A N D L E _ _ )                                                                                     \  
     ( C L E A R _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 2 ,   ( A D C _ C R 2 _ A D O N ) ) )  
          
 / * *   @ b r i e f   E n a b l e   t h e   A D C   e n d   o f   c o n v e r s i o n   i n t e r r u p t .  
     *   @ p a r a m   _ _ H A N D L E _ _ :   A D C   h a n d l e  
     *   @ p a r a m   _ _ I N T E R R U P T _ _ :   A D C   I n t e r r u p t  
     *                     T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   A D C _ I T _ E O C :   A D C   E n d   o f   R e g u l a r   C o n v e r s i o n   i n t e r r u p t   s o u r c e  
     *                         @ a r g   A D C _ I T _ J E O C :   A D C   E n d   o f   I n j e c t e d   C o n v e r s i o n   i n t e r r u p t   s o u r c e  
     *                         @ a r g   A D C _ I T _ A W D :   A D C   A n a l o g   w a t c h d o g   i n t e r r u p t   s o u r c e  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ A D C _ E N A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )                                                   \  
     ( S E T _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1 ,   ( _ _ I N T E R R U P T _ _ ) ) )  
          
 / * *   @ b r i e f   D i s a b l e   t h e   A D C   e n d   o f   c o n v e r s i o n   i n t e r r u p t .  
     *   @ p a r a m   _ _ H A N D L E _ _ :   A D C   h a n d l e  
     *   @ p a r a m   _ _ I N T E R R U P T _ _ :   A D C   I n t e r r u p t  
     *                     T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   A D C _ I T _ E O C :   A D C   E n d   o f   R e g u l a r   C o n v e r s i o n   i n t e r r u p t   s o u r c e  
     *                         @ a r g   A D C _ I T _ J E O C :   A D C   E n d   o f   I n j e c t e d   C o n v e r s i o n   i n t e r r u p t   s o u r c e  
     *                         @ a r g   A D C _ I T _ A W D :   A D C   A n a l o g   w a t c h d o g   i n t e r r u p t   s o u r c e  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ A D C _ D I S A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )                                                 \  
     ( C L E A R _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1 ,   ( _ _ I N T E R R U P T _ _ ) ) )  
  
 / * *   @ b r i e f     C h e c k s   i f   t h e   s p e c i f i e d   A D C   i n t e r r u p t   s o u r c e   i s   e n a b l e d   o r   d i s a b l e d .  
     *   @ p a r a m   _ _ H A N D L E _ _ :   A D C   h a n d l e  
     *   @ p a r a m   _ _ I N T E R R U P T _ _ :   A D C   i n t e r r u p t   s o u r c e   t o   c h e c k  
     *                     T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   A D C _ I T _ E O C :   A D C   E n d   o f   R e g u l a r   C o n v e r s i o n   i n t e r r u p t   s o u r c e  
     *                         @ a r g   A D C _ I T _ J E O C :   A D C   E n d   o f   I n j e c t e d   C o n v e r s i o n   i n t e r r u p t   s o u r c e  
     *                         @ a r g   A D C _ I T _ A W D :   A D C   A n a l o g   w a t c h d o g   i n t e r r u p t   s o u r c e  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ A D C _ G E T _ I T _ S O U R C E ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )                                           \  
     ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1   &   ( _ _ I N T E R R U P T _ _ ) )   = =   ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *   @ b r i e f   G e t   t h e   s e l e c t e d   A D C ' s   f l a g   s t a t u s .  
     *   @ p a r a m   _ _ H A N D L E _ _ :   A D C   h a n d l e  
     *   @ p a r a m   _ _ F L A G _ _ :   A D C   f l a g  
     *                     T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   A D C _ F L A G _ S T R T :   A D C   R e g u l a r   g r o u p   s t a r t   f l a g  
     *                         @ a r g   A D C _ F L A G _ J S T R T :   A D C   I n j e c t e d   g r o u p   s t a r t   f l a g  
     *                         @ a r g   A D C _ F L A G _ E O C :   A D C   E n d   o f   R e g u l a r   c o n v e r s i o n   f l a g  
     *                         @ a r g   A D C _ F L A G _ J E O C :   A D C   E n d   o f   I n j e c t e d   c o n v e r s i o n   f l a g  
     *                         @ a r g   A D C _ F L A G _ A W D :   A D C   A n a l o g   w a t c h d o g   f l a g  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ A D C _ G E T _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )                                                               \  
     ( ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S R )   &   ( _ _ F L A G _ _ ) )   = =   ( _ _ F L A G _ _ ) )  
          
 / * *   @ b r i e f   C l e a r   t h e   A D C ' s   p e n d i n g   f l a g s  
     *   @ p a r a m   _ _ H A N D L E _ _ :   A D C   h a n d l e  
     *   @ p a r a m   _ _ F L A G _ _ :   A D C   f l a g  
     *                     T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   A D C _ F L A G _ S T R T :   A D C   R e g u l a r   g r o u p   s t a r t   f l a g  
     *                         @ a r g   A D C _ F L A G _ J S T R T :   A D C   I n j e c t e d   g r o u p   s t a r t   f l a g  
     *                         @ a r g   A D C _ F L A G _ E O C :   A D C   E n d   o f   R e g u l a r   c o n v e r s i o n   f l a g  
     *                         @ a r g   A D C _ F L A G _ J E O C :   A D C   E n d   o f   I n j e c t e d   c o n v e r s i o n   f l a g  
     *                         @ a r g   A D C _ F L A G _ A W D :   A D C   A n a l o g   w a t c h d o g   f l a g  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ A D C _ C L E A R _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )                                                           \  
     ( W R I T E _ R E G ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S R ,   ~ ( _ _ F L A G _ _ ) ) )  
  
 / * *   @ b r i e f     R e s e t   A D C   h a n d l e   s t a t e  
     *   @ p a r a m     _ _ H A N D L E _ _ :   A D C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 # i f   ( U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 # d e f i n e   _ _ H A L _ A D C _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )                                                               \  
     d o {                                                                                                                                                     \  
           ( _ _ H A N D L E _ _ ) - > S t a t e   =   H A L _ A D C _ S T A T E _ R E S E T ;                                                                 \  
           ( _ _ H A N D L E _ _ ) - > M s p I n i t C a l l b a c k   =   N U L L ;                                                                           \  
           ( _ _ H A N D L E _ _ ) - > M s p D e I n i t C a l l b a c k   =   N U L L ;                                                                       \  
         }   w h i l e ( 0 )  
 # e l s e  
 # d e f i n e   _ _ H A L _ A D C _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )                                                               \  
     ( ( _ _ H A N D L E _ _ ) - > S t a t e   =   H A L _ A D C _ S T A T E _ R E S E T )  
 # e n d i f  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   A D C _ P r i v a t e _ M a c r o s   A D C   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
 / *   M a c r o   r e s e r v e d   f o r   i n t e r n a l   H A L   d r i v e r   u s a g e ,   n o t   i n t e n d e d   t o   b e   u s e d   i n       * /  
 / *   c o d e   o f   f i n a l   u s e r .                                                                                                                 * /  
  
 / * *  
     *   @ b r i e f   V e r i f i c a t i o n   o f   A D C   s t a t e :   e n a b l e d   o r   d i s a b l e d  
     *   @ p a r a m   _ _ H A N D L E _ _ :   A D C   h a n d l e  
     *   @ r e t v a l   S E T   ( A D C   e n a b l e d )   o r   R E S E T   ( A D C   d i s a b l e d )  
     * /  
 # d e f i n e   A D C _ I S _ E N A B L E ( _ _ H A N D L E _ _ )                                                                                             \  
     ( ( (   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 2   &   A D C _ C R 2 _ A D O N )   = =   A D C _ C R 2 _ A D O N   )                       \  
       )   ?   S E T   :   R E S E T )  
  
 / * *  
     *   @ b r i e f   T e s t   i f   c o n v e r s i o n   t r i g g e r   o f   r e g u l a r   g r o u p   i s   s o f t w a r e   s t a r t  
     *                 o r   e x t e r n a l   t r i g g e r .  
     *   @ p a r a m   _ _ H A N D L E _ _ :   A D C   h a n d l e  
     *   @ r e t v a l   S E T   ( s o f t w a r e   s t a r t )   o r   R E S E T   ( e x t e r n a l   t r i g g e r )  
     * /  
 # d e f i n e   A D C _ I S _ S O F T W A R E _ S T A R T _ R E G U L A R ( _ _ H A N D L E _ _ )                                                             \  
     ( R E A D _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ E X T S E L )   = =   A D C _ S O F T W A R E _ S T A R T )  
  
 / * *  
     *   @ b r i e f   T e s t   i f   c o n v e r s i o n   t r i g g e r   o f   i n j e c t e d   g r o u p   i s   s o f t w a r e   s t a r t  
     *                 o r   e x t e r n a l   t r i g g e r .  
     *   @ p a r a m   _ _ H A N D L E _ _ :   A D C   h a n d l e  
     *   @ r e t v a l   S E T   ( s o f t w a r e   s t a r t )   o r   R E S E T   ( e x t e r n a l   t r i g g e r )  
     * /  
 # d e f i n e   A D C _ I S _ S O F T W A R E _ S T A R T _ I N J E C T E D ( _ _ H A N D L E _ _ )                                                           \  
     ( R E A D _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ J E X T S E L )   = =   A D C _ I N J E C T E D _ S O F T W A R E _ S T A R T )  
  
 / * *  
     *   @ b r i e f   S i m u l t a n e o u s l y   c l e a r s   a n d   s e t s   s p e c i f i c   b i t s   o f   t h e   h a n d l e   S t a t e  
     *   @ n o t e :   A D C _ S T A T E _ C L R _ S E T ( )   m a c r o   i s   m e r e l y   a l i a s e d   t o   g e n e r i c   m a c r o   M O D I F Y _ R E G ( ) ,  
     *                 t h e   f i r s t   p a r a m e t e r   i s   t h e   A D C   h a n d l e   S t a t e ,   t h e   s e c o n d   p a r a m e t e r   i s   t h e  
     *                 b i t   f i e l d   t o   c l e a r ,   t h e   t h i r d   a n d   l a s t   p a r a m e t e r   i s   t h e   b i t   f i e l d   t o   s e t .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   A D C _ S T A T E _ C L R _ S E T   M O D I F Y _ R E G  
  
 / * *  
     *   @ b r i e f   C l e a r   A D C   e r r o r   c o d e   ( s e t   i t   t o   e r r o r   c o d e :   " n o   e r r o r " )  
     *   @ p a r a m   _ _ H A N D L E _ _ :   A D C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   A D C _ C L E A R _ E R R O R C O D E ( _ _ H A N D L E _ _ )                                                                                 \  
     ( ( _ _ H A N D L E _ _ ) - > E r r o r C o d e   =   H A L _ A D C _ E R R O R _ N O N E )  
  
 / * *  
     *   @ b r i e f   S e t   A D C   n u m b e r   o f   c o n v e r s i o n s   i n t o   r e g u l a r   c h a n n e l   s e q u e n c e   l e n g t h .  
     *   @ p a r a m   _ N b r O f C o n v e r s i o n _ :   R e g u l a r   c h a n n e l   s e q u e n c e   l e n g t h    
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   A D C _ S Q R 1 _ L _ S H I F T ( _ N b r O f C o n v e r s i o n _ )                                                                         \  
     ( ( ( _ N b r O f C o n v e r s i o n _ )   -   ( u i n t 8 _ t ) 1 )   < <   A D C _ S Q R 1 _ L _ P o s )  
  
 / * *  
     *   @ b r i e f   S e t   t h e   A D C ' s   s a m p l e   t i m e   f o r   c h a n n e l   n u m b e r s   b e t w e e n   1 0   a n d   1 8 .  
     *   @ p a r a m   _ S A M P L E T I M E _ :   S a m p l e   t i m e   p a r a m e t e r .  
     *   @ p a r a m   _ C H A N N E L N B _ :   C h a n n e l   n u m b e r .      
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   A D C _ S M P R 1 ( _ S A M P L E T I M E _ ,   _ C H A N N E L N B _ )                                                                       \  
     ( ( _ S A M P L E T I M E _ )   < <   ( A D C _ S M P R 1 _ S M P 1 1 _ P o s   *   ( ( _ C H A N N E L N B _ )   -   1 0 ) ) )  
  
 / * *  
     *   @ b r i e f   S e t   t h e   A D C ' s   s a m p l e   t i m e   f o r   c h a n n e l   n u m b e r s   b e t w e e n   0   a n d   9 .  
     *   @ p a r a m   _ S A M P L E T I M E _ :   S a m p l e   t i m e   p a r a m e t e r .  
     *   @ p a r a m   _ C H A N N E L N B _ :   C h a n n e l   n u m b e r .      
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   A D C _ S M P R 2 ( _ S A M P L E T I M E _ ,   _ C H A N N E L N B _ )                                                                       \  
     ( ( _ S A M P L E T I M E _ )   < <   ( A D C _ S M P R 2 _ S M P 1 _ P o s   *   ( _ C H A N N E L N B _ ) ) )  
  
 / * *  
     *   @ b r i e f   S e t   t h e   s e l e c t e d   r e g u l a r   c h a n n e l   r a n k   f o r   r a n k   b e t w e e n   1   a n d   6 .  
     *   @ p a r a m   _ C H A N N E L N B _ :   C h a n n e l   n u m b e r .  
     *   @ p a r a m   _ R A N K N B _ :   R a n k   n u m b e r .          
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   A D C _ S Q R 3 _ R K ( _ C H A N N E L N B _ ,   _ R A N K N B _ )                                                                           \  
     ( ( _ C H A N N E L N B _ )   < <   ( A D C _ S Q R 3 _ S Q 2 _ P o s   *   ( ( _ R A N K N B _ )   -   1 ) ) )  
  
 / * *  
     *   @ b r i e f   S e t   t h e   s e l e c t e d   r e g u l a r   c h a n n e l   r a n k   f o r   r a n k   b e t w e e n   7   a n d   1 2 .  
     *   @ p a r a m   _ C H A N N E L N B _ :   C h a n n e l   n u m b e r .  
     *   @ p a r a m   _ R A N K N B _ :   R a n k   n u m b e r .          
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   A D C _ S Q R 2 _ R K ( _ C H A N N E L N B _ ,   _ R A N K N B _ )                                                                           \  
     ( ( _ C H A N N E L N B _ )   < <   ( A D C _ S Q R 2 _ S Q 8 _ P o s   *   ( ( _ R A N K N B _ )   -   7 ) ) )  
  
 / * *  
     *   @ b r i e f   S e t   t h e   s e l e c t e d   r e g u l a r   c h a n n e l   r a n k   f o r   r a n k   b e t w e e n   1 3   a n d   1 6 .  
     *   @ p a r a m   _ C H A N N E L N B _ :   C h a n n e l   n u m b e r .  
     *   @ p a r a m   _ R A N K N B _ :   R a n k   n u m b e r .          
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   A D C _ S Q R 1 _ R K ( _ C H A N N E L N B _ ,   _ R A N K N B _ )                                                                           \  
     ( ( _ C H A N N E L N B _ )   < <   ( A D C _ S Q R 1 _ S Q 1 4 _ P o s   *   ( ( _ R A N K N B _ )   -   1 3 ) ) )  
  
 / * *  
     *   @ b r i e f   S e t   t h e   i n j e c t e d   s e q u e n c e   l e n g t h .  
     *   @ p a r a m   _ J S Q R _ J L _ :   S e q u e n c e   l e n g t h .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   A D C _ J S Q R _ J L _ S H I F T ( _ J S Q R _ J L _ )                                                                                       \  
     ( ( ( _ J S Q R _ J L _ )   - 1 )   < <   A D C _ J S Q R _ J L _ P o s )  
  
 / * *  
     *   @ b r i e f   S e t   t h e   s e l e c t e d   i n j e c t e d   c h a n n e l   r a n k  
     *                 N o t e :   o n   S T M 3 2 F 1   d e v i c e s ,   c h a n n e l   r a n k   p o s i t i o n   i n   J S Q R   r e g i s t e r  
     *                             i s   d e p e n d i n g   o n   t o t a l   n u m b e r   o f   r a n k s   s e l e c t e d   i n t o  
     *                             i n j e c t e d   s e q u e n c e r   ( r a n k s   s e q u e n c e   s t a r t i n g   f r o m   4 - J L )  
     *   @ p a r a m   _ C H A N N E L N B _ :   C h a n n e l   n u m b e r .  
     *   @ p a r a m   _ R A N K N B _ :   R a n k   n u m b e r .  
     *   @ p a r a m   _ J S Q R _ J L _ :   S e q u e n c e   l e n g t h .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   A D C _ J S Q R _ R K _ J L ( _ C H A N N E L N B _ ,   _ R A N K N B _ ,   _ J S Q R _ J L _ )                                               \  
     ( ( _ C H A N N E L N B _ )   < <   ( A D C _ J S Q R _ J S Q 2 _ P o s   *   ( ( 4   -   ( ( _ J S Q R _ J L _ )   -   ( _ R A N K N B _ ) ) )   -   1 ) ) )  
  
 / * *  
     *   @ b r i e f   E n a b l e   A D C   c o n t i n u o u s   c o n v e r s i o n   m o d e .  
     *   @ p a r a m   _ C O N T I N U O U S _ M O D E _ :   C o n t i n u o u s   m o d e .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   A D C _ C R 2 _ C O N T I N U O U S ( _ C O N T I N U O U S _ M O D E _ )                                                                     \  
     ( ( _ C O N T I N U O U S _ M O D E _ )   < <   A D C _ C R 2 _ C O N T _ P o s )  
  
 / * *  
     *   @ b r i e f   C o n f i g u r e s   t h e   n u m b e r   o f   d i s c o n t i n u o u s   c o n v e r s i o n s   f o r   t h e   r e g u l a r   g r o u p   c h a n n e l s .  
     *   @ p a r a m   _ N B R _ D I S C O N T I N U O U S _ C O N V _ :   N u m b e r   o f   d i s c o n t i n u o u s   c o n v e r s i o n s .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   A D C _ C R 1 _ D I S C O N T I N U O U S _ N U M ( _ N B R _ D I S C O N T I N U O U S _ C O N V _ )                                         \  
     ( ( ( _ N B R _ D I S C O N T I N U O U S _ C O N V _ )   -   1 )   < <   A D C _ C R 1 _ D I S C N U M _ P o s )  
  
 / * *  
     *   @ b r i e f   E n a b l e   A D C   s c a n   m o d e   t o   c o n v e r t   m u l t i p l e   r a n k s   w i t h   s e q u e n c e r .  
     *   @ p a r a m   _ S C A N _ M O D E _ :   S c a n   c o n v e r s i o n   m o d e .  
     *   @ r e t v a l   N o n e  
     * /  
 / *   N o t e :   S c a n   m o d e   i s   c o m p a r e d   t o   E N A B L E   f o r   l e g a c y   p u r p o s e ,   t h i s   p a r a m e t e r       * /  
 / *               i s   e q u i v a l e n t   t o   A D C _ S C A N _ E N A B L E .                                                                         * /  
 # d e f i n e   A D C _ C R 1 _ S C A N _ S E T ( _ S C A N _ M O D E _ )                                                                                     \  
     ( (   ( ( _ S C A N _ M O D E _ )   = =   A D C _ S C A N _ E N A B L E )   | |   ( ( _ S C A N _ M O D E _ )   = =   E N A B L E )                       \  
       ) ?   ( A D C _ S C A N _ E N A B L E )   :   ( A D C _ S C A N _ D I S A B L E )                                                                       \  
     )  
  
 / * *  
     *   @ b r i e f   G e t   t h e   m a x i m u m   A D C   c o n v e r s i o n   c y c l e s   o n   a l l   c h a n n e l s .  
     *   R e t u r n s   t h e   s e l e c t e d   s a m p l i n g   t i m e   +   c o n v e r s i o n   t i m e   ( 1 2 . 5   A D C   c l o c k   c y c l e s )  
     *   A p p r o x i m a t i o n   o f   s a m p l i n g   t i m e   w i t h i n   4   r a n g e s ,   r e t u r n s   t h e   h i g h e s t   v a l u e :  
     *       b e l o w   7 . 5   c y c l e s   { 1 . 5   c y c l e ;   7 . 5   c y c l e s } ,  
     *       b e t w e e n   1 3 . 5   c y c l e s   a n d   2 8 . 5   c y c l e s   { 1 3 . 5   c y c l e s ;   2 8 . 5   c y c l e s }  
     *       b e t w e e n   4 1 . 5   c y c l e s   a n d   7 1 . 5   c y c l e s   { 4 1 . 5   c y c l e s ;   5 5 . 5   c y c l e s ;   7 1 . 5 c y c l e s }  
     *       e q u a l   t o   2 3 9 . 5   c y c l e s  
     *   U n i t :   A D C   c l o c k   c y c l e s  
     *   @ p a r a m   _ _ H A N D L E _ _ :   A D C   h a n d l e  
     *   @ r e t v a l   A D C   c o n v e r s i o n   c y c l e s   o n   a l l   c h a n n e l s  
     * /        
 # d e f i n e   A D C _ C O N V C Y C L E S _ M A X _ R A N G E ( _ _ H A N D L E _ _ )                                                                                                                                           \  
         ( (   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S M P R 2   &   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 2 B I T 2 )   = =   R E S E T )     & &                                           \  
               ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S M P R 1   &   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 1 B I T 2 )   = =   R E S E T )   )   ?                                           \  
                                                                                                                                                                                                                                   \  
                     ( (   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S M P R 2   &   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 2 B I T 1 )   = =   R E S E T )     & &                               \  
                           ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S M P R 1   &   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 1 B I T 1 )   = =   R E S E T )   )   ?                               \  
                               A D C _ C O N V E R S I O N C L O C K C Y C L E S _ S A M P L E T I M E _ 7 C Y C L E S 5   :   A D C _ C O N V E R S I O N C L O C K C Y C L E S _ S A M P L E T I M E _ 2 8 C Y C L E S 5 )       \  
                     :                                                                                                                                                                                                             \  
                     ( ( ( ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S M P R 2   &   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 2 B I T 1 )   = =   R E S E T )     & &                               \  
                           ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S M P R 1   &   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 1 B I T 1 )   = =   R E S E T ) )   | |                               \  
                         ( ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S M P R 2   &   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 1 B I T 0 )   = =   R E S E T )     & &                               \  
                           ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S M P R 1   &   A D C _ S A M P L E T I M E _ A L L C H A N N E L S _ S M P R 1 B I T 0 )   = =   R E S E T ) ) )   ?                               \  
                               A D C _ C O N V E R S I O N C L O C K C Y C L E S _ S A M P L E T I M E _ 7 1 C Y C L E S 5   :   A D C _ C O N V E R S I O N C L O C K C Y C L E S _ S A M P L E T I M E _ 2 3 9 C Y C L E S 5 )   \  
           )  
  
 # d e f i n e   I S _ A D C _ D A T A _ A L I G N ( A L I G N )   ( ( ( A L I G N )   = =   A D C _ D A T A A L I G N _ R I G H T )   | |   \  
                                                                     ( ( A L I G N )   = =   A D C _ D A T A A L I G N _ L E F T )         )  
  
 # d e f i n e   I S _ A D C _ S C A N _ M O D E ( S C A N _ M O D E )   ( ( ( S C A N _ M O D E )   = =   A D C _ S C A N _ D I S A B L E )   | |   \  
                                                                           ( ( S C A N _ M O D E )   = =   A D C _ S C A N _ E N A B L E )         )  
  
 # d e f i n e   I S _ A D C _ E X T T R I G _ E D G E ( E D G E )   ( ( ( E D G E )   = =   A D C _ E X T E R N A L T R I G C O N V E D G E _ N O N E )     | |   \  
                                                                       ( ( E D G E )   = =   A D C _ E X T E R N A L T R I G C O N V E D G E _ R I S I N G )     )  
  
 # d e f i n e   I S _ A D C _ C H A N N E L ( C H A N N E L )   ( ( ( C H A N N E L )   = =   A D C _ C H A N N E L _ 0 )                       | |   \  
                                                                   ( ( C H A N N E L )   = =   A D C _ C H A N N E L _ 1 )                       | |   \  
                                                                   ( ( C H A N N E L )   = =   A D C _ C H A N N E L _ 2 )                       | |   \  
                                                                   ( ( C H A N N E L )   = =   A D C _ C H A N N E L _ 3 )                       | |   \  
                                                                   ( ( C H A N N E L )   = =   A D C _ C H A N N E L _ 4 )                       | |   \  
                                                                   ( ( C H A N N E L )   = =   A D C _ C H A N N E L _ 5 )                       | |   \  
                                                                   ( ( C H A N N E L )   = =   A D C _ C H A N N E L _ 6 )                       | |   \  
                                                                   ( ( C H A N N E L )   = =   A D C _ C H A N N E L _ 7 )                       | |   \  
                                                                   ( ( C H A N N E L )   = =   A D C _ C H A N N E L _ 8 )                       | |   \  
                                                                   ( ( C H A N N E L )   = =   A D C _ C H A N N E L _ 9 )                       | |   \  
                                                                   ( ( C H A N N E L )   = =   A D C _ C H A N N E L _ 1 0 )                     | |   \  
                                                                   ( ( C H A N N E L )   = =   A D C _ C H A N N E L _ 1 1 )                     | |   \  
                                                                   ( ( C H A N N E L )   = =   A D C _ C H A N N E L _ 1 2 )                     | |   \  
                                                                   ( ( C H A N N E L )   = =   A D C _ C H A N N E L _ 1 3 )                     | |   \  
                                                                   ( ( C H A N N E L )   = =   A D C _ C H A N N E L _ 1 4 )                     | |   \  
                                                                   ( ( C H A N N E L )   = =   A D C _ C H A N N E L _ 1 5 )                     | |   \  
                                                                   ( ( C H A N N E L )   = =   A D C _ C H A N N E L _ 1 6 )                     | |   \  
                                                                   ( ( C H A N N E L )   = =   A D C _ C H A N N E L _ 1 7 )                         )  
  
 # d e f i n e   I S _ A D C _ S A M P L E _ T I M E ( T I M E )   ( ( ( T I M E )   = =   A D C _ S A M P L E T I M E _ 1 C Y C L E _ 5 )         | |   \  
                                                                     ( ( T I M E )   = =   A D C _ S A M P L E T I M E _ 7 C Y C L E S _ 5 )       | |   \  
                                                                     ( ( T I M E )   = =   A D C _ S A M P L E T I M E _ 1 3 C Y C L E S _ 5 )     | |   \  
                                                                     ( ( T I M E )   = =   A D C _ S A M P L E T I M E _ 2 8 C Y C L E S _ 5 )     | |   \  
                                                                     ( ( T I M E )   = =   A D C _ S A M P L E T I M E _ 4 1 C Y C L E S _ 5 )     | |   \  
                                                                     ( ( T I M E )   = =   A D C _ S A M P L E T I M E _ 5 5 C Y C L E S _ 5 )     | |   \  
                                                                     ( ( T I M E )   = =   A D C _ S A M P L E T I M E _ 7 1 C Y C L E S _ 5 )     | |   \  
                                                                     ( ( T I M E )   = =   A D C _ S A M P L E T I M E _ 2 3 9 C Y C L E S _ 5 )       )  
  
 # d e f i n e   I S _ A D C _ R E G U L A R _ R A N K ( C H A N N E L )   ( ( ( C H A N N E L )   = =   A D C _ R E G U L A R _ R A N K _ 1   )   | |   \  
                                                                             ( ( C H A N N E L )   = =   A D C _ R E G U L A R _ R A N K _ 2   )   | |   \  
                                                                             ( ( C H A N N E L )   = =   A D C _ R E G U L A R _ R A N K _ 3   )   | |   \  
                                                                             ( ( C H A N N E L )   = =   A D C _ R E G U L A R _ R A N K _ 4   )   | |   \  
                                                                             ( ( C H A N N E L )   = =   A D C _ R E G U L A R _ R A N K _ 5   )   | |   \  
                                                                             ( ( C H A N N E L )   = =   A D C _ R E G U L A R _ R A N K _ 6   )   | |   \  
                                                                             ( ( C H A N N E L )   = =   A D C _ R E G U L A R _ R A N K _ 7   )   | |   \  
                                                                             ( ( C H A N N E L )   = =   A D C _ R E G U L A R _ R A N K _ 8   )   | |   \  
                                                                             ( ( C H A N N E L )   = =   A D C _ R E G U L A R _ R A N K _ 9   )   | |   \  
                                                                             ( ( C H A N N E L )   = =   A D C _ R E G U L A R _ R A N K _ 1 0 )   | |   \  
                                                                             ( ( C H A N N E L )   = =   A D C _ R E G U L A R _ R A N K _ 1 1 )   | |   \  
                                                                             ( ( C H A N N E L )   = =   A D C _ R E G U L A R _ R A N K _ 1 2 )   | |   \  
                                                                             ( ( C H A N N E L )   = =   A D C _ R E G U L A R _ R A N K _ 1 3 )   | |   \  
                                                                             ( ( C H A N N E L )   = =   A D C _ R E G U L A R _ R A N K _ 1 4 )   | |   \  
                                                                             ( ( C H A N N E L )   = =   A D C _ R E G U L A R _ R A N K _ 1 5 )   | |   \  
                                                                             ( ( C H A N N E L )   = =   A D C _ R E G U L A R _ R A N K _ 1 6 )       )  
  
 # d e f i n e   I S _ A D C _ A N A L O G _ W A T C H D O G _ M O D E ( W A T C H D O G )   ( ( ( W A T C H D O G )   = =   A D C _ A N A L O G W A T C H D O G _ N O N E )                           | |   \  
                                                                                               ( ( W A T C H D O G )   = =   A D C _ A N A L O G W A T C H D O G _ S I N G L E _ R E G )               | |   \  
                                                                                               ( ( W A T C H D O G )   = =   A D C _ A N A L O G W A T C H D O G _ S I N G L E _ I N J E C )           | |   \  
                                                                                               ( ( W A T C H D O G )   = =   A D C _ A N A L O G W A T C H D O G _ S I N G L E _ R E G I N J E C )     | |   \  
                                                                                               ( ( W A T C H D O G )   = =   A D C _ A N A L O G W A T C H D O G _ A L L _ R E G )                     | |   \  
                                                                                               ( ( W A T C H D O G )   = =   A D C _ A N A L O G W A T C H D O G _ A L L _ I N J E C )                 | |   \  
                                                                                               ( ( W A T C H D O G )   = =   A D C _ A N A L O G W A T C H D O G _ A L L _ R E G I N J E C )               )  
  
 # d e f i n e   I S _ A D C _ C O N V E R S I O N _ G R O U P ( C O N V E R S I O N )   ( ( ( C O N V E R S I O N )   = =   A D C _ R E G U L A R _ G R O U P )                   | |   \  
                                                                                           ( ( C O N V E R S I O N )   = =   A D C _ I N J E C T E D _ G R O U P )                 | |   \  
                                                                                           ( ( C O N V E R S I O N )   = =   A D C _ R E G U L A R _ I N J E C T E D _ G R O U P )     )  
  
 # d e f i n e   I S _ A D C _ E V E N T _ T Y P E ( E V E N T )   ( ( E V E N T )   = =   A D C _ A W D _ E V E N T )  
  
  
 / * *   @ d e f g r o u p   A D C _ r a n g e _ v e r i f i c a t i o n   A D C   r a n g e   v e r i f i c a t i o n  
     *   F o r   a   u n i q u e   A D C   r e s o l u t i o n :   1 2   b i t s  
     *   @ {  
     * /  
 # d e f i n e   I S _ A D C _ R A N G E ( A D C _ V A L U E )   ( ( A D C _ V A L U E )   < =   0 x 0 F F F U )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ r e g u l a r _ n b _ c o n v _ v e r i f i c a t i o n   A D C   r e g u l a r   n b   c o n v   v e r i f i c a t i o n  
     *   @ {  
     * /  
 # d e f i n e   I S _ A D C _ R E G U L A R _ N B _ C O N V ( L E N G T H )   ( ( ( L E N G T H )   > =   1 U )   & &   ( ( L E N G T H )   < =   1 6 U ) )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ r e g u l a r _ d i s c o n t i n u o u s _ m o d e _ n u m b e r _ v e r i f i c a t i o n   A D C   r e g u l a r   d i s c o n t i n u o u s   m o d e   n u m b e r   v e r i f i c a t i o n  
     *   @ {  
     * /  
 # d e f i n e   I S _ A D C _ R E G U L A R _ D I S C O N T _ N U M B E R ( N U M B E R )   ( ( ( N U M B E R )   > =   1 U )   & &   ( ( N U M B E R )   < =   8 U ) )  
 / * *  
     *   @ }  
     * /  
              
 / * *  
     *   @ }  
     * /  
          
 / *   I n c l u d e   A D C   H A L   E x t e n s i o n   m o d u l e   * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ a d c _ e x . h "  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   A D C _ E x p o r t e d _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   A D C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1  
     *   @ {  
     * /  
  
  
 / *   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C _ I n i t ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C _ D e I n i t ( A D C _ H a n d l e T y p e D e f   * h a d c ) ;  
 v o i d                                         H A L _ A D C _ M s p I n i t ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
 v o i d                                         H A L _ A D C _ M s p D e I n i t ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
  
 # i f   ( U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / *   C a l l b a c k s   R e g i s t e r / U n R e g i s t e r   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C _ R e g i s t e r C a l l b a c k ( A D C _ H a n d l e T y p e D e f   * h a d c ,   H A L _ A D C _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,   p A D C _ C a l l b a c k T y p e D e f   p C a l l b a c k ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C _ U n R e g i s t e r C a l l b a c k ( A D C _ H a n d l e T y p e D e f   * h a d c ,   H A L _ A D C _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ) ;  
 # e n d i f   / *   U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   I O   o p e r a t i o n   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
  
 / * *   @ a d d t o g r o u p   A D C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2  
     *   @ {  
     * /  
  
  
 / *   B l o c k i n g   m o d e :   P o l l i n g   * /  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C _ S t a r t ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C _ S t o p ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C _ P o l l F o r C o n v e r s i o n ( A D C _ H a n d l e T y p e D e f *   h a d c ,   u i n t 3 2 _ t   T i m e o u t ) ;  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C _ P o l l F o r E v e n t ( A D C _ H a n d l e T y p e D e f *   h a d c ,   u i n t 3 2 _ t   E v e n t T y p e ,   u i n t 3 2 _ t   T i m e o u t ) ;  
  
 / *   N o n - b l o c k i n g   m o d e :   I n t e r r u p t i o n   * /  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C _ S t a r t _ I T ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C _ S t o p _ I T ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
  
 / *   N o n - b l o c k i n g   m o d e :   D M A   * /  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C _ S t a r t _ D M A ( A D C _ H a n d l e T y p e D e f *   h a d c ,   u i n t 3 2 _ t *   p D a t a ,   u i n t 3 2 _ t   L e n g t h ) ;  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C _ S t o p _ D M A ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
  
 / *   A D C   r e t r i e v e   c o n v e r s i o n   v a l u e   i n t e n d e d   t o   b e   u s e d   w i t h   p o l l i n g   o r   i n t e r r u p t i o n   * /  
 u i n t 3 2 _ t                                 H A L _ A D C _ G e t V a l u e ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
  
 / *   A D C   I R Q H a n d l e r   a n d   C a l l b a c k s   u s e d   i n   n o n - b l o c k i n g   m o d e s   ( I n t e r r u p t i o n   a n d   D M A )   * /  
 v o i d                                         H A L _ A D C _ I R Q H a n d l e r ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
 v o i d                                         H A L _ A D C _ C o n v C p l t C a l l b a c k ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
 v o i d                                         H A L _ A D C _ C o n v H a l f C p l t C a l l b a c k ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
 v o i d                                         H A L _ A D C _ L e v e l O u t O f W i n d o w C a l l b a c k ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
 v o i d                                         H A L _ A D C _ E r r o r C a l l b a c k ( A D C _ H a n d l e T y p e D e f   * h a d c ) ;  
 / * *  
     *   @ }  
     * /  
  
  
 / *   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / * *   @ a d d t o g r o u p   A D C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3  
     *   @ {  
     * /  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C _ C o n f i g C h a n n e l ( A D C _ H a n d l e T y p e D e f *   h a d c ,   A D C _ C h a n n e l C o n f T y p e D e f *   s C o n f i g ) ;  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C _ A n a l o g W D G C o n f i g ( A D C _ H a n d l e T y p e D e f *   h a d c ,   A D C _ A n a l o g W D G C o n f T y p e D e f *   A n a l o g W D G C o n f i g ) ;  
 / * *  
     *   @ }  
     * /  
  
  
 / *   P e r i p h e r a l   S t a t e   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / * *   @ a d d t o g r o u p   A D C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4  
     *   @ {  
     * /  
 u i n t 3 2 _ t                                 H A L _ A D C _ G e t S t a t e ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
 u i n t 3 2 _ t                                 H A L _ A D C _ G e t E r r o r ( A D C _ H a n d l e T y p e D e f   * h a d c ) ;  
 / * *  
     *   @ }  
     * /  
  
  
 / * *  
     *   @ }  
     * /  
  
  
 / *   I n t e r n a l   H A L   d r i v e r   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / * *   @ a d d t o g r o u p   A D C _ P r i v a t e _ F u n c t i o n s  
     *   @ {  
     * /  
 H A L _ S t a t u s T y p e D e f   A D C _ E n a b l e ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
 H A L _ S t a t u s T y p e D e f   A D C _ C o n v e r s i o n S t o p _ D i s a b l e ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
 v o i d                             A D C _ S t a b i l i z a t i o n T i m e ( u i n t 3 2 _ t   D e l a y U s ) ;  
 v o i d                             A D C _ D M A C o n v C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 v o i d                             A D C _ D M A H a l f C o n v C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 v o i d                             A D C _ D M A E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 / * *  
     *   @ }  
     * /    
  
  
 / * *  
     *   @ }  
     * /    
  
 / * *  
     *   @ }  
     * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
  
 # e n d i f   / *   _ _ S T M 3 2 F 1 x x _ H A L _ A D C _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  