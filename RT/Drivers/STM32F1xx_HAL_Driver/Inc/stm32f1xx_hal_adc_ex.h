??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ a d c _ e x . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   A D C   H A L   e x t e n s i o n   m o d u l e .  
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
 / *   D e f i n e   t o   p r e v e n t   r e c u r s i v e   i n c l u s i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ H A L _ A D C _ E X _ H  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ H A L _ A D C _ E X _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
   e x t e r n   " C "   {  
 # e n d i f  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ d e f . h "      
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   A D C E x  
     *   @ {  
     * /    
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /    
 / * *   @ d e f g r o u p   A D C E x _ E x p o r t e d _ T y p e s   A D C E x   E x p o r t e d   T y p e s  
     *   @ {  
     * /  
  
 / * *    
     *   @ b r i e f     A D C   C o n f i g u r a t i o n   i n j e c t e d   C h a n n e l   s t r u c t u r e   d e f i n i t i o n  
     *   @ n o t e       P a r a m e t e r s   o f   t h i s   s t r u c t u r e   a r e   s h a r e d   w i t h i n   2   s c o p e s :  
     *                     -   S c o p e   c h a n n e l :   I n j e c t e d C h a n n e l ,   I n j e c t e d R a n k ,   I n j e c t e d S a m p l i n g T i m e ,   I n j e c t e d O f f s e t  
     *                     -   S c o p e   i n j e c t e d   g r o u p   ( a f f e c t s   a l l   c h a n n e l s   o f   i n j e c t e d   g r o u p ) :   I n j e c t e d N b r O f C o n v e r s i o n ,   I n j e c t e d D i s c o n t i n u o u s C o n v M o d e ,  
     *                         A u t o I n j e c t e d C o n v ,   E x t e r n a l T r i g I n j e c C o n v E d g e ,   E x t e r n a l T r i g I n j e c C o n v .  
     *   @ n o t e       T h e   s e t t i n g   o f   t h e s e   p a r a m e t e r s   w i t h   f u n c t i o n   H A L _ A D C E x _ I n j e c t e d C o n f i g C h a n n e l ( )   i s   c o n d i t i o n e d   t o   A D C   s t a t e .  
     *                   A D C   s t a t e   c a n   b e   e i t h e r :  
     *                     -   F o r   a l l   p a r a m e t e r s :   A D C   d i s a b l e d   ( t h i s   i s   t h e   o n l y   p o s s i b l e   A D C   s t a t e   t o   m o d i f y   p a r a m e t e r   ' E x t e r n a l T r i g I n j e c C o n v ' )  
     *                     -   F o r   a l l   e x c e p t   p a r a m e t e r s   ' E x t e r n a l T r i g I n j e c C o n v ' :   A D C   e n a b l e d   w i t h o u t   c o n v e r s i o n   o n   g o i n g   o n   i n j e c t e d   g r o u p .  
     * /  
 t y p e d e f   s t r u c t    
 {  
     u i n t 3 2 _ t   I n j e c t e d C h a n n e l ;                                               / * ! <   S e l e c t i o n   o f   A D C   c h a n n e l   t o   c o n f i g u r e  
                                                                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ c h a n n e l s  
                                                                                                               N o t e :   D e p e n d i n g   o n   d e v i c e s ,   s o m e   c h a n n e l s   m a y   n o t   b e   a v a i l a b l e   o n   p a c k a g e   p i n s .   R e f e r   t o   d e v i c e   d a t a s h e e t   f o r   c h a n n e l s   a v a i l a b i l i t y .  
                                                                                                               N o t e :   O n   S T M 3 2 F 1   d e v i c e s   w i t h   s e v e r a l   A D C :   O n l y   A D C 1   c a n   a c c e s s   i n t e r n a l   m e a s u r e m e n t   c h a n n e l s   ( V r e f I n t / T e m p S e n s o r )  
                                                                                                               N o t e :   O n   S T M 3 2 F 1 0 x x 8   a n d   S T M 3 2 F 1 0 x x B   d e v i c e s :   A   l o w - a m p l i t u d e   v o l t a g e   g l i t c h   m a y   b e   g e n e r a t e d   ( o n   A D C   i n p u t   0 )   o n   t h e   P A 0   p i n ,   w h e n   t h e   A D C   i s   c o n v e r t i n g   w i t h   i n j e c t i o n   t r i g g e r .  
                                                                                                                           I t   i s   a d v i s e d   t o   d i s t r i b u t e   t h e   a n a l o g   c h a n n e l s   s o   t h a t   C h a n n e l   0   i s   c o n f i g u r e d   a s   a n   i n j e c t e d   c h a n n e l .  
                                                                                                                           R e f e r   t o   e r r a t a   s h e e t   o f   t h e s e   d e v i c e s   f o r   m o r e   d e t a i l s .   * /  
     u i n t 3 2 _ t   I n j e c t e d R a n k ;                                                     / * ! <   R a n k   i n   t h e   i n j e c t e d   g r o u p   s e q u e n c e r  
                                                                                                               T h i s   p a r a m e t e r   m u s t   b e   a   v a l u e   o f   @ r e f   A D C E x _ i n j e c t e d _ r a n k  
                                                                                                               N o t e :   I n   c a s e   o f   n e e d   t o   d i s a b l e   a   c h a n n e l   o r   c h a n g e   o r d e r   o f   c o n v e r s i o n   s e q u e n c e r ,   r a n k   c o n t a i n i n g   a   p r e v i o u s   c h a n n e l   s e t t i n g   c a n   b e   o v e r w r i t t e n   b y   t h e   n e w   c h a n n e l   s e t t i n g   ( o r   p a r a m e t e r   n u m b e r   o f   c o n v e r s i o n s   c a n   b e   a d j u s t e d )   * /  
     u i n t 3 2 _ t   I n j e c t e d S a m p l i n g T i m e ;                                     / * ! <   S a m p l i n g   t i m e   v a l u e   t o   b e   s e t   f o r   t h e   s e l e c t e d   c h a n n e l .  
                                                                                                               U n i t :   A D C   c l o c k   c y c l e s  
                                                                                                               C o n v e r s i o n   t i m e   i s   t h e   a d d i t i o n   o f   s a m p l i n g   t i m e   a n d   p r o c e s s i n g   t i m e   ( 1 2 . 5   A D C   c l o c k   c y c l e s   a t   A D C   r e s o l u t i o n   1 2   b i t s ) .  
                                                                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ s a m p l i n g _ t i m e s  
                                                                                                               C a u t i o n :   T h i s   p a r a m e t e r   u p d a t e s   t h e   p a r a m e t e r   p r o p e r t y   o f   t h e   c h a n n e l ,   t h a t   c a n   b e   u s e d   i n t o   r e g u l a r   a n d / o r   i n j e c t e d   g r o u p s .  
                                                                                                                                 I f   t h i s   s a m e   c h a n n e l   h a s   b e e n   p r e v i o u s l y   c o n f i g u r e d   i n   t h e   o t h e r   g r o u p   ( r e g u l a r / i n j e c t e d ) ,   i t   w i l l   b e   u p d a t e d   t o   l a s t   s e t t i n g .  
                                                                                                               N o t e :   I n   c a s e   o f   u s a g e   o f   i n t e r n a l   m e a s u r e m e n t   c h a n n e l s   ( V r e f I n t / T e m p S e n s o r ) ,  
                                                                                                                           s a m p l i n g   t i m e   c o n s t r a i n t s   m u s t   b e   r e s p e c t e d   ( s a m p l i n g   t i m e   c a n   b e   a d j u s t e d   i n   f u n c t i o n   o f   A D C   c l o c k   f r e q u e n c y   a n d   s a m p l i n g   t i m e   s e t t i n g )  
                                                                                                                           R e f e r   t o   d e v i c e   d a t a s h e e t   f o r   t i m i n g s   v a l u e s ,   p a r a m e t e r s   T S _ v r e f i n t ,   T S _ t e m p   ( v a l u e s   r o u g h   o r d e r :   5 u s   t o   1 7 . 1 u s   m i n ) .   * /  
     u i n t 3 2 _ t   I n j e c t e d O f f s e t ;                                                 / * ! <   D e f i n e s   t h e   o f f s e t   t o   b e   s u b t r a c t e d   f r o m   t h e   r a w   c o n v e r t e d   d a t a   ( f o r   c h a n n e l s   s e t   o n   i n j e c t e d   g r o u p   o n l y ) .  
                                                                                                               O f f s e t   v a l u e   m u s t   b e   a   p o s i t i v e   n u m b e r .  
                                                                                                               D e p e n d i n g   o f   A D C   r e s o l u t i o n   s e l e c t e d   ( 1 2 ,   1 0 ,   8   o r   6   b i t s ) ,  
                                                                                                               t h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0 0   a n d   M a x _ D a t a   =   0 x F F F ,   0 x 3 F F ,   0 x F F   o r   0 x 3 F   r e s p e c t i v e l y .   * /  
     u i n t 3 2 _ t   I n j e c t e d N b r O f C o n v e r s i o n ;                               / * ! <   S p e c i f i e s   t h e   n u m b e r   o f   r a n k s   t h a t   w i l l   b e   c o n v e r t e d   w i t h i n   t h e   i n j e c t e d   g r o u p   s e q u e n c e r .  
                                                                                                               T o   u s e   t h e   i n j e c t e d   g r o u p   s e q u e n c e r   a n d   c o n v e r t   s e v e r a l   r a n k s ,   p a r a m e t e r   ' S c a n C o n v M o d e '   m u s t   b e   e n a b l e d .  
                                                                                                               T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   1   a n d   M a x _ D a t a   =   4 .  
                                                                                                               C a u t i o n :   t h i s   s e t t i n g   i m p a c t s   t h e   e n t i r e   i n j e c t e d   g r o u p .   T h e r e f o r e ,   c a l l   o f   H A L _ A D C E x _ I n j e c t e d C o n f i g C h a n n e l ( )   t o  
                                                                                                                                 c o n f i g u r e   a   c h a n n e l   o n   i n j e c t e d   g r o u p   c a n   i m p a c t   t h e   c o n f i g u r a t i o n   o f   o t h e r   c h a n n e l s   p r e v i o u s l y   s e t .   * /  
     F u n c t i o n a l S t a t e   I n j e c t e d D i s c o n t i n u o u s C o n v M o d e ;     / * ! <   S p e c i f i e s   w h e t h e r   t h e   c o n v e r s i o n s   s e q u e n c e   o f   i n j e c t e d   g r o u p   i s   p e r f o r m e d   i n   C o m p l e t e - s e q u e n c e / D i s c o n t i n u o u s - s e q u e n c e   ( m a i n   s e q u e n c e   s u b d i v i d e d   i n   s u c c e s s i v e   p a r t s ) .  
                                                                                                               D i s c o n t i n u o u s   m o d e   i s   u s e d   o n l y   i f   s e q u e n c e r   i s   e n a b l e d   ( p a r a m e t e r   ' S c a n C o n v M o d e ' ) .   I f   s e q u e n c e r   i s   d i s a b l e d ,   t h i s   p a r a m e t e r   i s   d i s c a r d e d .  
                                                                                                               D i s c o n t i n u o u s   m o d e   c a n   b e   e n a b l e d   o n l y   i f   c o n t i n u o u s   m o d e   i s   d i s a b l e d .   I f   c o n t i n u o u s   m o d e   i s   e n a b l e d ,   t h i s   p a r a m e t e r   s e t t i n g   i s   d i s c a r d e d .  
                                                                                                               T h i s   p a r a m e t e r   c a n   b e   s e t   t o   E N A B L E   o r   D I S A B L E .  
                                                                                                               N o t e :   F o r   i n j e c t e d   g r o u p ,   n u m b e r   o f   d i s c o n t i n u o u s   r a n k s   i n c r e m e n t   i s   f i x e d   t o   o n e - b y - o n e .  
                                                                                                               C a u t i o n :   t h i s   s e t t i n g   i m p a c t s   t h e   e n t i r e   i n j e c t e d   g r o u p .   T h e r e f o r e ,   c a l l   o f   H A L _ A D C E x _ I n j e c t e d C o n f i g C h a n n e l ( )   t o  
                                                                                                                                 c o n f i g u r e   a   c h a n n e l   o n   i n j e c t e d   g r o u p   c a n   i m p a c t   t h e   c o n f i g u r a t i o n   o f   o t h e r   c h a n n e l s   p r e v i o u s l y   s e t .   * /  
     F u n c t i o n a l S t a t e   A u t o I n j e c t e d C o n v ;                               / * ! <   E n a b l e s   o r   d i s a b l e s   t h e   s e l e c t e d   A D C   a u t o m a t i c   i n j e c t e d   g r o u p   c o n v e r s i o n   a f t e r   r e g u l a r   o n e  
                                                                                                               T h i s   p a r a m e t e r   c a n   b e   s e t   t o   E N A B L E   o r   D I S A B L E .  
                                                                                                               N o t e :   T o   u s e   A u t o m a t i c   i n j e c t e d   c o n v e r s i o n ,   d i s c o n t i n u o u s   m o d e   m u s t   b e   d i s a b l e d   ( ' D i s c o n t i n u o u s C o n v M o d e '   a n d   ' I n j e c t e d D i s c o n t i n u o u s C o n v M o d e '   s e t   t o   D I S A B L E )  
                                                                                                               N o t e :   T o   u s e   A u t o m a t i c   i n j e c t e d   c o n v e r s i o n ,   i n j e c t e d   g r o u p   e x t e r n a l   t r i g g e r s   m u s t   b e   d i s a b l e d   ( ' E x t e r n a l T r i g I n j e c C o n v '   s e t   t o   A D C _ S O F T W A R E _ S T A R T )  
                                                                                                               N o t e :   I n   c a s e   o f   D M A   u s e d   w i t h   r e g u l a r   g r o u p :   i f   D M A   c o n f i g u r e d   i n   n o r m a l   m o d e   ( s i n g l e   s h o t )   J A U T O   w i l l   b e   s t o p p e d   u p o n   D M A   t r a n s f e r   c o m p l e t e .  
                                                                                                                           T o   m a i n t a i n   J A U T O   a l w a y s   e n a b l e d ,   D M A   m u s t   b e   c o n f i g u r e d   i n   c i r c u l a r   m o d e .  
                                                                                                               C a u t i o n :   t h i s   s e t t i n g   i m p a c t s   t h e   e n t i r e   i n j e c t e d   g r o u p .   T h e r e f o r e ,   c a l l   o f   H A L _ A D C E x _ I n j e c t e d C o n f i g C h a n n e l ( )   t o  
                                                                                                                                 c o n f i g u r e   a   c h a n n e l   o n   i n j e c t e d   g r o u p   c a n   i m p a c t   t h e   c o n f i g u r a t i o n   o f   o t h e r   c h a n n e l s   p r e v i o u s l y   s e t .   * /  
     u i n t 3 2 _ t   E x t e r n a l T r i g I n j e c C o n v ;                                   / * ! <   S e l e c t s   t h e   e x t e r n a l   e v e n t   u s e d   t o   t r i g g e r   t h e   c o n v e r s i o n   s t a r t   o f   i n j e c t e d   g r o u p .  
                                                                                                               I f   s e t   t o   A D C _ I N J E C T E D _ S O F T W A R E _ S T A R T ,   e x t e r n a l   t r i g g e r s   a r e   d i s a b l e d .  
                                                                                                               I f   s e t   t o   e x t e r n a l   t r i g g e r   s o u r c e ,   t r i g g e r i n g   i s   o n   e v e n t   r i s i n g   e d g e .  
                                                                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C E x _ E x t e r n a l _ t r i g g e r _ s o u r c e _ I n j e c t e d  
                                                                                                               N o t e :   T h i s   p a r a m e t e r   m u s t   b e   m o d i f i e d   w h e n   A D C   i s   d i s a b l e d   ( b e f o r e   A D C   s t a r t   c o n v e r s i o n   o r   a f t e r   A D C   s t o p   c o n v e r s i o n ) .  
                                                                                                                           I f   A D C   i s   e n a b l e d ,   t h i s   p a r a m e t e r   s e t t i n g   i s   b y p a s s e d   w i t h o u t   e r r o r   r e p o r t i n g   ( a s   i t   c a n   b e   t h e   e x p e c t e d   b e h a v i o u r   i n   c a s e   o f   a n o t h e r   p a r a m e t e r   u p d a t e   o n   t h e   f l y )  
                                                                                                               C a u t i o n :   t h i s   s e t t i n g   i m p a c t s   t h e   e n t i r e   i n j e c t e d   g r o u p .   T h e r e f o r e ,   c a l l   o f   H A L _ A D C E x _ I n j e c t e d C o n f i g C h a n n e l ( )   t o  
                                                                                                                                 c o n f i g u r e   a   c h a n n e l   o n   i n j e c t e d   g r o u p   c a n   i m p a c t   t h e   c o n f i g u r a t i o n   o f   o t h e r   c h a n n e l s   p r e v i o u s l y   s e t .   * /  
 } A D C _ I n j e c t i o n C o n f T y p e D e f ;  
  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x 6 )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 7 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 / * *    
     *   @ b r i e f     S t r u c t u r e   d e f i n i t i o n   o f   A D C   m u l t i m o d e  
     *   @ n o t e       T h e   s e t t i n g   o f   t h e s e   p a r a m e t e r s   w i t h   f u n c t i o n   H A L _ A D C E x _ M u l t i M o d e C o n f i g C h a n n e l ( )   i s   c o n d i t i o n e d   t o   A D C s   s t a t e   ( b o t h   A D C s   o f   t h e   c o m m o n   g r o u p ) .  
     *                   S t a t e   o f   A D C s   o f   t h e   c o m m o n   g r o u p   m u s t   b e :   d i s a b l e d .  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   M o d e ;                             / * ! <   C o n f i g u r e s   t h e   A D C   t o   o p e r a t e   i n   i n d e p e n d e n t   o r   m u l t i   m o d e .    
                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C E x _ C o m m o n _ m o d e  
                                                                       N o t e :   I n   d u a l   m o d e ,   a   c h a n g e   o f   c h a n n e l   c o n f i g u r a t i o n   g e n e r a t e s   a   r e s t a r t   t h a t   c a n   p r o d u c e   a   l o s s   o f   s y n c h r o n i z a t i o n .   I t   i s   r e c o m m e n d e d   t o   d i s a b l e   d u a l   m o d e   b e f o r e   a n y   c o n f i g u r a t i o n   c h a n g e .  
                                                                       N o t e :   I n   c a s e   o f   s i m u l t a n e o u s   m o d e   u s e d :   E x a c t l y   t h e   s a m e   s a m p l i n g   t i m e   s h o u l d   b e   c o n f i g u r e d   f o r   t h e   2   c h a n n e l s   t h a t   w i l l   b e   s a m p l e d   s i m u l t a n e o u s l y   b y   A C D 1   a n d   A D C 2 .  
                                                                       N o t e :   I n   c a s e   o f   i n t e r l e a v e d   m o d e   u s e d :   T o   a v o i d   o v e r l a p   b e t w e e n   c o n v e r s i o n s ,   m a x i m u m   s a m p l i n g   t i m e   a l l o w e d   i s   7   A D C   c l o c k   c y c l e s   f o r   f a s t   i n t e r l e a v e d   m o d e   a n d   1 4   A D C   c l o c k   c y c l e s   f o r   s l o w   i n t e r l e a v e d   m o d e .  
                                                                       N o t e :   S o m e   m u l t i m o d e   p a r a m e t e r s   a r e   f i x e d   o n   S T M 3 2 F 1   a n d   c a n   b e   c o n f i g u r e d   o n   o t h e r   S T M 3 2   d e v i c e s   w i t h   s e v e r a l   A D C   ( m u l t i m o d e   c o n f i g u r a t i o n   s t r u c t u r e   c a n   h a v e   a d d i t i o n a l   p a r a m e t e r s ) .  
                                                                                   T h e   e q u i v a l e n c e s   a r e :  
                                                                                       -   P a r a m e t e r   ' D M A A c c e s s M o d e ' :   O n   S T M 3 2 F 1 ,   t h i s   p a r a m e t e r   i s   f i x e d   t o   1   D M A   c h a n n e l   ( o n e   D M A   c h a n n e l   f o r   b o t h   A D C ,   D M A   o f   A D C   m a s t e r ) .   O n   o t h e r   S T M 3 2   d e v i c e s   w i t h   s e v e r a l   A D C ,   t h i s   i s   e q u i v a l e n t   t o   p a r a m e t e r   ' A D C _ D M A A C C E S S M O D E _ 1 2 _ 1 0 _ B I T S ' .  
                                                                                       -   P a r a m e t e r   ' T w o S a m p l i n g D e l a y ' :   O n   S T M 3 2 F 1 ,   t h i s   p a r a m e t e r   i s   f i x e d   t o   7   o r   1 4   A D C   c l o c k   c y c l e s   d e p e n d i n g   o n   f a s t   o r   s l o w   i n t e r l e a v e d   m o d e   s e l e c t e d .   O n   o t h e r   S T M 3 2   d e v i c e s   w i t h   s e v e r a l   A D C ,   t h i s   i s   e q u i v a l e n t   t o   p a r a m e t e r   ' A D C _ T W O S A M P L I N G D E L A Y _ 7 C Y C L E S '   ( f o r   f a s t   i n t e r l e a v e d   m o d e ) .   * /  
  
      
 } A D C _ M u l t i M o d e T y p e D e f ;                                                                                                                      
 # e n d i f   / *   d e f i n e d   S T M 3 2 F 1 0 3 x 6   | |   d e f i n e d   S T M 3 2 F 1 0 3 x B   | |   d e f i n e d   S T M 3 2 F 1 0 5 x C   | |   d e f i n e d   S T M 3 2 F 1 0 7 x C   | |   d e f i n e d   S T M 3 2 F 1 0 3 x E   | |   d e f i n e d   S T M 3 2 F 1 0 3 x G   * /  
  
 / * *  
     *   @ }  
     * /  
  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
        
 / * *   @ d e f g r o u p   A D C E x _ E x p o r t e d _ C o n s t a n t s   A D C E x   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   A D C E x _ i n j e c t e d _ r a n k   A D C E x   r a n k   i n t o   i n j e c t e d   g r o u p  
     *   @ {  
     * /  
 # d e f i n e   A D C _ I N J E C T E D _ R A N K _ 1                                                       0 x 0 0 0 0 0 0 0 1 U  
 # d e f i n e   A D C _ I N J E C T E D _ R A N K _ 2                                                       0 x 0 0 0 0 0 0 0 2 U  
 # d e f i n e   A D C _ I N J E C T E D _ R A N K _ 3                                                       0 x 0 0 0 0 0 0 0 3 U  
 # d e f i n e   A D C _ I N J E C T E D _ R A N K _ 4                                                       0 x 0 0 0 0 0 0 0 4 U  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C E x _ E x t e r n a l _ t r i g g e r _ e d g e _ I n j e c t e d   A D C E x   e x t e r n a l   t r i g g e r   e n a b l e   f o r   i n j e c t e d   g r o u p  
     *   @ {  
     * /  
 # d e f i n e   A D C _ E X T E R N A L T R I G I N J E C C O N V _ E D G E _ N O N E                       0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   A D C _ E X T E R N A L T R I G I N J E C C O N V _ E D G E _ R I S I N G                   ( ( u i n t 3 2 _ t ) A D C _ C R 2 _ J E X T T R I G )  
 / * *  
     *   @ }  
     * /  
          
 / * *   @ d e f g r o u p   A D C _ E x t e r n a l _ t r i g g e r _ s o u r c e _ R e g u l a r   A D C   E x t e r n a l   t r i g g e r   s e l e c t i o n   f o r   r e g u l a r   g r o u p  
     *   @ {  
     * /  
 / * ! <   L i s t   o f   e x t e r n a l   t r i g g e r s   w i t h   g e n e r i c   t r i g g e r   n a m e ,   i n d e p e n d e n t l y   o f         * /  
 / *   A D C   t a r g e t ,   s o r t e d   b y   t r i g g e r   n a m e :                                                                                 * /  
  
 / * ! <   E x t e r n a l   t r i g g e r s   o f   r e g u l a r   g r o u p   f o r   A D C 1 & A D C 2   o n l y   * /  
 # d e f i n e   A D C _ E X T E R N A L T R I G C O N V _ T 1 _ C C 1                   A D C 1 _ 2 _ E X T E R N A L T R I G _ T 1 _ C C 1  
 # d e f i n e   A D C _ E X T E R N A L T R I G C O N V _ T 1 _ C C 2                   A D C 1 _ 2 _ E X T E R N A L T R I G _ T 1 _ C C 2  
 # d e f i n e   A D C _ E X T E R N A L T R I G C O N V _ T 2 _ C C 2                   A D C 1 _ 2 _ E X T E R N A L T R I G _ T 2 _ C C 2  
 # d e f i n e   A D C _ E X T E R N A L T R I G C O N V _ T 3 _ T R G O                 A D C 1 _ 2 _ E X T E R N A L T R I G _ T 3 _ T R G O  
 # d e f i n e   A D C _ E X T E R N A L T R I G C O N V _ T 4 _ C C 4                   A D C 1 _ 2 _ E X T E R N A L T R I G _ T 4 _ C C 4  
 # d e f i n e   A D C _ E X T E R N A L T R I G C O N V _ E X T _ I T 1 1               A D C 1 _ 2 _ E X T E R N A L T R I G _ E X T _ I T 1 1  
  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 / * ! <   E x t e r n a l   t r i g g e r s   o f   r e g u l a r   g r o u p   f o r   A D C 3   o n l y   * /  
 # d e f i n e   A D C _ E X T E R N A L T R I G C O N V _ T 2 _ C C 3                   A D C 3 _ E X T E R N A L T R I G _ T 2 _ C C 3  
 # d e f i n e   A D C _ E X T E R N A L T R I G C O N V _ T 3 _ C C 1                   A D C 3 _ E X T E R N A L T R I G _ T 3 _ C C 1  
 # d e f i n e   A D C _ E X T E R N A L T R I G C O N V _ T 5 _ C C 1                   A D C 3 _ E X T E R N A L T R I G _ T 5 _ C C 1  
 # d e f i n e   A D C _ E X T E R N A L T R I G C O N V _ T 5 _ C C 3                   A D C 3 _ E X T E R N A L T R I G _ T 5 _ C C 3  
 # d e f i n e   A D C _ E X T E R N A L T R I G C O N V _ T 8 _ C C 1                   A D C 3 _ E X T E R N A L T R I G _ T 8 _ C C 1  
 # e n d i f   / *   S T M 3 2 F 1 0 3 x E   | |   d e f i n e d   S T M 3 2 F 1 0 3 x G   * /  
  
 / * ! <   E x t e r n a l   t r i g g e r s   o f   r e g u l a r   g r o u p   f o r   a l l   A D C   i n s t a n c e s   * /  
 # d e f i n e   A D C _ E X T E R N A L T R I G C O N V _ T 1 _ C C 3                   A D C 1 _ 2 _ 3 _ E X T E R N A L T R I G _ T 1 _ C C 3  
  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 1 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )   | |   d e f i n e d   ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 7 x C )  
 / * ! <   N o t e :   T I M 8 _ T R G O   i s   a v a i l a b l e   o n   A D C 1   a n d   A D C 2   o n l y   i n   h i g h - d e n s i t y   a n d       * /  
 / *                   X L - d e n s i t y   d e v i c e s .                                                                                                 * /  
 / *                   T o   u s e   i t   o n   A D C   o r   A D C 2 ,   a   r e m a p   o f   t r i g g e r   m u s t   b e   d o n e   f r o m           * /  
 / *                   E X T I   l i n e   1 1   t o   T I M 8 _ T R G O   w i t h   m a c r o :                                                             * /  
 / *                       _ _ H A L _ A F I O _ R E M A P _ A D C 1 _ E T R G R E G _ E N A B L E ( )                                                       * /  
 / *                       _ _ H A L _ A F I O _ R E M A P _ A D C 2 _ E T R G R E G _ E N A B L E ( )                                                       * /  
  
 / *   N o t e   f o r   i n t e r n a l   c o n s t a n t   v a l u e   m a n a g e m e n t :   I f   T I M 8 _ T R G O   i s   a v a i l a b l e ,         * /  
 / *   i t s   d e f i n i t i o n   i s   s e t   t o   v a l u e   f o r   A D C 1 & A D C 2   b y   d e f a u l t   a n d   c h a n g e d   t o           * /  
 / *   v a l u e   f o r   A D C 3   b y   H A L   A D C   d r i v e r   i f   A D C 3   i s   s e l e c t e d .                                             * /  
 # d e f i n e   A D C _ E X T E R N A L T R I G C O N V _ T 8 _ T R G O                 A D C 1 _ 2 _ E X T E R N A L T R I G _ T 8 _ T R G O  
 # e n d i f   / *   S T M 3 2 F 1 0 1 x E   | |   S T M 3 2 F 1 0 3 x E   | |   S T M 3 2 F 1 0 3 x G   | |   S T M 3 2 F 1 0 5 x C   | |   S T M 3 2 F 1 0 7 x C   * /  
  
 # d e f i n e   A D C _ S O F T W A R E _ S T A R T                                     A D C 1 _ 2 _ 3 _ S W S T A R T  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C E x _ E x t e r n a l _ t r i g g e r _ s o u r c e _ I n j e c t e d   A D C E x   E x t e r n a l   t r i g g e r   s e l e c t i o n   f o r   i n j e c t e d   g r o u p  
     *   @ {  
     * /  
 / * ! <   L i s t   o f   e x t e r n a l   t r i g g e r s   w i t h   g e n e r i c   t r i g g e r   n a m e ,   i n d e p e n d e n t l y   o f         * /  
 / *   A D C   t a r g e t ,   s o r t e d   b y   t r i g g e r   n a m e :                                                                                 * /  
  
 / * ! <   E x t e r n a l   t r i g g e r s   o f   i n j e c t e d   g r o u p   f o r   A D C 1 & A D C 2   o n l y   * /  
 # d e f i n e   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 2 _ T R G O                 A D C 1 _ 2 _ E X T E R N A L T R I G I N J E C _ T 2 _ T R G O  
 # d e f i n e   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 2 _ C C 1                   A D C 1 _ 2 _ E X T E R N A L T R I G I N J E C _ T 2 _ C C 1  
 # d e f i n e   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 3 _ C C 4                   A D C 1 _ 2 _ E X T E R N A L T R I G I N J E C _ T 3 _ C C 4  
 # d e f i n e   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 4 _ T R G O                 A D C 1 _ 2 _ E X T E R N A L T R I G I N J E C _ T 4 _ T R G O    
 # d e f i n e   A D C _ E X T E R N A L T R I G I N J E C C O N V _ E X T _ I T 1 5               A D C 1 _ 2 _ E X T E R N A L T R I G I N J E C _ E X T _ I T 1 5  
  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 / * ! <   E x t e r n a l   t r i g g e r s   o f   i n j e c t e d   g r o u p   f o r   A D C 3   o n l y   * /  
 # d e f i n e   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 4 _ C C 3                   A D C 3 _ E X T E R N A L T R I G I N J E C _ T 4 _ C C 3  
 # d e f i n e   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 8 _ C C 2                   A D C 3 _ E X T E R N A L T R I G I N J E C _ T 8 _ C C 2  
 # d e f i n e   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 5 _ T R G O                 A D C 3 _ E X T E R N A L T R I G I N J E C _ T 5 _ T R G O  
 # d e f i n e   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 5 _ C C 4                   A D C 3 _ E X T E R N A L T R I G I N J E C _ T 5 _ C C 4  
 # e n d i f   / *   S T M 3 2 F 1 0 3 x E   | |   d e f i n e d   S T M 3 2 F 1 0 3 x G   * /  
  
 / * ! <   E x t e r n a l   t r i g g e r s   o f   i n j e c t e d   g r o u p   f o r   a l l   A D C   i n s t a n c e s   * /  
 # d e f i n e   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 1 _ C C 4                   A D C 1 _ 2 _ 3 _ E X T E R N A L T R I G I N J E C _ T 1 _ C C 4  
 # d e f i n e   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 1 _ T R G O                 A D C 1 _ 2 _ 3 _ E X T E R N A L T R I G I N J E C _ T 1 _ T R G O  
  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 1 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )   | |   d e f i n e d   ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 7 x C )  
 / * ! <   N o t e :   T I M 8 _ C C 4   i s   a v a i l a b l e   o n   A D C 1   a n d   A D C 2   o n l y   i n   h i g h - d e n s i t y   a n d         * /  
 / *                   X L - d e n s i t y   d e v i c e s .                                                                                                 * /  
 / *                   T o   u s e   i t   o n   A D C 1   o r   A D C 2 ,   a   r e m a p   o f   t r i g g e r   m u s t   b e   d o n e   f r o m         * /  
 / *                   E X T I   l i n e   1 1   t o   T I M 8 _ C C 4   w i t h   m a c r o :                                                               * /  
 / *                       _ _ H A L _ A F I O _ R E M A P _ A D C 1 _ E T R G I N J _ E N A B L E ( )                                                       * /  
 / *                       _ _ H A L _ A F I O _ R E M A P _ A D C 2 _ E T R G I N J _ E N A B L E ( )                                                       * /  
  
 / *   N o t e   f o r   i n t e r n a l   c o n s t a n t   v a l u e   m a n a g e m e n t :   I f   T I M 8 _ C C 4   i s   a v a i l a b l e ,           * /  
 / *   i t s   d e f i n i t i o n   i s   s e t   t o   v a l u e   f o r   A D C 1 & A D C 2   b y   d e f a u l t   a n d   c h a n g e d   t o           * /  
 / *   v a l u e   f o r   A D C 3   b y   H A L   A D C   d r i v e r   i f   A D C 3   i s   s e l e c t e d .                                             * /  
 # d e f i n e   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 8 _ C C 4                   A D C 1 _ 2 _ E X T E R N A L T R I G I N J E C _ T 8 _ C C 4  
 # e n d i f   / *   S T M 3 2 F 1 0 1 x E   | |   S T M 3 2 F 1 0 3 x E   | |   S T M 3 2 F 1 0 3 x G   | |   S T M 3 2 F 1 0 5 x C   | |   S T M 3 2 F 1 0 7 x C   * /  
  
 # d e f i n e   A D C _ I N J E C T E D _ S O F T W A R E _ S T A R T                             A D C 1 _ 2 _ 3 _ J S W S T A R T  
 / * *  
     *   @ }  
     * /  
  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x 6 )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 7 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 / * *   @ d e f g r o u p   A D C E x _ C o m m o n _ m o d e   A D C   E x t e n d e d   D u a l   A D C   M o d e  
     *   @ {  
     * /  
 # d e f i n e   A D C _ M O D E _ I N D E P E N D E N T                                                             0 x 0 0 0 0 0 0 0 0 U                                                                                                                                           / * ! <   A D C   d u a l   m o d e   d i s a b l e d   ( A D C   i n d e p e n d e n t   m o d e )   * /  
 # d e f i n e   A D C _ D U A L M O D E _ R E G S I M U L T _ I N J E C S I M U L T         ( ( u i n t 3 2 _ t ) (                                                                                                                         A D C _ C R 1 _ D U A L M O D _ 0 ) )   / * ! <   A D C   d u a l   m o d e   e n a b l e d :   C o m b i n e d   r e g u l a r   s i m u l t a n e o u s   +   i n j e c t e d   s i m u l t a n e o u s   m o d e ,   o n   g r o u p s   r e g u l a r   a n d   i n j e c t e d   * /  
 # d e f i n e   A D C _ D U A L M O D E _ R E G S I M U L T _ A L T E R T R I G             ( ( u i n t 3 2 _ t ) (                                                                                 A D C _ C R 1 _ D U A L M O D _ 1                                         ) )   / * ! <   A D C   d u a l   m o d e   e n a b l e d :   C o m b i n e d   r e g u l a r   s i m u l t a n e o u s   +   a l t e r n a t e   t r i g g e r   m o d e ,   o n   g r o u p s   r e g u l a r   a n d   i n j e c t e d   * /  
 # d e f i n e   A D C _ D U A L M O D E _ I N J E C S I M U L T _ I N T E R L F A S T       ( ( u i n t 3 2 _ t ) (                                                                                 A D C _ C R 1 _ D U A L M O D _ 1   |   A D C _ C R 1 _ D U A L M O D _ 0 ) )   / * ! <   A D C   d u a l   m o d e   e n a b l e d :   C o m b i n e d   i n j e c t e d   s i m u l t a n e o u s   +   f a s t   i n t e r l e a v e d   m o d e ,   o n   g r o u p s   r e g u l a r   a n d   i n j e c t e d   ( d e l a y   b e t w e e n   A D C   s a m p l i n g   p h a s e s :   7   A D C   c l o c k   c y c l e s   ( e q u i v a l e n t   t o   p a r a m e t e r   " T w o S a m p l i n g D e l a y "   s e t   t o   " A D C _ T W O S A M P L I N G D E L A Y _ 7 C Y C L E S "   o n   o t h e r   S T M 3 2   d e v i c e s ) )   * /  
 # d e f i n e   A D C _ D U A L M O D E _ I N J E C S I M U L T _ I N T E R L S L O W       ( ( u i n t 3 2 _ t ) (                                         A D C _ C R 1 _ D U A L M O D _ 2                                                                                 ) )   / * ! <   A D C   d u a l   m o d e   e n a b l e d :   C o m b i n e d   i n j e c t e d   s i m u l t a n e o u s   +   s l o w   I n t e r l e a v e d   m o d e ,   o n   g r o u p s   r e g u l a r   a n d   i n j e c t e d   ( d e l a y   b e t w e e n   A D C   s a m p l i n g   p h a s e s :   1 4   A D C   c l o c k   c y c l e s   ( e q u i v a l e n t   t o   p a r a m e t e r   " T w o S a m p l i n g D e l a y "   s e t   t o   " A D C _ T W O S A M P L I N G D E L A Y _ 7 C Y C L E S "   o n   o t h e r   S T M 3 2   d e v i c e s ) )   * /  
 # d e f i n e   A D C _ D U A L M O D E _ I N J E C S I M U L T                             ( ( u i n t 3 2 _ t ) (                                         A D C _ C R 1 _ D U A L M O D _ 2   |                                           A D C _ C R 1 _ D U A L M O D _ 0 ) )   / * ! <   A D C   d u a l   m o d e   e n a b l e d :   I n j e c t e d   s i m u l t a n e o u s   m o d e ,   o n   g r o u p   i n j e c t e d   * /  
 # d e f i n e   A D C _ D U A L M O D E _ R E G S I M U L T                                 ( ( u i n t 3 2 _ t ) (                                         A D C _ C R 1 _ D U A L M O D _ 2   |   A D C _ C R 1 _ D U A L M O D _ 1                                         ) )   / * ! <   A D C   d u a l   m o d e   e n a b l e d :   R e g u l a r   s i m u l t a n e o u s   m o d e ,   o n   g r o u p   r e g u l a r   * /  
 # d e f i n e   A D C _ D U A L M O D E _ I N T E R L F A S T                               ( ( u i n t 3 2 _ t ) (                                         A D C _ C R 1 _ D U A L M O D _ 2   |   A D C _ C R 1 _ D U A L M O D _ 1   |   A D C _ C R 1 _ D U A L M O D _ 0 ) )   / * ! <   A D C   d u a l   m o d e   e n a b l e d :   F a s t   i n t e r l e a v e d   m o d e ,   o n   g r o u p   r e g u l a r   ( d e l a y   b e t w e e n   A D C   s a m p l i n g   p h a s e s :   7   A D C   c l o c k   c y c l e s   ( e q u i v a l e n t   t o   p a r a m e t e r   " T w o S a m p l i n g D e l a y "   s e t   t o   " A D C _ T W O S A M P L I N G D E L A Y _ 7 C Y C L E S "   o n   o t h e r   S T M 3 2   d e v i c e s ) )   * /  
 # d e f i n e   A D C _ D U A L M O D E _ I N T E R L S L O W                               ( ( u i n t 3 2 _ t ) ( A D C _ C R 1 _ D U A L M O D _ 3                                                                                                                         ) )   / * ! <   A D C   d u a l   m o d e   e n a b l e d :   S l o w   i n t e r l e a v e d   m o d e ,   o n   g r o u p   r e g u l a r   ( d e l a y   b e t w e e n   A D C   s a m p l i n g   p h a s e s :   1 4   A D C   c l o c k   c y c l e s   ( e q u i v a l e n t   t o   p a r a m e t e r   " T w o S a m p l i n g D e l a y "   s e t   t o   " A D C _ T W O S A M P L I N G D E L A Y _ 7 C Y C L E S "   o n   o t h e r   S T M 3 2   d e v i c e s ) )   * /  
 # d e f i n e   A D C _ D U A L M O D E _ A L T E R T R I G                                 ( ( u i n t 3 2 _ t ) ( A D C _ C R 1 _ D U A L M O D _ 3   |                                                                                   A D C _ C R 1 _ D U A L M O D _ 0 ) )   / * ! <   A D C   d u a l   m o d e   e n a b l e d :   A l t e r n a t e   t r i g g e r   m o d e ,   o n   g r o u p   i n j e c t e d   * /  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   d e f i n e d   S T M 3 2 F 1 0 3 x 6   | |   d e f i n e d   S T M 3 2 F 1 0 3 x B   | |   d e f i n e d   S T M 3 2 F 1 0 5 x C   | |   d e f i n e d   S T M 3 2 F 1 0 7 x C   | |   d e f i n e d   S T M 3 2 F 1 0 3 x E   | |   d e f i n e d   S T M 3 2 F 1 0 3 x G   * /  
  
 / * *  
     *   @ }  
     * /  
  
  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ a d d t o g r o u p   A D C E x _ P r i v a t e _ C o n s t a n t s   A D C E x   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   A D C E x _ I n t e r n a l _ H A L _ d r i v e r _ E x t _ t r i g _ s r c _ R e g u l a r   A D C   E x t e n d e d   I n t e r n a l   H A L   d r i v e r   t r i g g e r   s e l e c t i o n   f o r   r e g u l a r   g r o u p  
     *   @ {  
     * /  
 / *   L i s t   o f   e x t e r n a l   t r i g g e r s   o f   r e g u l a r   g r o u p   f o r   A D C 1 ,   A D C 2 ,   A D C 3   ( i f   A D C         * /  
 / *   i n s t a n c e   i s   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e ) .                                                           * /  
 / *   ( u s e d   i n t e r n a l l y   b y   H A L   d r i v e r .   T o   n o t   u s e   i n t o   H A L   s t r u c t u r e   p a r a m e t e r s )     * /  
  
 / *   E x t e r n a l   t r i g g e r s   o f   r e g u l a r   g r o u p   f o r   A D C 1 & A D C 2   ( i f   A D C x   a v a i l a b l e )   * /  
 # d e f i n e   A D C 1 _ 2 _ E X T E R N A L T R I G _ T 1 _ C C 1                                               0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   A D C 1 _ 2 _ E X T E R N A L T R I G _ T 1 _ C C 2                       ( ( u i n t 3 2 _ t ) (                                                                             A D C _ C R 2 _ E X T S E L _ 0 ) )  
 # d e f i n e   A D C 1 _ 2 _ E X T E R N A L T R I G _ T 2 _ C C 2                       ( ( u i n t 3 2 _ t ) (                                       A D C _ C R 2 _ E X T S E L _ 1   |   A D C _ C R 2 _ E X T S E L _ 0 ) )  
 # d e f i n e   A D C 1 _ 2 _ E X T E R N A L T R I G _ T 3 _ T R G O                     ( ( u i n t 3 2 _ t ) ( A D C _ C R 2 _ E X T S E L _ 2                                                                             ) )  
 # d e f i n e   A D C 1 _ 2 _ E X T E R N A L T R I G _ T 4 _ C C 4                       ( ( u i n t 3 2 _ t ) ( A D C _ C R 2 _ E X T S E L _ 2   |                                         A D C _ C R 2 _ E X T S E L _ 0 ) )  
 # d e f i n e   A D C 1 _ 2 _ E X T E R N A L T R I G _ E X T _ I T 1 1                   ( ( u i n t 3 2 _ t ) ( A D C _ C R 2 _ E X T S E L _ 2   |   A D C _ C R 2 _ E X T S E L _ 1                                       ) )  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 1 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 / *   N o t e :   T I M 8 _ T R G O   i s   a v a i l a b l e   o n   A D C 1   a n d   A D C 2   o n l y   i n   h i g h - d e n s i t y   a n d           * /  
 / *   X L - d e n s i t y   d e v i c e s .                                                                                                                 * /  
 # d e f i n e   A D C 1 _ 2 _ E X T E R N A L T R I G _ T 8 _ T R G O                     A D C 1 _ 2 _ E X T E R N A L T R I G _ E X T _ I T 1 1  
 # e n d i f  
  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 / *   E x t e r n a l   t r i g g e r s   o f   r e g u l a r   g r o u p   f o r   A D C 3   * /  
 # d e f i n e   A D C 3 _ E X T E R N A L T R I G _ T 3 _ C C 1                           A D C 1 _ 2 _ E X T E R N A L T R I G _ T 1 _ C C 1  
 # d e f i n e   A D C 3 _ E X T E R N A L T R I G _ T 2 _ C C 3                           A D C 1 _ 2 _ E X T E R N A L T R I G _ T 1 _ C C 2  
 # d e f i n e   A D C 3 _ E X T E R N A L T R I G _ T 8 _ C C 1                           A D C 1 _ 2 _ E X T E R N A L T R I G _ T 2 _ C C 2  
 # d e f i n e   A D C 3 _ E X T E R N A L T R I G _ T 8 _ T R G O                         A D C 1 _ 2 _ E X T E R N A L T R I G _ T 3 _ T R G O  
 # d e f i n e   A D C 3 _ E X T E R N A L T R I G _ T 5 _ C C 1                           A D C 1 _ 2 _ E X T E R N A L T R I G _ T 4 _ C C 4  
 # d e f i n e   A D C 3 _ E X T E R N A L T R I G _ T 5 _ C C 3                           A D C 1 _ 2 _ E X T E R N A L T R I G _ E X T _ I T 1 1  
 # e n d i f  
  
 / *   E x t e r n a l   t r i g g e r s   o f   r e g u l a r   g r o u p   f o r   A D C 1 & A D C 2 & A D C 3   ( i f   A D C x   a v a i l a b l e )   * /  
 # d e f i n e   A D C 1 _ 2 _ 3 _ E X T E R N A L T R I G _ T 1 _ C C 3                   ( ( u i n t 3 2 _ t ) (                                       A D C _ C R 2 _ E X T S E L _ 1                                       ) )  
 # d e f i n e   A D C 1 _ 2 _ 3 _ S W S T A R T                                           ( ( u i n t 3 2 _ t ) ( A D C _ C R 2 _ E X T S E L _ 2   |   A D C _ C R 2 _ E X T S E L _ 1   |   A D C _ C R 2 _ E X T S E L _ 0 ) )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C E x _ I n t e r n a l _ H A L _ d r i v e r _ E x t _ t r i g _ s r c _ I n j e c t e d   A D C   E x t e n d e d   I n t e r n a l   H A L   d r i v e r   t r i g g e r   s e l e c t i o n   f o r   i n j e c t e d   g r o u p  
     *   @ {  
     * /  
 / *   L i s t   o f   e x t e r n a l   t r i g g e r s   o f   i n j e c t e d   g r o u p   f o r   A D C 1 ,   A D C 2 ,   A D C 3   ( i f   A D C         * /  
 / *   i n s t a n c e   i s   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e ) .                                                           * /  
 / *   ( u s e d   i n t e r n a l l y   b y   H A L   d r i v e r .   T o   n o t   u s e   i n t o   H A L   s t r u c t u r e   p a r a m e t e r s )     * /  
  
 / *   E x t e r n a l   t r i g g e r s   o f   i n j e c t e d   g r o u p   f o r   A D C 1 & A D C 2   ( i f   A D C x   a v a i l a b l e )   * /  
 # d e f i n e   A D C 1 _ 2 _ E X T E R N A L T R I G I N J E C _ T 2 _ T R G O                     ( ( u i n t 3 2 _ t ) (                                         A D C _ C R 2 _ J E X T S E L _ 1                                         ) )  
 # d e f i n e   A D C 1 _ 2 _ E X T E R N A L T R I G I N J E C _ T 2 _ C C 1                       ( ( u i n t 3 2 _ t ) (                                         A D C _ C R 2 _ J E X T S E L _ 1   |   A D C _ C R 2 _ J E X T S E L _ 0 ) )  
 # d e f i n e   A D C 1 _ 2 _ E X T E R N A L T R I G I N J E C _ T 3 _ C C 4                       ( ( u i n t 3 2 _ t ) ( A D C _ C R 2 _ J E X T S E L _ 2                                                                                 ) )  
 # d e f i n e   A D C 1 _ 2 _ E X T E R N A L T R I G I N J E C _ T 4 _ T R G O                     ( ( u i n t 3 2 _ t ) ( A D C _ C R 2 _ J E X T S E L _ 2   |                                           A D C _ C R 2 _ J E X T S E L _ 0 ) )  
 # d e f i n e   A D C 1 _ 2 _ E X T E R N A L T R I G I N J E C _ E X T _ I T 1 5                   ( ( u i n t 3 2 _ t ) ( A D C _ C R 2 _ J E X T S E L _ 2   |   A D C _ C R 2 _ J E X T S E L _ 1                                         ) )  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 1 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 / *   N o t e :   T I M 8 _ C C 4   i s   a v a i l a b l e   o n   A D C 1   a n d   A D C 2   o n l y   i n   h i g h - d e n s i t y   a n d             * /  
 / *   X L - d e n s i t y   d e v i c e s .                                                                                                                 * /  
 # d e f i n e   A D C 1 _ 2 _ E X T E R N A L T R I G I N J E C _ T 8 _ C C 4                       A D C 1 _ 2 _ E X T E R N A L T R I G I N J E C _ E X T _ I T 1 5  
 # e n d i f  
  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 / *   E x t e r n a l   t r i g g e r s   o f   i n j e c t e d   g r o u p   f o r   A D C 3   * /  
 # d e f i n e   A D C 3 _ E X T E R N A L T R I G I N J E C _ T 4 _ C C 3                           A D C 1 _ 2 _ E X T E R N A L T R I G I N J E C _ T 2 _ T R G O  
 # d e f i n e   A D C 3 _ E X T E R N A L T R I G I N J E C _ T 8 _ C C 2                           A D C 1 _ 2 _ E X T E R N A L T R I G I N J E C _ T 2 _ C C 1  
 # d e f i n e   A D C 3 _ E X T E R N A L T R I G I N J E C _ T 8 _ C C 4                           A D C 1 _ 2 _ E X T E R N A L T R I G I N J E C _ T 3 _ C C 4  
 # d e f i n e   A D C 3 _ E X T E R N A L T R I G I N J E C _ T 5 _ T R G O                         A D C 1 _ 2 _ E X T E R N A L T R I G I N J E C _ T 4 _ T R G O  
 # d e f i n e   A D C 3 _ E X T E R N A L T R I G I N J E C _ T 5 _ C C 4                           A D C 1 _ 2 _ E X T E R N A L T R I G I N J E C _ E X T _ I T 1 5  
 # e n d i f   / *   S T M 3 2 F 1 0 3 x E   | |   d e f i n e d   S T M 3 2 F 1 0 3 x G   * /  
  
 / *   E x t e r n a l   t r i g g e r s   o f   i n j e c t e d   g r o u p   f o r   A D C 1 & A D C 2 & A D C 3   ( i f   A D C x   a v a i l a b l e )   * /  
 # d e f i n e   A D C 1 _ 2 _ 3 _ E X T E R N A L T R I G I N J E C _ T 1 _ T R G O                                         0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   A D C 1 _ 2 _ 3 _ E X T E R N A L T R I G I N J E C _ T 1 _ C C 4                   ( ( u i n t 3 2 _ t ) (                                                                                 A D C _ C R 2 _ J E X T S E L _ 0 ) )  
 # d e f i n e   A D C 1 _ 2 _ 3 _ J S W S T A R T                                                   ( ( u i n t 3 2 _ t ) ( A D C _ C R 2 _ J E X T S E L _ 2   |   A D C _ C R 2 _ J E X T S E L _ 1   |   A D C _ C R 2 _ J E X T S E L _ 0 ) )  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   A D C E x _ P r i v a t e _ M a c r o   A D C E x   P r i v a t e   M a c r o  
     *   @ {  
     * /  
 / *   M a c r o   r e s e r v e d   f o r   i n t e r n a l   H A L   d r i v e r   u s a g e ,   n o t   i n t e n d e d   t o   b e   u s e d   i n       * /  
 / *   c o d e   o f   f i n a l   u s e r .                                                                                                                 * /  
  
          
 / * *  
     *   @ b r i e f   F o r   d e v i c e s   w i t h   3   A D C s :   D e f i n e s   t h e   e x t e r n a l   t r i g g e r   s o u r c e    
     *                 f o r   r e g u l a r   g r o u p   a c c o r d i n g   t o   A D C   i n t o   c o m m o n   g r o u p   A D C 1 & A D C 2   o r    
     *                 A D C 3   ( s o m e   t r i g g e r s   w i t h   s a m e   s o u r c e   h a v e   d i f f e r e n t   v a l u e   t o  
     *                 b e   p r o g r a m m e d   i n t o   A D C   E X T S E L   b i t s   o f   C R 2   r e g i s t e r ) .  
     *                 F o r   d e v i c e s   w i t h   2   A D C s   o r   l e s s :   t h i s   m a c r o   m a k e s   n o   c h a n g e .  
     *   @ p a r a m   _ _ H A N D L E _ _ :   A D C   h a n d l e  
     *   @ p a r a m   _ _ E X T _ T R I G _ C O N V _ _ :   E x t e r n a l   t r i g g e r   s e l e c t e d   f o r   r e g u l a r   g r o u p .  
     *   @ r e t v a l   E x t e r n a l   t r i g g e r   t o   b e   p r o g r a m m e d   i n t o   E X T S E L   b i t s   o f   C R 2   r e g i s t e r  
     * /  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 # d e f i n e   A D C _ C F G R _ E X T S E L ( _ _ H A N D L E _ _ ,   _ _ E X T _ T R I G _ C O N V _ _ )                                                   \  
   ( (   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e )   = =   A D C 3 )                                                                                   \  
     ) ?                                                                                                                                                       \  
       (   (   ( _ _ E X T _ T R I G _ C O N V _ _ )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 8 _ T R G O                                           \  
           ) ?                                                                                                                                                 \  
             ( A D C 3 _ E X T E R N A L T R I G _ T 8 _ T R G O )                                                                                             \  
             :                                                                                                                                                 \  
             ( _ _ E X T _ T R I G _ C O N V _ _ )                                                                                                             \  
       )                                                                                                                                                       \  
       :                                                                                                                                                       \  
       ( _ _ E X T _ T R I G _ C O N V _ _ )                                                                                                                   \  
   )  
 # e l s e  
 # d e f i n e   A D C _ C F G R _ E X T S E L ( _ _ H A N D L E _ _ ,   _ _ E X T _ T R I G _ C O N V _ _ )                                                   \  
     ( _ _ E X T _ T R I G _ C O N V _ _ )  
 # e n d i f   / *   S T M 3 2 F 1 0 3 x E   | |   S T M 3 2 F 1 0 3 x G   * /  
  
 / * *  
     *   @ b r i e f   F o r   d e v i c e s   w i t h   3   A D C s :   D e f i n e s   t h e   e x t e r n a l   t r i g g e r   s o u r c e    
     *                 f o r   i n j e c t e d   g r o u p   a c c o r d i n g   t o   A D C   i n t o   c o m m o n   g r o u p   A D C 1 & A D C 2   o r    
     *                 A D C 3   ( s o m e   t r i g g e r s   w i t h   s a m e   s o u r c e   h a v e   d i f f e r e n t   v a l u e   t o  
     *                 b e   p r o g r a m m e d   i n t o   A D C   J E X T S E L   b i t s   o f   C R 2   r e g i s t e r ) .  
     *                 F o r   d e v i c e s   w i t h   2   A D C s   o r   l e s s :   t h i s   m a c r o   m a k e s   n o   c h a n g e .  
     *   @ p a r a m   _ _ H A N D L E _ _ :   A D C   h a n d l e  
     *   @ p a r a m   _ _ E X T _ T R I G _ I N J E C T C O N V _ _ :   E x t e r n a l   t r i g g e r   s e l e c t e d   f o r   i n j e c t e d   g r o u p .  
     *   @ r e t v a l   E x t e r n a l   t r i g g e r   t o   b e   p r o g r a m m e d   i n t o   J E X T S E L   b i t s   o f   C R 2   r e g i s t e r  
     * /  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 # d e f i n e   A D C _ C F G R _ J E X T S E L ( _ _ H A N D L E _ _ ,   _ _ E X T _ T R I G _ I N J E C T C O N V _ _ )                                     \  
   ( (   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e )   = =   A D C 3 )                                                                                   \  
     ) ?                                                                                                                                                       \  
       (   (   ( _ _ E X T _ T R I G _ I N J E C T C O N V _ _ )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 8 _ C C 4                       \  
           ) ?                                                                                                                                                 \  
             ( A D C 3 _ E X T E R N A L T R I G I N J E C _ T 8 _ C C 4 )                                                                                     \  
             :                                                                                                                                                 \  
             ( _ _ E X T _ T R I G _ I N J E C T C O N V _ _ )                                                                                                 \  
       )                                                                                                                                                       \  
       :                                                                                                                                                       \  
       ( _ _ E X T _ T R I G _ I N J E C T C O N V _ _ )                                                                                                       \  
   )  
 # e l s e  
 # d e f i n e   A D C _ C F G R _ J E X T S E L ( _ _ H A N D L E _ _ ,   _ _ E X T _ T R I G _ I N J E C T C O N V _ _ )                                     \  
       ( _ _ E X T _ T R I G _ I N J E C T C O N V _ _ )  
 # e n d i f   / *   S T M 3 2 F 1 0 3 x E   | |   S T M 3 2 F 1 0 3 x G   * /  
  
  
 / * *  
     *   @ b r i e f   V e r i f i c a t i o n   i f   m u l t i m o d e   i s   e n a b l e d   f o r   t h e   s e l e c t e d   A D C   ( m u l t i m o d e   A D C   m a s t e r   o r   A D C   s l a v e )   ( a p p l i c a b l e   f o r   d e v i c e s   w i t h   s e v e r a l   A D C s )  
     *   @ p a r a m   _ _ H A N D L E _ _ :   A D C   h a n d l e  
     *   @ r e t v a l   M u l t i m o d e   s t a t e :   R E S E T   i f   m u l t i m o d e   i s   d i s a b l e d ,   o t h e r   v a l u e   i f   m u l t i m o d e   i s   e n a b l e d  
     * /  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x 6 )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 7 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 # d e f i n e   A D C _ M U L T I M O D E _ I S _ E N A B L E ( _ _ H A N D L E _ _ )                                                                         \  
   ( (   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e )   = =   A D C 1 )   | |   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e )   = =   A D C 2 )       \  
     ) ?                                                                                                                                                       \  
       ( A D C 1 - > C R 1   &   A D C _ C R 1 _ D U A L M O D )                                                                                               \  
       :                                                                                                                                                       \  
       ( R E S E T )                                                                                                                                           \  
   )  
 # e l s e  
 # d e f i n e   A D C _ M U L T I M O D E _ I S _ E N A B L E ( _ _ H A N D L E _ _ )                                                                         \  
     ( R E S E T )  
 # e n d i f   / *   d e f i n e d   S T M 3 2 F 1 0 3 x 6   | |   d e f i n e d   S T M 3 2 F 1 0 3 x B   | |   d e f i n e d   S T M 3 2 F 1 0 5 x C   | |   d e f i n e d   S T M 3 2 F 1 0 7 x C   | |   d e f i n e d   S T M 3 2 F 1 0 3 x E   | |   d e f i n e d   S T M 3 2 F 1 0 3 x G   * /  
  
 / * *  
     *   @ b r i e f   V e r i f i c a t i o n   o f   c o n d i t i o n   f o r   A D C   s t a r t   c o n v e r s i o n :   A D C   m u s t   b e   i n   n o n - m u l t i m o d e ,   o r   m u l t i m o d e   w i t h   h a n d l e   o f   A D C   m a s t e r   ( a p p l i c a b l e   f o r   d e v i c e s   w i t h   s e v e r a l   A D C s )  
     *   @ p a r a m   _ _ H A N D L E _ _ :   A D C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x 6 )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 7 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 # d e f i n e   A D C _ N O N M U L T I M O D E _ O R _ M U L T I M O D E M A S T E R ( _ _ H A N D L E _ _ )                                                 \  
     ( (   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e )   = =   A D C 2 )                                                                                 \  
       ) ?                                                                                                                                                     \  
         ( ( A D C 1 - > C R 1   &   A D C _ C R 1 _ D U A L M O D )   = =   R E S E T )                                                                       \  
         :                                                                                                                                                     \  
         ( ! R E S E T )                                                                                                                                       \  
     )  
 # e l s e  
 # d e f i n e   A D C _ N O N M U L T I M O D E _ O R _ M U L T I M O D E M A S T E R ( _ _ H A N D L E _ _ )                                                 \  
     ( ! R E S E T )  
 # e n d i f   / *   d e f i n e d   S T M 3 2 F 1 0 3 x 6   | |   d e f i n e d   S T M 3 2 F 1 0 3 x B   | |   d e f i n e d   S T M 3 2 F 1 0 5 x C   | |   d e f i n e d   S T M 3 2 F 1 0 7 x C   | |   d e f i n e d   S T M 3 2 F 1 0 3 x E   | |   d e f i n e d   S T M 3 2 F 1 0 3 x G   * /  
  
 / * *  
     *   @ b r i e f   C h e c k   A D C   m u l t i m o d e   s e t t i n g :   I n   c a s e   o f   m u l t i m o d e ,   c h e c k   w h e t h e r   A D C   m a s t e r   o f   t h e   s e l e c t e d   A D C   h a s   f e a t u r e   a u t o - i n j e c t i o n   e n a b l e d   ( a p p l i c a b l e   f o r   d e v i c e s   w i t h   s e v e r a l   A D C s )  
     *   @ p a r a m   _ _ H A N D L E _ _ :   A D C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x 6 )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 7 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 # d e f i n e   A D C _ M U L T I M O D E _ A U T O _ I N J E C T E D ( _ _ H A N D L E _ _ )                                                                 \  
     ( (   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e )   = =   A D C 1 )   | |   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e )   = =   A D C 2 )     \  
       ) ?                                                                                                                                                     \  
         ( A D C 1 - > C R 1   &   A D C _ C R 1 _ J A U T O )                                                                                                 \  
         :                                                                                                                                                     \  
         ( R E S E T )                                                                                                                                         \  
     )  
 # e l s e  
 # d e f i n e   A D C _ M U L T I M O D E _ A U T O _ I N J E C T E D ( _ _ H A N D L E _ _ )                                                                 \  
     ( R E S E T )  
 # e n d i f   / *   d e f i n e d   S T M 3 2 F 1 0 3 x 6   | |   d e f i n e d   S T M 3 2 F 1 0 3 x B   | |   d e f i n e d   S T M 3 2 F 1 0 5 x C   | |   d e f i n e d   S T M 3 2 F 1 0 7 x C   | |   d e f i n e d   S T M 3 2 F 1 0 3 x E   | |   d e f i n e d   S T M 3 2 F 1 0 3 x G   * /  
  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x 6 )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 7 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 / * *  
     *   @ b r i e f   S e t   h a n d l e   o f   t h e   o t h e r   A D C   s h a r i n g   t h e   c o m m o n   m u l t i m o d e   s e t t i n g s  
     *   @ p a r a m   _ _ H A N D L E _ _ :   A D C   h a n d l e  
     *   @ p a r a m   _ _ H A N D L E _ O T H E R _ A D C _ _ :   o t h e r   A D C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   A D C _ C O M M O N _ A D C _ O T H E R ( _ _ H A N D L E _ _ ,   _ _ H A N D L E _ O T H E R _ A D C _ _ )                                   \  
     ( ( _ _ H A N D L E _ O T H E R _ A D C _ _ ) - > I n s t a n c e   =   A D C 2 )  
  
 / * *  
     *   @ b r i e f   S e t   h a n d l e   o f   t h e   A D C   s l a v e   a s s o c i a t e d   t o   t h e   A D C   m a s t e r  
     *   O n   S T M 3 2 F 1   d e v i c e s ,   A D C   s l a v e   i s   a l w a y s   A D C 2   ( t h i s   c a n   b e   d i f f e r e n t  
     *   o n   o t h e r   S T M 3 2   d e v i c e s )  
     *   @ p a r a m   _ _ H A N D L E _ M A S T E R _ _ :   A D C   m a s t e r   h a n d l e  
     *   @ p a r a m   _ _ H A N D L E _ S L A V E _ _ :   A D C   s l a v e   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   A D C _ M U L T I _ S L A V E ( _ _ H A N D L E _ M A S T E R _ _ ,   _ _ H A N D L E _ S L A V E _ _ )                                       \  
     ( ( _ _ H A N D L E _ S L A V E _ _ ) - > I n s t a n c e   =   A D C 2 )  
                
 # e n d i f   / *   d e f i n e d   S T M 3 2 F 1 0 3 x 6   | |   d e f i n e d   S T M 3 2 F 1 0 3 x B   | |   d e f i n e d   S T M 3 2 F 1 0 5 x C   | |   d e f i n e d   S T M 3 2 F 1 0 7 x C   | |   d e f i n e d   S T M 3 2 F 1 0 3 x E   | |   d e f i n e d   S T M 3 2 F 1 0 3 x G   * /  
  
 # d e f i n e   I S _ A D C _ I N J E C T E D _ R A N K ( C H A N N E L )   ( ( ( C H A N N E L )   = =   A D C _ I N J E C T E D _ R A N K _ 1 )   | |   \  
                                                                               ( ( C H A N N E L )   = =   A D C _ I N J E C T E D _ R A N K _ 2 )   | |   \  
                                                                               ( ( C H A N N E L )   = =   A D C _ I N J E C T E D _ R A N K _ 3 )   | |   \  
                                                                               ( ( C H A N N E L )   = =   A D C _ I N J E C T E D _ R A N K _ 4 ) )  
  
 # d e f i n e   I S _ A D C _ E X T T R I G I N J E C _ E D G E ( E D G E )   ( ( ( E D G E )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ E D G E _ N O N E )     | |   \  
                                                                                 ( ( E D G E )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ E D G E _ R I S I N G ) )  
  
 / * *   @ d e f g r o u p   A D C E x _ i n j e c t e d _ n b _ c o n v _ v e r i f i c a t i o n   A D C E x   i n j e c t e d   n b   c o n v   v e r i f i c a t i o n  
     *   @ {  
     * /  
 # d e f i n e   I S _ A D C _ I N J E C T E D _ N B _ C O N V ( L E N G T H )     ( ( ( L E N G T H )   > =   1 U )   & &   ( ( L E N G T H )   < =   4 U ) )  
 / * *  
     *   @ }  
     * /  
  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 0 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 0 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 1 x 6 )   | |   d e f i n e d   ( S T M 3 2 F 1 0 1 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 2 x 6 )   | |   d e f i n e d   ( S T M 3 2 F 1 0 2 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x 6 )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 7 x C )  
 # d e f i n e   I S _ A D C _ E X T T R I G ( R E G T R I G )   ( ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 1 _ C C 1 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 1 _ C C 2 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 2 _ C C 2 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 3 _ T R G O )       | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 4 _ C C 4 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ E X T _ I T 1 1 )     | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ S O F T W A R E _ S T A R T ) )  
 # e n d i f  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 1 x E )  
 # d e f i n e   I S _ A D C _ E X T T R I G ( R E G T R I G )   ( ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 1 _ C C 1 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 1 _ C C 2 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 2 _ C C 2 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 3 _ T R G O )       | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 4 _ C C 4 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ E X T _ I T 1 1 )     | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 8 _ T R G O )       | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ S O F T W A R E _ S T A R T ) )  
 # e n d i f  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 1 x G )  
 # d e f i n e   I S _ A D C _ E X T T R I G ( R E G T R I G )   ( ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 1 _ C C 1 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 1 _ C C 2 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 2 _ C C 2 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 3 _ T R G O )       | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 4 _ C C 4 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ E X T _ I T 1 1 )     | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ S O F T W A R E _ S T A R T ) )  
 # e n d i f  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 # d e f i n e   I S _ A D C _ E X T T R I G ( R E G T R I G )   ( ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 1 _ C C 1 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 1 _ C C 2 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 2 _ C C 2 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 3 _ T R G O )       | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 4 _ C C 4 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ E X T _ I T 1 1 )     | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 3 _ C C 1 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 2 _ C C 3 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 8 _ C C 1 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 5 _ C C 1 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 5 _ C C 3 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 1 _ C C 3 )         | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G C O N V _ T 8 _ T R G O )       | |   \  
                                                                   ( ( R E G T R I G )   = =   A D C _ S O F T W A R E _ S T A R T ) )  
 # e n d i f  
  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 0 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 0 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 1 x 6 )   | |   d e f i n e d   ( S T M 3 2 F 1 0 1 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 2 x 6 )   | |   d e f i n e d   ( S T M 3 2 F 1 0 2 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x 6 )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 7 x C )  
 # d e f i n e   I S _ A D C _ E X T T R I G I N J E C ( R E G T R I G )   ( ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 2 _ T R G O )     | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 2 _ C C 1 )       | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 3 _ C C 4 )       | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 4 _ T R G O )     | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ E X T _ I T 1 5 )   | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 1 _ C C 4 )       | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 1 _ T R G O )     | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ I N J E C T E D _ S O F T W A R E _ S T A R T ) )  
 # e n d i f  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 1 x E )  
 # d e f i n e   I S _ A D C _ E X T T R I G I N J E C ( R E G T R I G )   ( ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 2 _ T R G O )     | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 2 _ C C 1 )       | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 3 _ C C 4 )       | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 4 _ T R G O )     | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ E X T _ I T 1 5 )   | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 1 _ C C 4 )       | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 1 _ T R G O )     | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 8 _ C C 4 )       | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ I N J E C T E D _ S O F T W A R E _ S T A R T ) )  
 # e n d i f  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 1 x G )  
 # d e f i n e   I S _ A D C _ E X T T R I G I N J E C ( R E G T R I G )   ( ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 2 _ T R G O )     | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 2 _ C C 1 )       | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 3 _ C C 4 )       | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 4 _ T R G O )     | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ E X T _ I T 1 5 )   | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 1 _ C C 4 )       | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 1 _ T R G O )     | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ I N J E C T E D _ S O F T W A R E _ S T A R T ) )  
 # e n d i f  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 # d e f i n e   I S _ A D C _ E X T T R I G I N J E C ( R E G T R I G )   ( ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 2 _ T R G O )     | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 2 _ C C 1 )       | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 3 _ C C 4 )       | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 4 _ T R G O )     | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 5 _ C C 4 )       | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ E X T _ I T 1 5 )   | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 4 _ C C 3 )       | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 8 _ C C 2 )       | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 5 _ T R G O )     | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 5 _ C C 4 )       | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 1 _ C C 4 )       | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 1 _ T R G O )     | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ E X T E R N A L T R I G I N J E C C O N V _ T 8 _ C C 4 )       | |   \  
                                                                             ( ( R E G T R I G )   = =   A D C _ I N J E C T E D _ S O F T W A R E _ S T A R T ) )  
 # e n d i f  
  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x 6 )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 7 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 # d e f i n e   I S _ A D C _ M O D E ( M O D E )   ( ( ( M O D E )   = =   A D C _ M O D E _ I N D E P E N D E N T )                                 | |   \  
                                                       ( ( M O D E )   = =   A D C _ D U A L M O D E _ R E G S I M U L T _ I N J E C S I M U L T )     | |   \  
                                                       ( ( M O D E )   = =   A D C _ D U A L M O D E _ R E G S I M U L T _ A L T E R T R I G )         | |   \  
                                                       ( ( M O D E )   = =   A D C _ D U A L M O D E _ I N J E C S I M U L T _ I N T E R L F A S T )   | |   \  
                                                       ( ( M O D E )   = =   A D C _ D U A L M O D E _ I N J E C S I M U L T _ I N T E R L S L O W )   | |   \  
                                                       ( ( M O D E )   = =   A D C _ D U A L M O D E _ I N J E C S I M U L T )                         | |   \  
                                                       ( ( M O D E )   = =   A D C _ D U A L M O D E _ R E G S I M U L T )                             | |   \  
                                                       ( ( M O D E )   = =   A D C _ D U A L M O D E _ I N T E R L F A S T )                           | |   \  
                                                       ( ( M O D E )   = =   A D C _ D U A L M O D E _ I N T E R L S L O W )                           | |   \  
                                                       ( ( M O D E )   = =   A D C _ D U A L M O D E _ A L T E R T R I G )   )  
 # e n d i f   / *   d e f i n e d   S T M 3 2 F 1 0 3 x 6   | |   d e f i n e d   S T M 3 2 F 1 0 3 x B   | |   d e f i n e d   S T M 3 2 F 1 0 5 x C   | |   d e f i n e d   S T M 3 2 F 1 0 7 x C   | |   d e f i n e d   S T M 3 2 F 1 0 3 x E   | |   d e f i n e d   S T M 3 2 F 1 0 3 x G   * /  
  
 / * *  
     *   @ }  
     * /              
        
          
  
          
          
        
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   A D C E x _ E x p o r t e d _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / *   I O   o p e r a t i o n   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / * *   @ a d d t o g r o u p   A D C E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1  
     *   @ {  
     * /  
  
 / *   A D C   c a l i b r a t i o n   * /  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C E x _ C a l i b r a t i o n _ S t a r t ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
  
 / *   B l o c k i n g   m o d e :   P o l l i n g   * /  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C E x _ I n j e c t e d S t a r t ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C E x _ I n j e c t e d S t o p ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C E x _ I n j e c t e d P o l l F o r C o n v e r s i o n ( A D C _ H a n d l e T y p e D e f *   h a d c ,   u i n t 3 2 _ t   T i m e o u t ) ;  
  
 / *   N o n - b l o c k i n g   m o d e :   I n t e r r u p t i o n   * /  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C E x _ I n j e c t e d S t a r t _ I T ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C E x _ I n j e c t e d S t o p _ I T ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x 6 )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 7 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 / *   A D C   m u l t i m o d e   * /  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C E x _ M u l t i M o d e S t a r t _ D M A ( A D C _ H a n d l e T y p e D e f   * h a d c ,   u i n t 3 2 _ t   * p D a t a ,   u i n t 3 2 _ t   L e n g t h ) ;  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C E x _ M u l t i M o d e S t o p _ D M A ( A D C _ H a n d l e T y p e D e f   * h a d c ) ;    
 # e n d i f   / *   d e f i n e d   S T M 3 2 F 1 0 3 x 6   | |   d e f i n e d   S T M 3 2 F 1 0 3 x B   | |   d e f i n e d   S T M 3 2 F 1 0 5 x C   | |   d e f i n e d   S T M 3 2 F 1 0 7 x C   | |   d e f i n e d   S T M 3 2 F 1 0 3 x E   | |   d e f i n e d   S T M 3 2 F 1 0 3 x G   * /  
  
 / *   A D C   r e t r i e v e   c o n v e r s i o n   v a l u e   i n t e n d e d   t o   b e   u s e d   w i t h   p o l l i n g   o r   i n t e r r u p t i o n   * /  
 u i n t 3 2 _ t                                 H A L _ A D C E x _ I n j e c t e d G e t V a l u e ( A D C _ H a n d l e T y p e D e f *   h a d c ,   u i n t 3 2 _ t   I n j e c t e d R a n k ) ;  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x 6 )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 7 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 u i n t 3 2 _ t                                 H A L _ A D C E x _ M u l t i M o d e G e t V a l u e ( A D C _ H a n d l e T y p e D e f   * h a d c ) ;  
 # e n d i f   / *   d e f i n e d   S T M 3 2 F 1 0 3 x 6   | |   d e f i n e d   S T M 3 2 F 1 0 3 x B   | |   d e f i n e d   S T M 3 2 F 1 0 5 x C   | |   d e f i n e d   S T M 3 2 F 1 0 7 x C   | |   d e f i n e d   S T M 3 2 F 1 0 3 x E   | |   d e f i n e d   S T M 3 2 F 1 0 3 x G   * /  
  
 / *   A D C   I R Q H a n d l e r   a n d   C a l l b a c k s   u s e d   i n   n o n - b l o c k i n g   m o d e s   ( I n t e r r u p t i o n )   * /  
 v o i d                                         H A L _ A D C E x _ I n j e c t e d C o n v C p l t C a l l b a c k ( A D C _ H a n d l e T y p e D e f *   h a d c ) ;  
 / * *  
     *   @ }  
     * /  
  
  
 / *   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / * *   @ a d d t o g r o u p   A D C E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2  
     *   @ {  
     * /  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C E x _ I n j e c t e d C o n f i g C h a n n e l ( A D C _ H a n d l e T y p e D e f *   h a d c , A D C _ I n j e c t i o n C o n f T y p e D e f *   s C o n f i g I n j e c t e d ) ;  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x 6 )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d   ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 7 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 H A L _ S t a t u s T y p e D e f               H A L _ A D C E x _ M u l t i M o d e C o n f i g C h a n n e l ( A D C _ H a n d l e T y p e D e f   * h a d c ,   A D C _ M u l t i M o d e T y p e D e f   * m u l t i m o d e ) ;  
 # e n d i f   / *   d e f i n e d   S T M 3 2 F 1 0 3 x 6   | |   d e f i n e d   S T M 3 2 F 1 0 3 x B   | |   d e f i n e d   S T M 3 2 F 1 0 5 x C   | |   d e f i n e d   S T M 3 2 F 1 0 7 x C   | |   d e f i n e d   S T M 3 2 F 1 0 3 x E   | |   d e f i n e d   S T M 3 2 F 1 0 3 x G   * /  
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
 / * *  
     *   @ }  
     * /    
  
 / * *  
     *   @ }  
     * /  
      
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   _ _ S T M 3 2 F 1 x x _ H A L _ A D C _ E X _ H   * /  
  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  