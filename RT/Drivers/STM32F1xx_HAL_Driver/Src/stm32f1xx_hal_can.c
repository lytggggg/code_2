??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ c a n . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       C A N   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                     f u n c t i o n a l i t i e s   o f   t h e   C o n t r o l l e r   A r e a   N e t w o r k   ( C A N )   p e r i p h e r a l :  
     *                       +   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                       +   C o n f i g u r a t i o n   f u n c t i o n s  
     *                       +   C o n t r o l   f u n c t i o n s  
     *                       +   I n t e r r u p t s   m a n a g e m e n t  
     *                       +   C a l l b a c k s   f u n c t i o n s  
     *                       +   P e r i p h e r a l   S t a t e   a n d   E r r o r   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                 # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( # )   I n i t i a l i z e   t h e   C A N   l o w   l e v e l   r e s o u r c e s   b y   i m p l e m e n t i n g   t h e  
                     H A L _ C A N _ M s p I n i t ( ) :  
                   ( + + )   E n a b l e   t h e   C A N   i n t e r f a c e   c l o c k   u s i n g   _ _ H A L _ R C C _ C A N x _ C L K _ E N A B L E ( )  
                   ( + + )   C o n f i g u r e   C A N   p i n s  
                           ( + + + )   E n a b l e   t h e   c l o c k   f o r   t h e   C A N   G P I O s  
                           ( + + + )   C o n f i g u r e   C A N   p i n s   a s   a l t e r n a t e   f u n c t i o n   o p e n - d r a i n  
                   ( + + )   I n   c a s e   o f   u s i n g   i n t e r r u p t s   ( e . g .   H A L _ C A N _ A c t i v a t e N o t i f i c a t i o n ( ) )  
                           ( + + + )   C o n f i g u r e   t h e   C A N   i n t e r r u p t   p r i o r i t y   u s i n g  
                                       H A L _ N V I C _ S e t P r i o r i t y ( )  
                           ( + + + )   E n a b l e   t h e   C A N   I R Q   h a n d l e r   u s i n g   H A L _ N V I C _ E n a b l e I R Q ( )  
                           ( + + + )   I n   C A N   I R Q   h a n d l e r ,   c a l l   H A L _ C A N _ I R Q H a n d l e r ( )  
  
             ( # )   I n i t i a l i z e   t h e   C A N   p e r i p h e r a l   u s i n g   H A L _ C A N _ I n i t ( )   f u n c t i o n .   T h i s  
                     f u n c t i o n   r e s o r t s   t o   H A L _ C A N _ M s p I n i t ( )   f o r   l o w - l e v e l   i n i t i a l i z a t i o n .  
  
             ( # )   C o n f i g u r e   t h e   r e c e p t i o n   f i l t e r s   u s i n g   t h e   f o l l o w i n g   c o n f i g u r a t i o n  
                     f u n c t i o n s :  
                         ( + + )   H A L _ C A N _ C o n f i g F i l t e r ( )  
  
             ( # )   S t a r t   t h e   C A N   m o d u l e   u s i n g   H A L _ C A N _ S t a r t ( )   f u n c t i o n .   A t   t h i s   l e v e l  
                     t h e   n o d e   i s   a c t i v e   o n   t h e   b u s :   i t   r e c e i v e   m e s s a g e s ,   a n d   c a n   s e n d  
                     m e s s a g e s .  
  
             ( # )   T o   m a n a g e   m e s s a g e s   t r a n s m i s s i o n ,   t h e   f o l l o w i n g   T x   c o n t r o l   f u n c t i o n s  
                     c a n   b e   u s e d :  
                         ( + + )   H A L _ C A N _ A d d T x M e s s a g e ( )   t o   r e q u e s t   t r a n s m i s s i o n   o f   a   n e w  
                                   m e s s a g e .  
                         ( + + )   H A L _ C A N _ A b o r t T x R e q u e s t ( )   t o   a b o r t   t r a n s m i s s i o n   o f   a   p e n d i n g  
                                   m e s s a g e .  
                         ( + + )   H A L _ C A N _ G e t T x M a i l b o x e s F r e e L e v e l ( )   t o   g e t   t h e   n u m b e r   o f   f r e e   T x  
                                   m a i l b o x e s .  
                         ( + + )   H A L _ C A N _ I s T x M e s s a g e P e n d i n g ( )   t o   c h e c k   i f   a   m e s s a g e   i s   p e n d i n g  
                                   i n   a   T x   m a i l b o x .  
                         ( + + )   H A L _ C A N _ G e t T x T i m e s t a m p ( )   t o   g e t   t h e   t i m e s t a m p   o f   T x   m e s s a g e  
                                   s e n t ,   i f   t i m e   t r i g g e r e d   c o m m u n i c a t i o n   m o d e   i s   e n a b l e d .  
  
             ( # )   W h e n   a   m e s s a g e   i s   r e c e i v e d   i n t o   t h e   C A N   R x   F I F O s ,   i t   c a n   b e   r e t r i e v e d  
                     u s i n g   t h e   H A L _ C A N _ G e t R x M e s s a g e ( )   f u n c t i o n .   T h e   f u n c t i o n  
                     H A L _ C A N _ G e t R x F i f o F i l l L e v e l ( )   a l l o w s   t o   k n o w   h o w   m a n y   R x   m e s s a g e   a r e  
                     s t o r e d   i n   t h e   R x   F i f o .  
  
             ( # )   C a l l i n g   t h e   H A L _ C A N _ S t o p ( )   f u n c t i o n   s t o p s   t h e   C A N   m o d u l e .  
  
             ( # )   T h e   d e i n i t i a l i z a t i o n   i s   a c h i e v e d   w i t h   H A L _ C A N _ D e I n i t ( )   f u n c t i o n .  
  
  
             * * *   P o l l i n g   m o d e   o p e r a t i o n   * * *  
             = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( # )   R e c e p t i o n :  
                         ( + + )   M o n i t o r   r e c e p t i o n   o f   m e s s a g e   u s i n g   H A L _ C A N _ G e t R x F i f o F i l l L e v e l ( )  
                                   u n t i l   a t   l e a s t   o n e   m e s s a g e   i s   r e c e i v e d .  
                         ( + + )   T h e n   g e t   t h e   m e s s a g e   u s i n g   H A L _ C A N _ G e t R x M e s s a g e ( ) .  
  
             ( # )   T r a n s m i s s i o n :  
                         ( + + )   M o n i t o r   t h e   T x   m a i l b o x e s   a v a i l a b i l i t y   u n t i l   a t   l e a s t   o n e   T x  
                                   m a i l b o x   i s   f r e e ,   u s i n g   H A L _ C A N _ G e t T x M a i l b o x e s F r e e L e v e l ( ) .  
                         ( + + )   T h e n   r e q u e s t   t r a n s m i s s i o n   o f   a   m e s s a g e   u s i n g  
                                   H A L _ C A N _ A d d T x M e s s a g e ( ) .  
  
  
             * * *   I n t e r r u p t   m o d e   o p e r a t i o n   * * *  
             = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( # )   N o t i f i c a t i o n s   a r e   a c t i v a t e d   u s i n g   H A L _ C A N _ A c t i v a t e N o t i f i c a t i o n ( )  
                     f u n c t i o n .   T h e n ,   t h e   p r o c e s s   c a n   b e   c o n t r o l l e d   t h r o u g h   t h e  
                     a v a i l a b l e   u s e r   c a l l b a c k s :   H A L _ C A N _ x x x C a l l b a c k ( ) ,   u s i n g   s a m e   A P I s  
                     H A L _ C A N _ G e t R x M e s s a g e ( )   a n d   H A L _ C A N _ A d d T x M e s s a g e ( ) .  
  
             ( # )   N o t i f i c a t i o n s   c a n   b e   d e a c t i v a t e d   u s i n g  
                     H A L _ C A N _ D e a c t i v a t e N o t i f i c a t i o n ( )   f u n c t i o n .  
  
             ( # )   S p e c i a l   c a r e   s h o u l d   b e   t a k e n   f o r   C A N _ I T _ R X _ F I F O 0 _ M S G _ P E N D I N G   a n d  
                     C A N _ I T _ R X _ F I F O 1 _ M S G _ P E N D I N G   n o t i f i c a t i o n s .   T h e s e   n o t i f i c a t i o n s   t r i g  
                     t h e   c a l l b a c k s   H A L _ C A N _ R x F I F O 0 M s g P e n d i n g C a l l b a c k ( )   a n d  
                     H A L _ C A N _ R x F I F O 1 M s g P e n d i n g C a l l b a c k ( ) .   U s e r   h a s   t w o   p o s s i b l e   o p t i o n s  
                     h e r e .  
                         ( + + )   D i r e c t l y   g e t   t h e   R x   m e s s a g e   i n   t h e   c a l l b a c k ,   u s i n g  
                                   H A L _ C A N _ G e t R x M e s s a g e ( ) .  
                         ( + + )   O r   d e a c t i v a t e   t h e   n o t i f i c a t i o n   i n   t h e   c a l l b a c k   w i t h o u t  
                                   g e t t i n g   t h e   R x   m e s s a g e .   T h e   R x   m e s s a g e   c a n   t h e n   b e   g o t   l a t e r  
                                   u s i n g   H A L _ C A N _ G e t R x M e s s a g e ( ) .   O n c e   t h e   R x   m e s s a g e   h a v e   b e e n  
                                   r e a d ,   t h e   n o t i f i c a t i o n   c a n   b e   a c t i v a t e d   a g a i n .  
  
  
             * * *   S l e e p   m o d e   * * *  
             = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( # )   T h e   C A N   p e r i p h e r a l   c a n   b e   p u t   i n   s l e e p   m o d e   ( l o w   p o w e r ) ,   u s i n g  
                     H A L _ C A N _ R e q u e s t S l e e p ( ) .   T h e   s l e e p   m o d e   w i l l   b e   e n t e r e d   a s   s o o n   a s   t h e  
                     c u r r e n t   C A N   a c t i v i t y   ( t r a n s m i s s i o n   o r   r e c e p t i o n   o f   a   C A N   f r a m e )   w i l l  
                     b e   c o m p l e t e d .  
  
             ( # )   A   n o t i f i c a t i o n   c a n   b e   a c t i v a t e d   t o   b e   i n f o r m e d   w h e n   t h e   s l e e p   m o d e  
                     w i l l   b e   e n t e r e d .  
  
             ( # )   I t   c a n   b e   c h e c k e d   i f   t h e   s l e e p   m o d e   i s   e n t e r e d   u s i n g  
                     H A L _ C A N _ I s S l e e p A c t i v e ( ) .  
                     N o t e   t h a t   t h e   C A N   s t a t e   ( a c c e s s i b l e   f r o m   t h e   A P I   H A L _ C A N _ G e t S t a t e ( ) )  
                     i s   H A L _ C A N _ S T A T E _ S L E E P _ P E N D I N G   a s   s o o n   a s   t h e   s l e e p   m o d e   r e q u e s t   i s  
                     s u b m i t t e d   ( t h e   s l e e p   m o d e   i s   n o t   y e t   e n t e r e d ) ,   a n d   b e c o m e  
                     H A L _ C A N _ S T A T E _ S L E E P _ A C T I V E   w h e n   t h e   s l e e p   m o d e   i s   e f f e c t i v e .  
  
             ( # )   T h e   w a k e - u p   f r o m   s l e e p   m o d e   c a n   b e   t r i g g e r e d   b y   t w o   w a y s :  
                         ( + + )   U s i n g   H A L _ C A N _ W a k e U p ( ) .   W h e n   r e t u r n i n g   f r o m   t h i s   f u n c t i o n ,  
                                   t h e   s l e e p   m o d e   i s   e x i t e d   ( i f   r e t u r n   s t a t u s   i s   H A L _ O K ) .  
                         ( + + )   W h e n   a   s t a r t   o f   R x   C A N   f r a m e   i s   d e t e c t e d   b y   t h e   C A N   p e r i p h e r a l ,  
                                   i f   a u t o m a t i c   w a k e   u p   m o d e   i s   e n a b l e d .  
  
     * * *   C a l l b a c k   r e g i s t r a t i o n   * * *  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
  
     T h e   c o m p i l a t i o n   d e f i n e     U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   w h e n   s e t   t o   1  
     a l l o w s   t h e   u s e r   t o   c o n f i g u r e   d y n a m i c a l l y   t h e   d r i v e r   c a l l b a c k s .  
     U s e   F u n c t i o n   @ r e f   H A L _ C A N _ R e g i s t e r C a l l b a c k ( )   t o   r e g i s t e r   a n   i n t e r r u p t   c a l l b a c k .  
  
     F u n c t i o n   @ r e f   H A L _ C A N _ R e g i s t e r C a l l b a c k ( )   a l l o w s   t o   r e g i s t e r   f o l l o w i n g   c a l l b a c k s :  
         ( + )   T x M a i l b o x 0 C o m p l e t e C a l l b a c k       :   T x   M a i l b o x   0   C o m p l e t e   C a l l b a c k .  
         ( + )   T x M a i l b o x 1 C o m p l e t e C a l l b a c k       :   T x   M a i l b o x   1   C o m p l e t e   C a l l b a c k .  
         ( + )   T x M a i l b o x 2 C o m p l e t e C a l l b a c k       :   T x   M a i l b o x   2   C o m p l e t e   C a l l b a c k .  
         ( + )   T x M a i l b o x 0 A b o r t C a l l b a c k             :   T x   M a i l b o x   0   A b o r t   C a l l b a c k .  
         ( + )   T x M a i l b o x 1 A b o r t C a l l b a c k             :   T x   M a i l b o x   1   A b o r t   C a l l b a c k .  
         ( + )   T x M a i l b o x 2 A b o r t C a l l b a c k             :   T x   M a i l b o x   2   A b o r t   C a l l b a c k .  
         ( + )   R x F i f o 0 M s g P e n d i n g C a l l b a c k         :   R x   F i f o   0   M e s s a g e   P e n d i n g   C a l l b a c k .  
         ( + )   R x F i f o 0 F u l l C a l l b a c k                     :   R x   F i f o   0   F u l l   C a l l b a c k .  
         ( + )   R x F i f o 1 M s g P e n d i n g C a l l b a c k         :   R x   F i f o   1   M e s s a g e   P e n d i n g   C a l l b a c k .  
         ( + )   R x F i f o 1 F u l l C a l l b a c k                     :   R x   F i f o   1   F u l l   C a l l b a c k .  
         ( + )   S l e e p C a l l b a c k                                 :   S l e e p   C a l l b a c k .  
         ( + )   W a k e U p F r o m R x M s g C a l l b a c k             :   W a k e   U p   F r o m   R x   M e s s a g e   C a l l b a c k .  
         ( + )   E r r o r C a l l b a c k                                 :   E r r o r   C a l l b a c k .  
         ( + )   M s p I n i t C a l l b a c k                             :   C A N   M s p I n i t .  
         ( + )   M s p D e I n i t C a l l b a c k                         :   C A N   M s p D e I n i t .  
     T h i s   f u n c t i o n   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,   t h e   C a l l b a c k   I D  
     a n d   a   p o i n t e r   t o   t h e   u s e r   c a l l b a c k   f u n c t i o n .  
  
     U s e   f u n c t i o n   @ r e f   H A L _ C A N _ U n R e g i s t e r C a l l b a c k ( )   t o   r e s e t   a   c a l l b a c k   t o   t h e   d e f a u l t  
     w e a k   f u n c t i o n .  
     @ r e f   H A L _ C A N _ U n R e g i s t e r C a l l b a c k   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,  
     a n d   t h e   C a l l b a c k   I D .  
     T h i s   f u n c t i o n   a l l o w s   t o   r e s e t   f o l l o w i n g   c a l l b a c k s :  
         ( + )   T x M a i l b o x 0 C o m p l e t e C a l l b a c k       :   T x   M a i l b o x   0   C o m p l e t e   C a l l b a c k .  
         ( + )   T x M a i l b o x 1 C o m p l e t e C a l l b a c k       :   T x   M a i l b o x   1   C o m p l e t e   C a l l b a c k .  
         ( + )   T x M a i l b o x 2 C o m p l e t e C a l l b a c k       :   T x   M a i l b o x   2   C o m p l e t e   C a l l b a c k .  
         ( + )   T x M a i l b o x 0 A b o r t C a l l b a c k             :   T x   M a i l b o x   0   A b o r t   C a l l b a c k .  
         ( + )   T x M a i l b o x 1 A b o r t C a l l b a c k             :   T x   M a i l b o x   1   A b o r t   C a l l b a c k .  
         ( + )   T x M a i l b o x 2 A b o r t C a l l b a c k             :   T x   M a i l b o x   2   A b o r t   C a l l b a c k .  
         ( + )   R x F i f o 0 M s g P e n d i n g C a l l b a c k         :   R x   F i f o   0   M e s s a g e   P e n d i n g   C a l l b a c k .  
         ( + )   R x F i f o 0 F u l l C a l l b a c k                     :   R x   F i f o   0   F u l l   C a l l b a c k .  
         ( + )   R x F i f o 1 M s g P e n d i n g C a l l b a c k         :   R x   F i f o   1   M e s s a g e   P e n d i n g   C a l l b a c k .  
         ( + )   R x F i f o 1 F u l l C a l l b a c k                     :   R x   F i f o   1   F u l l   C a l l b a c k .  
         ( + )   S l e e p C a l l b a c k                                 :   S l e e p   C a l l b a c k .  
         ( + )   W a k e U p F r o m R x M s g C a l l b a c k             :   W a k e   U p   F r o m   R x   M e s s a g e   C a l l b a c k .  
         ( + )   E r r o r C a l l b a c k                                 :   E r r o r   C a l l b a c k .  
         ( + )   M s p I n i t C a l l b a c k                             :   C A N   M s p I n i t .  
         ( + )   M s p D e I n i t C a l l b a c k                         :   C A N   M s p D e I n i t .  
  
     B y   d e f a u l t ,   a f t e r   t h e   @ r e f   H A L _ C A N _ I n i t ( )   a n d   w h e n   t h e   s t a t e   i s   H A L _ C A N _ S T A T E _ R E S E T ,  
     a l l   c a l l b a c k s   a r e   s e t   t o   t h e   c o r r e s p o n d i n g   w e a k   f u n c t i o n s :  
     e x a m p l e   @ r e f   H A L _ C A N _ E r r o r C a l l b a c k ( ) .  
     E x c e p t i o n   d o n e   f o r   M s p I n i t   a n d   M s p D e I n i t   f u n c t i o n s   t h a t   a r e  
     r e s e t   t o   t h e   l e g a c y   w e a k   f u n c t i o n   i n   t h e   @ r e f   H A L _ C A N _ I n i t ( ) /   @ r e f   H A L _ C A N _ D e I n i t ( )   o n l y   w h e n  
     t h e s e   c a l l b a c k s   a r e   n u l l   ( n o t   r e g i s t e r e d   b e f o r e h a n d ) .  
     i f   n o t ,   M s p I n i t   o r   M s p D e I n i t   a r e   n o t   n u l l ,   t h e   @ r e f   H A L _ C A N _ I n i t ( ) /   @ r e f   H A L _ C A N _ D e I n i t ( )  
     k e e p   a n d   u s e   t h e   u s e r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   ( r e g i s t e r e d   b e f o r e h a n d )  
  
     C a l l b a c k s   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d   i n   H A L _ C A N _ S T A T E _ R E A D Y   s t a t e   o n l y .  
     E x c e p t i o n   d o n e   M s p I n i t / M s p D e I n i t   t h a t   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d  
     i n   H A L _ C A N _ S T A T E _ R E A D Y   o r   H A L _ C A N _ S T A T E _ R E S E T   s t a t e ,  
     t h u s   r e g i s t e r e d   ( u s e r )   M s p I n i t / D e I n i t   c a l l b a c k s   c a n   b e   u s e d   d u r i n g   t h e   I n i t / D e I n i t .  
     I n   t h a t   c a s e   f i r s t   r e g i s t e r   t h e   M s p I n i t / M s p D e I n i t   u s e r   c a l l b a c k s  
     u s i n g   @ r e f   H A L _ C A N _ R e g i s t e r C a l l b a c k ( )   b e f o r e   c a l l i n g   @ r e f   H A L _ C A N _ D e I n i t ( )  
     o r   @ r e f   H A L _ C A N _ I n i t ( )   f u n c t i o n .  
  
     W h e n   T h e   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   i s   s e t   t o   0   o r  
     n o t   d e f i n e d ,   t h e   c a l l b a c k   r e g i s t r a t i o n   f e a t u r e   i s   n o t   a v a i l a b l e   a n d   a l l   c a l l b a c k s  
     a r e   s e t   t o   t h e   c o r r e s p o n d i n g   w e a k   f u n c t i o n s .  
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
 # i f   d e f i n e d ( C A N 1 )  
  
 / * *   @ d e f g r o u p   C A N   C A N  
     *   @ b r i e f   C A N   d r i v e r   m o d u l e s  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ C A N _ M O D U L E _ E N A B L E D  
  
 # i f d e f   H A L _ C A N _ L E G A C Y _ M O D U L E _ E N A B L E D  
     # e r r o r   " T h e   C A N   d r i v e r   c a n n o t   b e   u s e d   w i t h   i t s   l e g a c y ,   P l e a s e   e n a b l e   o n l y   o n e   C A N   m o d u l e   a t   o n c e "  
 # e n d i f  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   C A N _ P r i v a t e _ C o n s t a n t s   C A N   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
 # d e f i n e   C A N _ T I M E O U T _ V A L U E   1 0 U  
 / * *  
     *   @ }  
     * /  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   C A N _ E x p o r t e d _ F u n c t i o n s   C A N   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   C A N _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
   *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
   *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                             # # # # #   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   H A L _ C A N _ I n i t                                               :   I n i t i a l i z e   a n d   c o n f i g u r e   t h e   C A N .  
             ( + )   H A L _ C A N _ D e I n i t                                           :   D e - i n i t i a l i z e   t h e   C A N .  
             ( + )   H A L _ C A N _ M s p I n i t                                         :   I n i t i a l i z e   t h e   C A N   M S P .  
             ( + )   H A L _ C A N _ M s p D e I n i t                                     :   D e I n i t i a l i z e   t h e   C A N   M S P .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   C A N   p e r i p h e r a l   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   p a r a m e t e r s   i n   t h e   C A N _ I n i t S t r u c t .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ I n i t ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     u i n t 3 2 _ t   t i c k s t a r t ;  
  
     / *   C h e c k   C A N   h a n d l e   * /  
     i f   ( h c a n   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ C A N _ A L L _ I N S T A N C E ( h c a n - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F U N C T I O N A L _ S T A T E ( h c a n - > I n i t . T i m e T r i g g e r e d M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F U N C T I O N A L _ S T A T E ( h c a n - > I n i t . A u t o B u s O f f ) ) ;  
     a s s e r t _ p a r a m ( I S _ F U N C T I O N A L _ S T A T E ( h c a n - > I n i t . A u t o W a k e U p ) ) ;  
     a s s e r t _ p a r a m ( I S _ F U N C T I O N A L _ S T A T E ( h c a n - > I n i t . A u t o R e t r a n s m i s s i o n ) ) ;  
     a s s e r t _ p a r a m ( I S _ F U N C T I O N A L _ S T A T E ( h c a n - > I n i t . R e c e i v e F i f o L o c k e d ) ) ;  
     a s s e r t _ p a r a m ( I S _ F U N C T I O N A L _ S T A T E ( h c a n - > I n i t . T r a n s m i t F i f o P r i o r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ C A N _ M O D E ( h c a n - > I n i t . M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ C A N _ S J W ( h c a n - > I n i t . S y n c J u m p W i d t h ) ) ;  
     a s s e r t _ p a r a m ( I S _ C A N _ B S 1 ( h c a n - > I n i t . T i m e S e g 1 ) ) ;  
     a s s e r t _ p a r a m ( I S _ C A N _ B S 2 ( h c a n - > I n i t . T i m e S e g 2 ) ) ;  
     a s s e r t _ p a r a m ( I S _ C A N _ P R E S C A L E R ( h c a n - > I n i t . P r e s c a l e r ) ) ;  
  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
     i f   ( h c a n - > S t a t e   = =   H A L _ C A N _ S T A T E _ R E S E T )  
     {  
         / *   R e s e t   c a l l b a c k s   t o   l e g a c y   f u n c t i o n s   * /  
         h c a n - > R x F i f o 0 M s g P e n d i n g C a l l b a c k     =     H A L _ C A N _ R x F i f o 0 M s g P e n d i n g C a l l b a c k ;     / *   L e g a c y   w e a k   R x F i f o 0 M s g P e n d i n g C a l l b a c k     * /  
         h c a n - > R x F i f o 0 F u l l C a l l b a c k                 =     H A L _ C A N _ R x F i f o 0 F u l l C a l l b a c k ;                 / *   L e g a c y   w e a k   R x F i f o 0 F u l l C a l l b a c k                 * /  
         h c a n - > R x F i f o 1 M s g P e n d i n g C a l l b a c k     =     H A L _ C A N _ R x F i f o 1 M s g P e n d i n g C a l l b a c k ;     / *   L e g a c y   w e a k   R x F i f o 1 M s g P e n d i n g C a l l b a c k     * /  
         h c a n - > R x F i f o 1 F u l l C a l l b a c k                 =     H A L _ C A N _ R x F i f o 1 F u l l C a l l b a c k ;                 / *   L e g a c y   w e a k   R x F i f o 1 F u l l C a l l b a c k                 * /  
         h c a n - > T x M a i l b o x 0 C o m p l e t e C a l l b a c k   =     H A L _ C A N _ T x M a i l b o x 0 C o m p l e t e C a l l b a c k ;   / *   L e g a c y   w e a k   T x M a i l b o x 0 C o m p l e t e C a l l b a c k   * /  
         h c a n - > T x M a i l b o x 1 C o m p l e t e C a l l b a c k   =     H A L _ C A N _ T x M a i l b o x 1 C o m p l e t e C a l l b a c k ;   / *   L e g a c y   w e a k   T x M a i l b o x 1 C o m p l e t e C a l l b a c k   * /  
         h c a n - > T x M a i l b o x 2 C o m p l e t e C a l l b a c k   =     H A L _ C A N _ T x M a i l b o x 2 C o m p l e t e C a l l b a c k ;   / *   L e g a c y   w e a k   T x M a i l b o x 2 C o m p l e t e C a l l b a c k   * /  
         h c a n - > T x M a i l b o x 0 A b o r t C a l l b a c k         =     H A L _ C A N _ T x M a i l b o x 0 A b o r t C a l l b a c k ;         / *   L e g a c y   w e a k   T x M a i l b o x 0 A b o r t C a l l b a c k         * /  
         h c a n - > T x M a i l b o x 1 A b o r t C a l l b a c k         =     H A L _ C A N _ T x M a i l b o x 1 A b o r t C a l l b a c k ;         / *   L e g a c y   w e a k   T x M a i l b o x 1 A b o r t C a l l b a c k         * /  
         h c a n - > T x M a i l b o x 2 A b o r t C a l l b a c k         =     H A L _ C A N _ T x M a i l b o x 2 A b o r t C a l l b a c k ;         / *   L e g a c y   w e a k   T x M a i l b o x 2 A b o r t C a l l b a c k         * /  
         h c a n - > S l e e p C a l l b a c k                             =     H A L _ C A N _ S l e e p C a l l b a c k ;                             / *   L e g a c y   w e a k   S l e e p C a l l b a c k                             * /  
         h c a n - > W a k e U p F r o m R x M s g C a l l b a c k         =     H A L _ C A N _ W a k e U p F r o m R x M s g C a l l b a c k ;         / *   L e g a c y   w e a k   W a k e U p F r o m R x M s g C a l l b a c k         * /  
         h c a n - > E r r o r C a l l b a c k                             =     H A L _ C A N _ E r r o r C a l l b a c k ;                             / *   L e g a c y   w e a k   E r r o r C a l l b a c k                             * /  
  
         i f   ( h c a n - > M s p I n i t C a l l b a c k   = =   N U L L )  
         {  
             h c a n - > M s p I n i t C a l l b a c k   =   H A L _ C A N _ M s p I n i t ;   / *   L e g a c y   w e a k   M s p I n i t   * /  
         }  
  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e :   C L O C K ,   N V I C   * /  
         h c a n - > M s p I n i t C a l l b a c k ( h c a n ) ;  
     }  
  
 # e l s e  
     i f   ( h c a n - > S t a t e   = =   H A L _ C A N _ S T A T E _ R E S E T )  
     {  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e :   C L O C K ,   N V I C   * /  
         H A L _ C A N _ M s p I n i t ( h c a n ) ;  
     }  
 # e n d i f   / *   ( U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S )   * /  
  
     / *   R e q u e s t   i n i t i a l i s a t i o n   * /  
     S E T _ B I T ( h c a n - > I n s t a n c e - > M C R ,   C A N _ M C R _ I N R Q ) ;  
  
     / *   G e t   t i c k   * /  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     / *   W a i t   i n i t i a l i s a t i o n   a c k n o w l e d g e   * /  
     w h i l e   ( ( h c a n - > I n s t a n c e - > M S R   &   C A N _ M S R _ I N A K )   = =   0 U )  
     {  
         i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   C A N _ T I M E O U T _ V A L U E )  
         {  
             / *   U p d a t e   e r r o r   c o d e   * /  
             h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ T I M E O U T ;  
  
             / *   C h a n g e   C A N   s t a t e   * /  
             h c a n - > S t a t e   =   H A L _ C A N _ S T A T E _ E R R O R ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
     }  
  
     / *   E x i t   f r o m   s l e e p   m o d e   * /  
     C L E A R _ B I T ( h c a n - > I n s t a n c e - > M C R ,   C A N _ M C R _ S L E E P ) ;  
  
     / *   G e t   t i c k   * /  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     / *   C h e c k   S l e e p   m o d e   l e a v e   a c k n o w l e d g e   * /  
     w h i l e   ( ( h c a n - > I n s t a n c e - > M S R   &   C A N _ M S R _ S L A K )   ! =   0 U )  
     {  
         i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   C A N _ T I M E O U T _ V A L U E )  
         {  
             / *   U p d a t e   e r r o r   c o d e   * /  
             h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ T I M E O U T ;  
  
             / *   C h a n g e   C A N   s t a t e   * /  
             h c a n - > S t a t e   =   H A L _ C A N _ S T A T E _ E R R O R ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
     }  
  
     / *   S e t   t h e   t i m e   t r i g g e r e d   c o m m u n i c a t i o n   m o d e   * /  
     i f   ( h c a n - > I n i t . T i m e T r i g g e r e d M o d e   = =   E N A B L E )  
     {  
         S E T _ B I T ( h c a n - > I n s t a n c e - > M C R ,   C A N _ M C R _ T T C M ) ;  
     }  
     e l s e  
     {  
         C L E A R _ B I T ( h c a n - > I n s t a n c e - > M C R ,   C A N _ M C R _ T T C M ) ;  
     }  
  
     / *   S e t   t h e   a u t o m a t i c   b u s - o f f   m a n a g e m e n t   * /  
     i f   ( h c a n - > I n i t . A u t o B u s O f f   = =   E N A B L E )  
     {  
         S E T _ B I T ( h c a n - > I n s t a n c e - > M C R ,   C A N _ M C R _ A B O M ) ;  
     }  
     e l s e  
     {  
         C L E A R _ B I T ( h c a n - > I n s t a n c e - > M C R ,   C A N _ M C R _ A B O M ) ;  
     }  
  
     / *   S e t   t h e   a u t o m a t i c   w a k e - u p   m o d e   * /  
     i f   ( h c a n - > I n i t . A u t o W a k e U p   = =   E N A B L E )  
     {  
         S E T _ B I T ( h c a n - > I n s t a n c e - > M C R ,   C A N _ M C R _ A W U M ) ;  
     }  
     e l s e  
     {  
         C L E A R _ B I T ( h c a n - > I n s t a n c e - > M C R ,   C A N _ M C R _ A W U M ) ;  
     }  
  
     / *   S e t   t h e   a u t o m a t i c   r e t r a n s m i s s i o n   * /  
     i f   ( h c a n - > I n i t . A u t o R e t r a n s m i s s i o n   = =   E N A B L E )  
     {  
         C L E A R _ B I T ( h c a n - > I n s t a n c e - > M C R ,   C A N _ M C R _ N A R T ) ;  
     }  
     e l s e  
     {  
         S E T _ B I T ( h c a n - > I n s t a n c e - > M C R ,   C A N _ M C R _ N A R T ) ;  
     }  
  
     / *   S e t   t h e   r e c e i v e   F I F O   l o c k e d   m o d e   * /  
     i f   ( h c a n - > I n i t . R e c e i v e F i f o L o c k e d   = =   E N A B L E )  
     {  
         S E T _ B I T ( h c a n - > I n s t a n c e - > M C R ,   C A N _ M C R _ R F L M ) ;  
     }  
     e l s e  
     {  
         C L E A R _ B I T ( h c a n - > I n s t a n c e - > M C R ,   C A N _ M C R _ R F L M ) ;  
     }  
  
     / *   S e t   t h e   t r a n s m i t   F I F O   p r i o r i t y   * /  
     i f   ( h c a n - > I n i t . T r a n s m i t F i f o P r i o r i t y   = =   E N A B L E )  
     {  
         S E T _ B I T ( h c a n - > I n s t a n c e - > M C R ,   C A N _ M C R _ T X F P ) ;  
     }  
     e l s e  
     {  
         C L E A R _ B I T ( h c a n - > I n s t a n c e - > M C R ,   C A N _ M C R _ T X F P ) ;  
     }  
  
     / *   S e t   t h e   b i t   t i m i n g   r e g i s t e r   * /  
     W R I T E _ R E G ( h c a n - > I n s t a n c e - > B T R ,   ( u i n t 3 2 _ t ) ( h c a n - > I n i t . M o d e                       |  
                                                                                         h c a n - > I n i t . S y n c J u m p W i d t h     |  
                                                                                         h c a n - > I n i t . T i m e S e g 1               |  
                                                                                         h c a n - > I n i t . T i m e S e g 2               |  
                                                                                         ( h c a n - > I n i t . P r e s c a l e r   -   1 U ) ) ) ;  
  
     / *   I n i t i a l i z e   t h e   e r r o r   c o d e   * /  
     h c a n - > E r r o r C o d e   =   H A L _ C A N _ E R R O R _ N O N E ;  
  
     / *   I n i t i a l i z e   t h e   C A N   s t a t e   * /  
     h c a n - > S t a t e   =   H A L _ C A N _ S T A T E _ R E A D Y ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D e i n i t i a l i z e s   t h e   C A N   p e r i p h e r a l   r e g i s t e r s   t o   t h e i r   d e f a u l t  
     *                   r e s e t   v a l u e s .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ D e I n i t ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     / *   C h e c k   C A N   h a n d l e   * /  
     i f   ( h c a n   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ C A N _ A L L _ I N S T A N C E ( h c a n - > I n s t a n c e ) ) ;  
  
     / *   S t o p   t h e   C A N   m o d u l e   * /  
     ( v o i d ) H A L _ C A N _ S t o p ( h c a n ) ;  
  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
     i f   ( h c a n - > M s p D e I n i t C a l l b a c k   = =   N U L L )  
     {  
         h c a n - > M s p D e I n i t C a l l b a c k   =   H A L _ C A N _ M s p D e I n i t ;   / *   L e g a c y   w e a k   M s p D e I n i t   * /  
     }  
  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e :   C L O C K ,   N V I C   * /  
     h c a n - > M s p D e I n i t C a l l b a c k ( h c a n ) ;  
  
 # e l s e  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e :   C L O C K ,   N V I C   * /  
     H A L _ C A N _ M s p D e I n i t ( h c a n ) ;  
 # e n d i f   / *   ( U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S )   * /  
  
     / *   R e s e t   t h e   C A N   p e r i p h e r a l   * /  
     S E T _ B I T ( h c a n - > I n s t a n c e - > M C R ,   C A N _ M C R _ R E S E T ) ;  
  
     / *   R e s e t   t h e   C A N   E r r o r C o d e   * /  
     h c a n - > E r r o r C o d e   =   H A L _ C A N _ E R R O R _ N O N E ;  
  
     / *   C h a n g e   C A N   s t a t e   * /  
     h c a n - > S t a t e   =   H A L _ C A N _ S T A T E _ R E S E T ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   C A N   M S P .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ C A N _ M s p I n i t ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c a n ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C A N _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e s   t h e   C A N   M S P .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ C A N _ M s p D e I n i t ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c a n ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C A N _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
 / * *  
     *   @ b r i e f     R e g i s t e r   a   C A N   C a l l B a c k .  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   C A N   m o d u l e  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                       @ a r g   @ r e f   H A L _ C A N _ T X _ M A I L B O X 0 _ C O M P L E T E _ C B _ I D   T x   M a i l b o x   0   C o m p l e t e   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ T X _ M A I L B O X 1 _ C O M P L E T E _ C B _ I D   T x   M a i l b o x   1   C o m p l e t e   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ T X _ M A I L B O X 2 _ C O M P L E T E _ C B _ I D   T x   M a i l b o x   2   C o m p l e t e   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ T X _ M A I L B O X 0 _ A B O R T _ C B _ I D   T x   M a i l b o x   0   A b o r t   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ T X _ M A I L B O X 1 _ A B O R T _ C B _ I D   T x   M a i l b o x   1   A b o r t   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ T X _ M A I L B O X 2 _ A B O R T _ C B _ I D   T x   M a i l b o x   2   A b o r t   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ R X _ F I F O 0 _ M S G _ P E N D I N G _ C B _ I D   R x   F i f o   0   m e s s a g e   p e n d i n g   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ R X _ F I F O 0 _ F U L L _ C B _ I D   R x   F i f o   0   f u l l   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ R X _ F I F O 1 _ M S G _ P E N D I N G _ C B _ I D   R x   F i f o   1   m e s s a g e   p e n d i n g   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ R X _ F I F O 1 _ F U L L _ C B _ I D   R x   F i f o   1   f u l l   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ S L E E P _ C B _ I D   S l e e p   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ W A K E U P _ F R O M _ R X _ M S G _ C B _ I D   W a k e   U p   f r o m   R x   m e s s a g e   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ E R R O R _ C B _ I D   E r r o r   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ M S P I N I T _ C B _ I D   M s p I n i t   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ M S P D E I N I T _ C B _ I D   M s p D e I n i t   c a l l b a c k   I D  
     *   @ p a r a m     p C a l l b a c k   p o i n t e r   t o   t h e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ R e g i s t e r C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n ,   H A L _ C A N _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,   v o i d   ( *   p C a l l b a c k ) ( C A N _ H a n d l e T y p e D e f   * _ h c a n ) )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     i f   ( h c a n - > S t a t e   = =   H A L _ C A N _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ C A N _ T X _ M A I L B O X 0 _ C O M P L E T E _ C B _ I D   :  
                 h c a n - > T x M a i l b o x 0 C o m p l e t e C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ T X _ M A I L B O X 1 _ C O M P L E T E _ C B _ I D   :  
                 h c a n - > T x M a i l b o x 1 C o m p l e t e C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ T X _ M A I L B O X 2 _ C O M P L E T E _ C B _ I D   :  
                 h c a n - > T x M a i l b o x 2 C o m p l e t e C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ T X _ M A I L B O X 0 _ A B O R T _ C B _ I D   :  
                 h c a n - > T x M a i l b o x 0 A b o r t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ T X _ M A I L B O X 1 _ A B O R T _ C B _ I D   :  
                 h c a n - > T x M a i l b o x 1 A b o r t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ T X _ M A I L B O X 2 _ A B O R T _ C B _ I D   :  
                 h c a n - > T x M a i l b o x 2 A b o r t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ R X _ F I F O 0 _ M S G _ P E N D I N G _ C B _ I D   :  
                 h c a n - > R x F i f o 0 M s g P e n d i n g C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ R X _ F I F O 0 _ F U L L _ C B _ I D   :  
                 h c a n - > R x F i f o 0 F u l l C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ R X _ F I F O 1 _ M S G _ P E N D I N G _ C B _ I D   :  
                 h c a n - > R x F i f o 1 M s g P e n d i n g C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ R X _ F I F O 1 _ F U L L _ C B _ I D   :  
                 h c a n - > R x F i f o 1 F u l l C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ S L E E P _ C B _ I D   :  
                 h c a n - > S l e e p C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ W A K E U P _ F R O M _ R X _ M S G _ C B _ I D   :  
                 h c a n - > W a k e U p F r o m R x M s g C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ E R R O R _ C B _ I D   :  
                 h c a n - > E r r o r C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ M S P I N I T _ C B _ I D   :  
                 h c a n - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ M S P D E I N I T _ C B _ I D   :  
                 h c a n - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( h c a n - > S t a t e   = =   H A L _ C A N _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ C A N _ M S P I N I T _ C B _ I D   :  
                 h c a n - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ M S P D E I N I T _ C B _ I D   :  
                 h c a n - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   a   C A N   C a l l B a c k .  
     *                   C A N   c a l l a b c k   i s   r e d i r e c t e d   t o   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   C A N   m o d u l e  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   u n r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                       @ a r g   @ r e f   H A L _ C A N _ T X _ M A I L B O X 0 _ C O M P L E T E _ C B _ I D   T x   M a i l b o x   0   C o m p l e t e   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ T X _ M A I L B O X 1 _ C O M P L E T E _ C B _ I D   T x   M a i l b o x   1   C o m p l e t e   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ T X _ M A I L B O X 2 _ C O M P L E T E _ C B _ I D   T x   M a i l b o x   2   C o m p l e t e   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ T X _ M A I L B O X 0 _ A B O R T _ C B _ I D   T x   M a i l b o x   0   A b o r t   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ T X _ M A I L B O X 1 _ A B O R T _ C B _ I D   T x   M a i l b o x   1   A b o r t   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ T X _ M A I L B O X 2 _ A B O R T _ C B _ I D   T x   M a i l b o x   2   A b o r t   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ R X _ F I F O 0 _ M S G _ P E N D I N G _ C B _ I D   R x   F i f o   0   m e s s a g e   p e n d i n g   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ R X _ F I F O 0 _ F U L L _ C B _ I D   R x   F i f o   0   f u l l   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ R X _ F I F O 1 _ M S G _ P E N D I N G _ C B _ I D   R x   F i f o   1   m e s s a g e   p e n d i n g   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ R X _ F I F O 1 _ F U L L _ C B _ I D   R x   F i f o   1   f u l l   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ S L E E P _ C B _ I D   S l e e p   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ W A K E U P _ F R O M _ R X _ M S G _ C B _ I D   W a k e   U p   f r o m   R x   m e s s a g e   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ E R R O R _ C B _ I D   E r r o r   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ M S P I N I T _ C B _ I D   M s p I n i t   c a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ C A N _ M S P D E I N I T _ C B _ I D   M s p D e I n i t   c a l l b a c k   I D  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ U n R e g i s t e r C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n ,   H A L _ C A N _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( h c a n - > S t a t e   = =   H A L _ C A N _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ C A N _ T X _ M A I L B O X 0 _ C O M P L E T E _ C B _ I D   :  
                 h c a n - > T x M a i l b o x 0 C o m p l e t e C a l l b a c k   =   H A L _ C A N _ T x M a i l b o x 0 C o m p l e t e C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ T X _ M A I L B O X 1 _ C O M P L E T E _ C B _ I D   :  
                 h c a n - > T x M a i l b o x 1 C o m p l e t e C a l l b a c k   =   H A L _ C A N _ T x M a i l b o x 1 C o m p l e t e C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ T X _ M A I L B O X 2 _ C O M P L E T E _ C B _ I D   :  
                 h c a n - > T x M a i l b o x 2 C o m p l e t e C a l l b a c k   =   H A L _ C A N _ T x M a i l b o x 2 C o m p l e t e C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ T X _ M A I L B O X 0 _ A B O R T _ C B _ I D   :  
                 h c a n - > T x M a i l b o x 0 A b o r t C a l l b a c k   =   H A L _ C A N _ T x M a i l b o x 0 A b o r t C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ T X _ M A I L B O X 1 _ A B O R T _ C B _ I D   :  
                 h c a n - > T x M a i l b o x 1 A b o r t C a l l b a c k   =   H A L _ C A N _ T x M a i l b o x 1 A b o r t C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ T X _ M A I L B O X 2 _ A B O R T _ C B _ I D   :  
                 h c a n - > T x M a i l b o x 2 A b o r t C a l l b a c k   =   H A L _ C A N _ T x M a i l b o x 2 A b o r t C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ R X _ F I F O 0 _ M S G _ P E N D I N G _ C B _ I D   :  
                 h c a n - > R x F i f o 0 M s g P e n d i n g C a l l b a c k   =   H A L _ C A N _ R x F i f o 0 M s g P e n d i n g C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ R X _ F I F O 0 _ F U L L _ C B _ I D   :  
                 h c a n - > R x F i f o 0 F u l l C a l l b a c k   =   H A L _ C A N _ R x F i f o 0 F u l l C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ R X _ F I F O 1 _ M S G _ P E N D I N G _ C B _ I D   :  
                 h c a n - > R x F i f o 1 M s g P e n d i n g C a l l b a c k   =   H A L _ C A N _ R x F i f o 1 M s g P e n d i n g C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ R X _ F I F O 1 _ F U L L _ C B _ I D   :  
                 h c a n - > R x F i f o 1 F u l l C a l l b a c k   =   H A L _ C A N _ R x F i f o 1 F u l l C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ S L E E P _ C B _ I D   :  
                 h c a n - > S l e e p C a l l b a c k   =   H A L _ C A N _ S l e e p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ W A K E U P _ F R O M _ R X _ M S G _ C B _ I D   :  
                 h c a n - > W a k e U p F r o m R x M s g C a l l b a c k   =   H A L _ C A N _ W a k e U p F r o m R x M s g C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ E R R O R _ C B _ I D   :  
                 h c a n - > E r r o r C a l l b a c k   =   H A L _ C A N _ E r r o r C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ M S P I N I T _ C B _ I D   :  
                 h c a n - > M s p I n i t C a l l b a c k   =   H A L _ C A N _ M s p I n i t ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ M S P D E I N I T _ C B _ I D   :  
                 h c a n - > M s p D e I n i t C a l l b a c k   =   H A L _ C A N _ M s p D e I n i t ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( h c a n - > S t a t e   = =   H A L _ C A N _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ C A N _ M S P I N I T _ C B _ I D   :  
                 h c a n - > M s p I n i t C a l l b a c k   =   H A L _ C A N _ M s p I n i t ;  
                 b r e a k ;  
  
             c a s e   H A L _ C A N _ M S P D E I N I T _ C B _ I D   :  
                 h c a n - > M s p D e I n i t C a l l b a c k   =   H A L _ C A N _ M s p D e I n i t ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     r e t u r n   s t a t u s ;  
 }  
 # e n d i f   / *   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C A N _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   C o n f i g u r a t i o n   f u n c t i o n s  
   *     @ b r i e f         C o n f i g u r a t i o n   f u n c t i o n s .  
   *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                             # # # # #   C o n f i g u r a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   H A L _ C A N _ C o n f i g F i l t e r                         :   C o n f i g u r e   t h e   C A N   r e c e p t i o n   f i l t e r s  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e s   t h e   C A N   r e c e p t i o n   f i l t e r   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   p a r a m e t e r s   i n   t h e   C A N _ F i l t e r I n i t S t r u c t .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ p a r a m     s F i l t e r C o n f i g   p o i n t e r   t o   a   C A N _ F i l t e r T y p e D e f   s t r u c t u r e   t h a t  
     *                   c o n t a i n s   t h e   f i l t e r   c o n f i g u r a t i o n   i n f o r m a t i o n .  
     *   @ r e t v a l   N o n e  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ C o n f i g F i l t e r ( C A N _ H a n d l e T y p e D e f   * h c a n ,   C A N _ F i l t e r T y p e D e f   * s F i l t e r C o n f i g )  
 {  
     u i n t 3 2 _ t   f i l t e r n b r b i t p o s ;  
     C A N _ T y p e D e f   * c a n _ i p   =   h c a n - > I n s t a n c e ;  
     H A L _ C A N _ S t a t e T y p e D e f   s t a t e   =   h c a n - > S t a t e ;  
  
     i f   ( ( s t a t e   = =   H A L _ C A N _ S T A T E _ R E A D Y )   | |  
             ( s t a t e   = =   H A L _ C A N _ S T A T E _ L I S T E N I N G ) )  
     {  
         / *   C h e c k   t h e   p a r a m e t e r s   * /  
         a s s e r t _ p a r a m ( I S _ C A N _ F I L T E R _ I D _ H A L F W O R D ( s F i l t e r C o n f i g - > F i l t e r I d H i g h ) ) ;  
         a s s e r t _ p a r a m ( I S _ C A N _ F I L T E R _ I D _ H A L F W O R D ( s F i l t e r C o n f i g - > F i l t e r I d L o w ) ) ;  
         a s s e r t _ p a r a m ( I S _ C A N _ F I L T E R _ I D _ H A L F W O R D ( s F i l t e r C o n f i g - > F i l t e r M a s k I d H i g h ) ) ;  
         a s s e r t _ p a r a m ( I S _ C A N _ F I L T E R _ I D _ H A L F W O R D ( s F i l t e r C o n f i g - > F i l t e r M a s k I d L o w ) ) ;  
         a s s e r t _ p a r a m ( I S _ C A N _ F I L T E R _ M O D E ( s F i l t e r C o n f i g - > F i l t e r M o d e ) ) ;  
         a s s e r t _ p a r a m ( I S _ C A N _ F I L T E R _ S C A L E ( s F i l t e r C o n f i g - > F i l t e r S c a l e ) ) ;  
         a s s e r t _ p a r a m ( I S _ C A N _ F I L T E R _ F I F O ( s F i l t e r C o n f i g - > F i l t e r F I F O A s s i g n m e n t ) ) ;  
         a s s e r t _ p a r a m ( I S _ C A N _ F I L T E R _ A C T I V A T I O N ( s F i l t e r C o n f i g - > F i l t e r A c t i v a t i o n ) ) ;  
  
 # i f       d e f i n e d ( C A N 2 )  
         / *   C A N 1   a n d   C A N 2   a r e   d u a l   i n s t a n c e s   w i t h   2 8   c o m m o n   f i l t e r s   b a n k s   * /  
         / *   S e l e c t   m a s t e r   i n s t a n c e   t o   a c c e s s   t h e   f i l t e r   b a n k s   * /  
         c a n _ i p   =   C A N 1 ;  
  
         / *   C h e c k   t h e   p a r a m e t e r s   * /  
         a s s e r t _ p a r a m ( I S _ C A N _ F I L T E R _ B A N K _ D U A L ( s F i l t e r C o n f i g - > F i l t e r B a n k ) ) ;  
         a s s e r t _ p a r a m ( I S _ C A N _ F I L T E R _ B A N K _ D U A L ( s F i l t e r C o n f i g - > S l a v e S t a r t F i l t e r B a n k ) ) ;  
 # e l s e  
         / *   C A N 1   i s   s i n g l e   i n s t a n c e   w i t h   1 4   d e d i c a t e d   f i l t e r s   b a n k s   * /  
  
         / *   C h e c k   t h e   p a r a m e t e r s   * /  
         a s s e r t _ p a r a m ( I S _ C A N _ F I L T E R _ B A N K _ S I N G L E ( s F i l t e r C o n f i g - > F i l t e r B a n k ) ) ;  
 # e n d i f  
  
         / *   I n i t i a l i s a t i o n   m o d e   f o r   t h e   f i l t e r   * /  
         S E T _ B I T ( c a n _ i p - > F M R ,   C A N _ F M R _ F I N I T ) ;  
  
 # i f       d e f i n e d ( C A N 2 )  
         / *   S e l e c t   t h e   s t a r t   f i l t e r   n u m b e r   o f   C A N 2   s l a v e   i n s t a n c e   * /  
         C L E A R _ B I T ( c a n _ i p - > F M R ,   C A N _ F M R _ C A N 2 S B ) ;  
         S E T _ B I T ( c a n _ i p - > F M R ,   s F i l t e r C o n f i g - > S l a v e S t a r t F i l t e r B a n k   < <   C A N _ F M R _ C A N 2 S B _ P o s ) ;  
  
 # e n d i f  
         / *   C o n v e r t   f i l t e r   n u m b e r   i n t o   b i t   p o s i t i o n   * /  
         f i l t e r n b r b i t p o s   =   ( u i n t 3 2 _ t ) 1   < <   ( s F i l t e r C o n f i g - > F i l t e r B a n k   &   0 x 1 F U ) ;  
  
         / *   F i l t e r   D e a c t i v a t i o n   * /  
         C L E A R _ B I T ( c a n _ i p - > F A 1 R ,   f i l t e r n b r b i t p o s ) ;  
  
         / *   F i l t e r   S c a l e   * /  
         i f   ( s F i l t e r C o n f i g - > F i l t e r S c a l e   = =   C A N _ F I L T E R S C A L E _ 1 6 B I T )  
         {  
             / *   1 6 - b i t   s c a l e   f o r   t h e   f i l t e r   * /  
             C L E A R _ B I T ( c a n _ i p - > F S 1 R ,   f i l t e r n b r b i t p o s ) ;  
  
             / *   F i r s t   1 6 - b i t   i d e n t i f i e r   a n d   F i r s t   1 6 - b i t   m a s k   * /  
             / *   O r   F i r s t   1 6 - b i t   i d e n t i f i e r   a n d   S e c o n d   1 6 - b i t   i d e n t i f i e r   * /  
             c a n _ i p - > s F i l t e r R e g i s t e r [ s F i l t e r C o n f i g - > F i l t e r B a n k ] . F R 1   =  
                 ( ( 0 x 0 0 0 0 F F F F U   &   ( u i n t 3 2 _ t ) s F i l t e r C o n f i g - > F i l t e r M a s k I d L o w )   < <   1 6 U )   |  
                 ( 0 x 0 0 0 0 F F F F U   &   ( u i n t 3 2 _ t ) s F i l t e r C o n f i g - > F i l t e r I d L o w ) ;  
  
             / *   S e c o n d   1 6 - b i t   i d e n t i f i e r   a n d   S e c o n d   1 6 - b i t   m a s k   * /  
             / *   O r   T h i r d   1 6 - b i t   i d e n t i f i e r   a n d   F o u r t h   1 6 - b i t   i d e n t i f i e r   * /  
             c a n _ i p - > s F i l t e r R e g i s t e r [ s F i l t e r C o n f i g - > F i l t e r B a n k ] . F R 2   =  
                 ( ( 0 x 0 0 0 0 F F F F U   &   ( u i n t 3 2 _ t ) s F i l t e r C o n f i g - > F i l t e r M a s k I d H i g h )   < <   1 6 U )   |  
                 ( 0 x 0 0 0 0 F F F F U   &   ( u i n t 3 2 _ t ) s F i l t e r C o n f i g - > F i l t e r I d H i g h ) ;  
         }  
  
         i f   ( s F i l t e r C o n f i g - > F i l t e r S c a l e   = =   C A N _ F I L T E R S C A L E _ 3 2 B I T )  
         {  
             / *   3 2 - b i t   s c a l e   f o r   t h e   f i l t e r   * /  
             S E T _ B I T ( c a n _ i p - > F S 1 R ,   f i l t e r n b r b i t p o s ) ;  
  
             / *   3 2 - b i t   i d e n t i f i e r   o r   F i r s t   3 2 - b i t   i d e n t i f i e r   * /  
             c a n _ i p - > s F i l t e r R e g i s t e r [ s F i l t e r C o n f i g - > F i l t e r B a n k ] . F R 1   =  
                 ( ( 0 x 0 0 0 0 F F F F U   &   ( u i n t 3 2 _ t ) s F i l t e r C o n f i g - > F i l t e r I d H i g h )   < <   1 6 U )   |  
                 ( 0 x 0 0 0 0 F F F F U   &   ( u i n t 3 2 _ t ) s F i l t e r C o n f i g - > F i l t e r I d L o w ) ;  
  
             / *   3 2 - b i t   m a s k   o r   S e c o n d   3 2 - b i t   i d e n t i f i e r   * /  
             c a n _ i p - > s F i l t e r R e g i s t e r [ s F i l t e r C o n f i g - > F i l t e r B a n k ] . F R 2   =  
                 ( ( 0 x 0 0 0 0 F F F F U   &   ( u i n t 3 2 _ t ) s F i l t e r C o n f i g - > F i l t e r M a s k I d H i g h )   < <   1 6 U )   |  
                 ( 0 x 0 0 0 0 F F F F U   &   ( u i n t 3 2 _ t ) s F i l t e r C o n f i g - > F i l t e r M a s k I d L o w ) ;  
         }  
  
         / *   F i l t e r   M o d e   * /  
         i f   ( s F i l t e r C o n f i g - > F i l t e r M o d e   = =   C A N _ F I L T E R M O D E _ I D M A S K )  
         {  
             / *   I d / M a s k   m o d e   f o r   t h e   f i l t e r * /  
             C L E A R _ B I T ( c a n _ i p - > F M 1 R ,   f i l t e r n b r b i t p o s ) ;  
         }  
         e l s e   / *   C A N _ F i l t e r I n i t S t r u c t - > C A N _ F i l t e r M o d e   = =   C A N _ F i l t e r M o d e _ I d L i s t   * /  
         {  
             / *   I d e n t i f i e r   l i s t   m o d e   f o r   t h e   f i l t e r * /  
             S E T _ B I T ( c a n _ i p - > F M 1 R ,   f i l t e r n b r b i t p o s ) ;  
         }  
  
         / *   F i l t e r   F I F O   a s s i g n m e n t   * /  
         i f   ( s F i l t e r C o n f i g - > F i l t e r F I F O A s s i g n m e n t   = =   C A N _ F I L T E R _ F I F O 0 )  
         {  
             / *   F I F O   0   a s s i g n a t i o n   f o r   t h e   f i l t e r   * /  
             C L E A R _ B I T ( c a n _ i p - > F F A 1 R ,   f i l t e r n b r b i t p o s ) ;  
         }  
         e l s e  
         {  
             / *   F I F O   1   a s s i g n a t i o n   f o r   t h e   f i l t e r   * /  
             S E T _ B I T ( c a n _ i p - > F F A 1 R ,   f i l t e r n b r b i t p o s ) ;  
         }  
  
         / *   F i l t e r   a c t i v a t i o n   * /  
         i f   ( s F i l t e r C o n f i g - > F i l t e r A c t i v a t i o n   = =   C A N _ F I L T E R _ E N A B L E )  
         {  
             S E T _ B I T ( c a n _ i p - > F A 1 R ,   f i l t e r n b r b i t p o s ) ;  
         }  
  
         / *   L e a v e   t h e   i n i t i a l i s a t i o n   m o d e   f o r   t h e   f i l t e r   * /  
         C L E A R _ B I T ( c a n _ i p - > F M R ,   C A N _ F M R _ F I N I T ) ;  
  
         / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         / *   U p d a t e   e r r o r   c o d e   * /  
         h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ N O T _ I N I T I A L I Z E D ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C A N _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   C o n t r o l   f u n c t i o n s  
   *     @ b r i e f         C o n t r o l   f u n c t i o n s  
   *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   C o n t r o l   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   H A L _ C A N _ S t a r t                                         :   S t a r t   t h e   C A N   m o d u l e  
             ( + )   H A L _ C A N _ S t o p                                           :   S t o p   t h e   C A N   m o d u l e  
             ( + )   H A L _ C A N _ R e q u e s t S l e e p                           :   R e q u e s t   s l e e p   m o d e   e n t r y .  
             ( + )   H A L _ C A N _ W a k e U p                                       :   W a k e   u p   f r o m   s l e e p   m o d e .  
             ( + )   H A L _ C A N _ I s S l e e p A c t i v e                         :   C h e c k   i s   s l e e p   m o d e   i s   a c t i v e .  
             ( + )   H A L _ C A N _ A d d T x M e s s a g e                           :   A d d   a   m e s s a g e   t o   t h e   T x   m a i l b o x e s  
                                                                                           a n d   a c t i v a t e   t h e   c o r r e s p o n d i n g  
                                                                                           t r a n s m i s s i o n   r e q u e s t  
             ( + )   H A L _ C A N _ A b o r t T x R e q u e s t                       :   A b o r t   t r a n s m i s s i o n   r e q u e s t  
             ( + )   H A L _ C A N _ G e t T x M a i l b o x e s F r e e L e v e l     :   R e t u r n   T x   m a i l b o x e s   f r e e   l e v e l  
             ( + )   H A L _ C A N _ I s T x M e s s a g e P e n d i n g               :   C h e c k   i f   a   t r a n s m i s s i o n   r e q u e s t   i s  
                                                                                           p e n d i n g   o n   t h e   s e l e c t e d   T x   m a i l b o x  
             ( + )   H A L _ C A N _ G e t R x M e s s a g e                           :   G e t   a   C A N   f r a m e   f r o m   t h e   R x   F I F O  
             ( + )   H A L _ C A N _ G e t R x F i f o F i l l L e v e l               :   R e t u r n   R x   F I F O   f i l l   l e v e l  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S t a r t   t h e   C A N   m o d u l e .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a n   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ S t a r t ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     u i n t 3 2 _ t   t i c k s t a r t ;  
  
     i f   ( h c a n - > S t a t e   = =   H A L _ C A N _ S T A T E _ R E A D Y )  
     {  
         / *   C h a n g e   C A N   p e r i p h e r a l   s t a t e   * /  
         h c a n - > S t a t e   =   H A L _ C A N _ S T A T E _ L I S T E N I N G ;  
  
         / *   R e q u e s t   l e a v e   i n i t i a l i s a t i o n   * /  
         C L E A R _ B I T ( h c a n - > I n s t a n c e - > M C R ,   C A N _ M C R _ I N R Q ) ;  
  
         / *   G e t   t i c k   * /  
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
         / *   W a i t   t h e   a c k n o w l e d g e   * /  
         w h i l e   ( ( h c a n - > I n s t a n c e - > M S R   &   C A N _ M S R _ I N A K )   ! =   0 U )  
         {  
             / *   C h e c k   f o r   t h e   T i m e o u t   * /  
             i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   C A N _ T I M E O U T _ V A L U E )  
             {  
                 / *   U p d a t e   e r r o r   c o d e   * /  
                 h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ T I M E O U T ;  
  
                 / *   C h a n g e   C A N   s t a t e   * /  
                 h c a n - > S t a t e   =   H A L _ C A N _ S T A T E _ E R R O R ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
  
         / *   R e s e t   t h e   C A N   E r r o r C o d e   * /  
         h c a n - > E r r o r C o d e   =   H A L _ C A N _ E R R O R _ N O N E ;  
  
         / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         / *   U p d a t e   e r r o r   c o d e   * /  
         h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ N O T _ R E A D Y ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     S t o p   t h e   C A N   m o d u l e   a n d   e n a b l e   a c c e s s   t o   c o n f i g u r a t i o n   r e g i s t e r s .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a n   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ S t o p ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     u i n t 3 2 _ t   t i c k s t a r t ;  
  
     i f   ( h c a n - > S t a t e   = =   H A L _ C A N _ S T A T E _ L I S T E N I N G )  
     {  
         / *   R e q u e s t   i n i t i a l i s a t i o n   * /  
         S E T _ B I T ( h c a n - > I n s t a n c e - > M C R ,   C A N _ M C R _ I N R Q ) ;  
  
         / *   G e t   t i c k   * /  
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
         / *   W a i t   t h e   a c k n o w l e d g e   * /  
         w h i l e   ( ( h c a n - > I n s t a n c e - > M S R   &   C A N _ M S R _ I N A K )   = =   0 U )  
         {  
             / *   C h e c k   f o r   t h e   T i m e o u t   * /  
             i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   C A N _ T I M E O U T _ V A L U E )  
             {  
                 / *   U p d a t e   e r r o r   c o d e   * /  
                 h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ T I M E O U T ;  
  
                 / *   C h a n g e   C A N   s t a t e   * /  
                 h c a n - > S t a t e   =   H A L _ C A N _ S T A T E _ E R R O R ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
  
         / *   E x i t   f r o m   s l e e p   m o d e   * /  
         C L E A R _ B I T ( h c a n - > I n s t a n c e - > M C R ,   C A N _ M C R _ S L E E P ) ;  
  
         / *   C h a n g e   C A N   p e r i p h e r a l   s t a t e   * /  
         h c a n - > S t a t e   =   H A L _ C A N _ S T A T E _ R E A D Y ;  
  
         / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         / *   U p d a t e   e r r o r   c o d e   * /  
         h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ N O T _ S T A R T E D ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     R e q u e s t   t h e   s l e e p   m o d e   ( l o w   p o w e r )   e n t r y .  
     *                   W h e n   r e t u r n i n g   f r o m   t h i s   f u n c t i o n ,   S l e e p   m o d e   w i l l   b e   e n t e r e d  
     *                   a s   s o o n   a s   t h e   c u r r e n t   C A N   a c t i v i t y   ( t r a n s m i s s i o n   o r   r e c e p t i o n  
     *                   o f   a   C A N   f r a m e )   h a s   b e e n   c o m p l e t e d .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   H A L   s t a t u s .  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ R e q u e s t S l e e p ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     H A L _ C A N _ S t a t e T y p e D e f   s t a t e   =   h c a n - > S t a t e ;  
  
     i f   ( ( s t a t e   = =   H A L _ C A N _ S T A T E _ R E A D Y )   | |  
             ( s t a t e   = =   H A L _ C A N _ S T A T E _ L I S T E N I N G ) )  
     {  
         / *   R e q u e s t   S l e e p   m o d e   * /  
         S E T _ B I T ( h c a n - > I n s t a n c e - > M C R ,   C A N _ M C R _ S L E E P ) ;  
  
         / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         / *   U p d a t e   e r r o r   c o d e   * /  
         h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ N O T _ I N I T I A L I Z E D ;  
  
         / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
         r e t u r n   H A L _ E R R O R ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     W a k e   u p   f r o m   s l e e p   m o d e .  
     *                   W h e n   r e t u r n i n g   w i t h   H A L _ O K   s t a t u s   f r o m   t h i s   f u n c t i o n ,   S l e e p   m o d e  
     *                   i s   e x i t e d .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   H A L   s t a t u s .  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ W a k e U p ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     _ _ I O   u i n t 3 2 _ t   c o u n t   =   0 ;  
     u i n t 3 2 _ t   t i m e o u t   =   1 0 0 0 0 0 0 U ;  
     H A L _ C A N _ S t a t e T y p e D e f   s t a t e   =   h c a n - > S t a t e ;  
  
     i f   ( ( s t a t e   = =   H A L _ C A N _ S T A T E _ R E A D Y )   | |  
             ( s t a t e   = =   H A L _ C A N _ S T A T E _ L I S T E N I N G ) )  
     {  
         / *   W a k e   u p   r e q u e s t   * /  
         C L E A R _ B I T ( h c a n - > I n s t a n c e - > M C R ,   C A N _ M C R _ S L E E P ) ;  
  
         / *   W a i t   s l e e p   m o d e   i s   e x i t e d   * /  
         d o  
         {  
             / *   I n c r e m e n t   c o u n t e r   * /  
             c o u n t + + ;  
  
             / *   C h e c k   i f   t i m e o u t   i s   r e a c h e d   * /  
             i f   ( c o u n t   >   t i m e o u t )  
             {  
                 / *   U p d a t e   e r r o r   c o d e   * /  
                 h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ T I M E O U T ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         w h i l e   ( ( h c a n - > I n s t a n c e - > M S R   &   C A N _ M S R _ S L A K )   ! =   0 U ) ;  
  
         / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         / *   U p d a t e   e r r o r   c o d e   * /  
         h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ N O T _ I N I T I A L I Z E D ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i s   s l e e p   m o d e   i s   a c t i v e .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   S t a t u s  
     *                     -   0   :   S l e e p   m o d e   i s   n o t   a c t i v e .  
     *                     -   1   :   S l e e p   m o d e   i s   a c t i v e .  
     * /  
 u i n t 3 2 _ t   H A L _ C A N _ I s S l e e p A c t i v e ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     u i n t 3 2 _ t   s t a t u s   =   0 U ;  
     H A L _ C A N _ S t a t e T y p e D e f   s t a t e   =   h c a n - > S t a t e ;  
  
     i f   ( ( s t a t e   = =   H A L _ C A N _ S T A T E _ R E A D Y )   | |  
             ( s t a t e   = =   H A L _ C A N _ S T A T E _ L I S T E N I N G ) )  
     {  
         / *   C h e c k   S l e e p   m o d e   * /  
         i f   ( ( h c a n - > I n s t a n c e - > M S R   &   C A N _ M S R _ S L A K )   ! =   0 U )  
         {  
             s t a t u s   =   1 U ;  
         }  
     }  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     A d d   a   m e s s a g e   t o   t h e   f i r s t   f r e e   T x   m a i l b o x   a n d   a c t i v a t e   t h e  
     *                   c o r r e s p o n d i n g   t r a n s m i s s i o n   r e q u e s t .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ p a r a m     p H e a d e r   p o i n t e r   t o   a   C A N _ T x H e a d e r T y p e D e f   s t r u c t u r e .  
     *   @ p a r a m     a D a t a   a r r a y   c o n t a i n i n g   t h e   p a y l o a d   o f   t h e   T x   f r a m e .  
     *   @ p a r a m     p T x M a i l b o x   p o i n t e r   t o   a   v a r i a b l e   w h e r e   t h e   f u n c t i o n   w i l l   r e t u r n  
     *                   t h e   T x M a i l b o x   u s e d   t o   s t o r e   t h e   T x   m e s s a g e .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ a r g   C A N _ T x _ M a i l b o x e s .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ A d d T x M e s s a g e ( C A N _ H a n d l e T y p e D e f   * h c a n ,   C A N _ T x H e a d e r T y p e D e f   * p H e a d e r ,   u i n t 8 _ t   a D a t a [ ] ,   u i n t 3 2 _ t   * p T x M a i l b o x )  
 {  
     u i n t 3 2 _ t   t r a n s m i t m a i l b o x ;  
     H A L _ C A N _ S t a t e T y p e D e f   s t a t e   =   h c a n - > S t a t e ;  
     u i n t 3 2 _ t   t s r   =   R E A D _ R E G ( h c a n - > I n s t a n c e - > T S R ) ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ C A N _ I D T Y P E ( p H e a d e r - > I D E ) ) ;  
     a s s e r t _ p a r a m ( I S _ C A N _ R T R ( p H e a d e r - > R T R ) ) ;  
     a s s e r t _ p a r a m ( I S _ C A N _ D L C ( p H e a d e r - > D L C ) ) ;  
     i f   ( p H e a d e r - > I D E   = =   C A N _ I D _ S T D )  
     {  
         a s s e r t _ p a r a m ( I S _ C A N _ S T D I D ( p H e a d e r - > S t d I d ) ) ;  
     }  
     e l s e  
     {  
         a s s e r t _ p a r a m ( I S _ C A N _ E X T I D ( p H e a d e r - > E x t I d ) ) ;  
     }  
     a s s e r t _ p a r a m ( I S _ F U N C T I O N A L _ S T A T E ( p H e a d e r - > T r a n s m i t G l o b a l T i m e ) ) ;  
  
     i f   ( ( s t a t e   = =   H A L _ C A N _ S T A T E _ R E A D Y )   | |  
             ( s t a t e   = =   H A L _ C A N _ S T A T E _ L I S T E N I N G ) )  
     {  
         / *   C h e c k   t h a t   a l l   t h e   T x   m a i l b o x e s   a r e   n o t   f u l l   * /  
         i f   ( ( ( t s r   &   C A N _ T S R _ T M E 0 )   ! =   0 U )   | |  
                 ( ( t s r   &   C A N _ T S R _ T M E 1 )   ! =   0 U )   | |  
                 ( ( t s r   &   C A N _ T S R _ T M E 2 )   ! =   0 U ) )  
         {  
             / *   S e l e c t   a n   e m p t y   t r a n s m i t   m a i l b o x   * /  
             t r a n s m i t m a i l b o x   =   ( t s r   &   C A N _ T S R _ C O D E )   > >   C A N _ T S R _ C O D E _ P o s ;  
  
             / *   C h e c k   t r a n s m i t   m a i l b o x   v a l u e   * /  
             i f   ( t r a n s m i t m a i l b o x   >   2 U )  
             {  
                 / *   U p d a t e   e r r o r   c o d e   * /  
                 h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ I N T E R N A L ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
  
             / *   S t o r e   t h e   T x   m a i l b o x   * /  
             * p T x M a i l b o x   =   ( u i n t 3 2 _ t ) 1   < <   t r a n s m i t m a i l b o x ;  
  
             / *   S e t   u p   t h e   I d   * /  
             i f   ( p H e a d e r - > I D E   = =   C A N _ I D _ S T D )  
             {  
                 h c a n - > I n s t a n c e - > s T x M a i l B o x [ t r a n s m i t m a i l b o x ] . T I R   =   ( ( p H e a d e r - > S t d I d   < <   C A N _ T I 0 R _ S T I D _ P o s )   |  
                                                                                                                       p H e a d e r - > R T R ) ;  
             }  
             e l s e  
             {  
                 h c a n - > I n s t a n c e - > s T x M a i l B o x [ t r a n s m i t m a i l b o x ] . T I R   =   ( ( p H e a d e r - > E x t I d   < <   C A N _ T I 0 R _ E X I D _ P o s )   |  
                                                                                                                       p H e a d e r - > I D E   |  
                                                                                                                       p H e a d e r - > R T R ) ;  
             }  
  
             / *   S e t   u p   t h e   D L C   * /  
             h c a n - > I n s t a n c e - > s T x M a i l B o x [ t r a n s m i t m a i l b o x ] . T D T R   =   ( p H e a d e r - > D L C ) ;  
  
             / *   S e t   u p   t h e   T r a n s m i t   G l o b a l   T i m e   m o d e   * /  
             i f   ( p H e a d e r - > T r a n s m i t G l o b a l T i m e   = =   E N A B L E )  
             {  
                 S E T _ B I T ( h c a n - > I n s t a n c e - > s T x M a i l B o x [ t r a n s m i t m a i l b o x ] . T D T R ,   C A N _ T D T 0 R _ T G T ) ;  
             }  
  
             / *   S e t   u p   t h e   d a t a   f i e l d   * /  
             W R I T E _ R E G ( h c a n - > I n s t a n c e - > s T x M a i l B o x [ t r a n s m i t m a i l b o x ] . T D H R ,  
                                 ( ( u i n t 3 2 _ t ) a D a t a [ 7 ]   < <   C A N _ T D H 0 R _ D A T A 7 _ P o s )   |  
                                 ( ( u i n t 3 2 _ t ) a D a t a [ 6 ]   < <   C A N _ T D H 0 R _ D A T A 6 _ P o s )   |  
                                 ( ( u i n t 3 2 _ t ) a D a t a [ 5 ]   < <   C A N _ T D H 0 R _ D A T A 5 _ P o s )   |  
                                 ( ( u i n t 3 2 _ t ) a D a t a [ 4 ]   < <   C A N _ T D H 0 R _ D A T A 4 _ P o s ) ) ;  
             W R I T E _ R E G ( h c a n - > I n s t a n c e - > s T x M a i l B o x [ t r a n s m i t m a i l b o x ] . T D L R ,  
                                 ( ( u i n t 3 2 _ t ) a D a t a [ 3 ]   < <   C A N _ T D L 0 R _ D A T A 3 _ P o s )   |  
                                 ( ( u i n t 3 2 _ t ) a D a t a [ 2 ]   < <   C A N _ T D L 0 R _ D A T A 2 _ P o s )   |  
                                 ( ( u i n t 3 2 _ t ) a D a t a [ 1 ]   < <   C A N _ T D L 0 R _ D A T A 1 _ P o s )   |  
                                 ( ( u i n t 3 2 _ t ) a D a t a [ 0 ]   < <   C A N _ T D L 0 R _ D A T A 0 _ P o s ) ) ;  
  
             / *   R e q u e s t   t r a n s m i s s i o n   * /  
             S E T _ B I T ( h c a n - > I n s t a n c e - > s T x M a i l B o x [ t r a n s m i t m a i l b o x ] . T I R ,   C A N _ T I 0 R _ T X R Q ) ;  
  
             / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
             r e t u r n   H A L _ O K ;  
         }  
         e l s e  
         {  
             / *   U p d a t e   e r r o r   c o d e   * /  
             h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ P A R A M ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   e r r o r   c o d e   * /  
         h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ N O T _ I N I T I A L I Z E D ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     A b o r t   t r a n s m i s s i o n   r e q u e s t s  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a n   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ p a r a m     T x M a i l b o x e s   L i s t   o f   t h e   T x   M a i l b o x e s   t o   a b o r t .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   @ a r g   C A N _ T x _ M a i l b o x e s .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ A b o r t T x R e q u e s t ( C A N _ H a n d l e T y p e D e f   * h c a n ,   u i n t 3 2 _ t   T x M a i l b o x e s )  
 {  
     H A L _ C A N _ S t a t e T y p e D e f   s t a t e   =   h c a n - > S t a t e ;  
  
     / *   C h e c k   f u n c t i o n   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ C A N _ T X _ M A I L B O X _ L I S T ( T x M a i l b o x e s ) ) ;  
  
     i f   ( ( s t a t e   = =   H A L _ C A N _ S T A T E _ R E A D Y )   | |  
             ( s t a t e   = =   H A L _ C A N _ S T A T E _ L I S T E N I N G ) )  
     {  
         / *   C h e c k   T x   M a i l b o x   0   * /  
         i f   ( ( T x M a i l b o x e s   &   C A N _ T X _ M A I L B O X 0 )   ! =   0 U )  
         {  
             / *   A d d   c a n c e l l a t i o n   r e q u e s t   f o r   T x   M a i l b o x   0   * /  
             S E T _ B I T ( h c a n - > I n s t a n c e - > T S R ,   C A N _ T S R _ A B R Q 0 ) ;  
         }  
  
         / *   C h e c k   T x   M a i l b o x   1   * /  
         i f   ( ( T x M a i l b o x e s   &   C A N _ T X _ M A I L B O X 1 )   ! =   0 U )  
         {  
             / *   A d d   c a n c e l l a t i o n   r e q u e s t   f o r   T x   M a i l b o x   1   * /  
             S E T _ B I T ( h c a n - > I n s t a n c e - > T S R ,   C A N _ T S R _ A B R Q 1 ) ;  
         }  
  
         / *   C h e c k   T x   M a i l b o x   2   * /  
         i f   ( ( T x M a i l b o x e s   &   C A N _ T X _ M A I L B O X 2 )   ! =   0 U )  
         {  
             / *   A d d   c a n c e l l a t i o n   r e q u e s t   f o r   T x   M a i l b o x   2   * /  
             S E T _ B I T ( h c a n - > I n s t a n c e - > T S R ,   C A N _ T S R _ A B R Q 2 ) ;  
         }  
  
         / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         / *   U p d a t e   e r r o r   c o d e   * /  
         h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ N O T _ I N I T I A L I Z E D ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   T x   M a i l b o x e s   f r e e   l e v e l :   n u m b e r   o f   f r e e   T x   M a i l b o x e s .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   N u m b e r   o f   f r e e   T x   M a i l b o x e s .  
     * /  
 u i n t 3 2 _ t   H A L _ C A N _ G e t T x M a i l b o x e s F r e e L e v e l ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     u i n t 3 2 _ t   f r e e l e v e l   =   0 U ;  
     H A L _ C A N _ S t a t e T y p e D e f   s t a t e   =   h c a n - > S t a t e ;  
  
     i f   ( ( s t a t e   = =   H A L _ C A N _ S T A T E _ R E A D Y )   | |  
             ( s t a t e   = =   H A L _ C A N _ S T A T E _ L I S T E N I N G ) )  
     {  
         / *   C h e c k   T x   M a i l b o x   0   s t a t u s   * /  
         i f   ( ( h c a n - > I n s t a n c e - > T S R   &   C A N _ T S R _ T M E 0 )   ! =   0 U )  
         {  
             f r e e l e v e l + + ;  
         }  
  
         / *   C h e c k   T x   M a i l b o x   1   s t a t u s   * /  
         i f   ( ( h c a n - > I n s t a n c e - > T S R   &   C A N _ T S R _ T M E 1 )   ! =   0 U )  
         {  
             f r e e l e v e l + + ;  
         }  
  
         / *   C h e c k   T x   M a i l b o x   2   s t a t u s   * /  
         i f   ( ( h c a n - > I n s t a n c e - > T S R   &   C A N _ T S R _ T M E 2 )   ! =   0 U )  
         {  
             f r e e l e v e l + + ;  
         }  
     }  
  
     / *   R e t u r n   T x   M a i l b o x e s   f r e e   l e v e l   * /  
     r e t u r n   f r e e l e v e l ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   a   t r a n s m i s s i o n   r e q u e s t   i s   p e n d i n g   o n   t h e   s e l e c t e d   T x  
     *                   M a i l b o x e s .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a n   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ p a r a m     T x M a i l b o x e s   L i s t   o f   T x   M a i l b o x e s   t o   c h e c k .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   @ a r g   C A N _ T x _ M a i l b o x e s .  
     *   @ r e t v a l   S t a t u s  
     *                     -   0   :   N o   p e n d i n g   t r a n s m i s s i o n   r e q u e s t   o n   a n y   s e l e c t e d   T x   M a i l b o x e s .  
     *                     -   1   :   P e n d i n g   t r a n s m i s s i o n   r e q u e s t   o n   a t   l e a s t   o n e   o f   t h e   s e l e c t e d  
     *                                 T x   M a i l b o x .  
     * /  
 u i n t 3 2 _ t   H A L _ C A N _ I s T x M e s s a g e P e n d i n g ( C A N _ H a n d l e T y p e D e f   * h c a n ,   u i n t 3 2 _ t   T x M a i l b o x e s )  
 {  
     u i n t 3 2 _ t   s t a t u s   =   0 U ;  
     H A L _ C A N _ S t a t e T y p e D e f   s t a t e   =   h c a n - > S t a t e ;  
  
     / *   C h e c k   f u n c t i o n   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ C A N _ T X _ M A I L B O X _ L I S T ( T x M a i l b o x e s ) ) ;  
  
     i f   ( ( s t a t e   = =   H A L _ C A N _ S T A T E _ R E A D Y )   | |  
             ( s t a t e   = =   H A L _ C A N _ S T A T E _ L I S T E N I N G ) )  
     {  
         / *   C h e c k   p e n d i n g   t r a n s m i s s i o n   r e q u e s t   o n   t h e   s e l e c t e d   T x   M a i l b o x e s   * /  
         i f   ( ( h c a n - > I n s t a n c e - > T S R   &   ( T x M a i l b o x e s   < <   C A N _ T S R _ T M E 0 _ P o s ) )   ! =   ( T x M a i l b o x e s   < <   C A N _ T S R _ T M E 0 _ P o s ) )  
         {  
             s t a t u s   =   1 U ;  
         }  
     }  
  
     / *   R e t u r n   s t a t u s   * /  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   t i m e s t a m p   o f   T x   m e s s a g e   s e n t ,   i f   t i m e   t r i g g e r e d   c o m m u n i c a t i o n  
                         m o d e   i s   e n a b l e d .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ p a r a m     T x M a i l b o x   T x   M a i l b o x   w h e r e   t h e   t i m e s t a m p   o f   m e s s a g e   s e n t   w i l l   b e  
     *                   r e a d .  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   v a l u e   o f   @ a r g   C A N _ T x _ M a i l b o x e s .  
     *   @ r e t v a l   T i m e s t a m p   o f   m e s s a g e   s e n t   f r o m   T x   M a i l b o x .  
     * /  
 u i n t 3 2 _ t   H A L _ C A N _ G e t T x T i m e s t a m p ( C A N _ H a n d l e T y p e D e f   * h c a n ,   u i n t 3 2 _ t   T x M a i l b o x )  
 {  
     u i n t 3 2 _ t   t i m e s t a m p   =   0 U ;  
     u i n t 3 2 _ t   t r a n s m i t m a i l b o x ;  
     H A L _ C A N _ S t a t e T y p e D e f   s t a t e   =   h c a n - > S t a t e ;  
  
     / *   C h e c k   f u n c t i o n   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ C A N _ T X _ M A I L B O X ( T x M a i l b o x ) ) ;  
  
     i f   ( ( s t a t e   = =   H A L _ C A N _ S T A T E _ R E A D Y )   | |  
             ( s t a t e   = =   H A L _ C A N _ S T A T E _ L I S T E N I N G ) )  
     {  
         / *   S e l e c t   t h e   T x   m a i l b o x   * /  
         t r a n s m i t m a i l b o x   =   P O S I T I O N _ V A L ( T x M a i l b o x ) ;  
  
         / *   G e t   t i m e s t a m p   * /  
         t i m e s t a m p   =   ( h c a n - > I n s t a n c e - > s T x M a i l B o x [ t r a n s m i t m a i l b o x ] . T D T R   &   C A N _ T D T 0 R _ T I M E )   > >   C A N _ T D T 0 R _ T I M E _ P o s ;  
     }  
  
     / *   R e t u r n   t h e   t i m e s t a m p   * /  
     r e t u r n   t i m e s t a m p ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   a n   C A N   f r a m e   f r o m   t h e   R x   F I F O   z o n e   i n t o   t h e   m e s s a g e   R A M .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a n   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ p a r a m     R x F i f o   F i f o   n u m b e r   o f   t h e   r e c e i v e d   m e s s a g e   t o   b e   r e a d .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ a r g   C A N _ r e c e i v e _ F I F O _ n u m b e r .  
     *   @ p a r a m     p H e a d e r   p o i n t e r   t o   a   C A N _ R x H e a d e r T y p e D e f   s t r u c t u r e   w h e r e   t h e   h e a d e r  
     *                   o f   t h e   R x   f r a m e   w i l l   b e   s t o r e d .  
     *   @ p a r a m     a D a t a   a r r a y   w h e r e   t h e   p a y l o a d   o f   t h e   R x   f r a m e   w i l l   b e   s t o r e d .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ G e t R x M e s s a g e ( C A N _ H a n d l e T y p e D e f   * h c a n ,   u i n t 3 2 _ t   R x F i f o ,   C A N _ R x H e a d e r T y p e D e f   * p H e a d e r ,   u i n t 8 _ t   a D a t a [ ] )  
 {  
     H A L _ C A N _ S t a t e T y p e D e f   s t a t e   =   h c a n - > S t a t e ;  
  
     a s s e r t _ p a r a m ( I S _ C A N _ R X _ F I F O ( R x F i f o ) ) ;  
  
     i f   ( ( s t a t e   = =   H A L _ C A N _ S T A T E _ R E A D Y )   | |  
             ( s t a t e   = =   H A L _ C A N _ S T A T E _ L I S T E N I N G ) )  
     {  
         / *   C h e c k   t h e   R x   F I F O   * /  
         i f   ( R x F i f o   = =   C A N _ R X _ F I F O 0 )   / *   R x   e l e m e n t   i s   a s s i g n e d   t o   R x   F I F O   0   * /  
         {  
             / *   C h e c k   t h a t   t h e   R x   F I F O   0   i s   n o t   e m p t y   * /  
             i f   ( ( h c a n - > I n s t a n c e - > R F 0 R   &   C A N _ R F 0 R _ F M P 0 )   = =   0 U )  
             {  
                 / *   U p d a t e   e r r o r   c o d e   * /  
                 h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ P A R A M ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         e l s e   / *   R x   e l e m e n t   i s   a s s i g n e d   t o   R x   F I F O   1   * /  
         {  
             / *   C h e c k   t h a t   t h e   R x   F I F O   1   i s   n o t   e m p t y   * /  
             i f   ( ( h c a n - > I n s t a n c e - > R F 1 R   &   C A N _ R F 1 R _ F M P 1 )   = =   0 U )  
             {  
                 / *   U p d a t e   e r r o r   c o d e   * /  
                 h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ P A R A M ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
  
         / *   G e t   t h e   h e a d e r   * /  
         p H e a d e r - > I D E   =   C A N _ R I 0 R _ I D E   &   h c a n - > I n s t a n c e - > s F I F O M a i l B o x [ R x F i f o ] . R I R ;  
         i f   ( p H e a d e r - > I D E   = =   C A N _ I D _ S T D )  
         {  
             p H e a d e r - > S t d I d   =   ( C A N _ R I 0 R _ S T I D   &   h c a n - > I n s t a n c e - > s F I F O M a i l B o x [ R x F i f o ] . R I R )   > >   C A N _ T I 0 R _ S T I D _ P o s ;  
         }  
         e l s e  
         {  
             p H e a d e r - > E x t I d   =   ( ( C A N _ R I 0 R _ E X I D   |   C A N _ R I 0 R _ S T I D )   &   h c a n - > I n s t a n c e - > s F I F O M a i l B o x [ R x F i f o ] . R I R )   > >   C A N _ R I 0 R _ E X I D _ P o s ;  
         }  
         p H e a d e r - > R T R   =   ( C A N _ R I 0 R _ R T R   &   h c a n - > I n s t a n c e - > s F I F O M a i l B o x [ R x F i f o ] . R I R ) ;  
         p H e a d e r - > D L C   =   ( C A N _ R D T 0 R _ D L C   &   h c a n - > I n s t a n c e - > s F I F O M a i l B o x [ R x F i f o ] . R D T R )   > >   C A N _ R D T 0 R _ D L C _ P o s ;  
         p H e a d e r - > F i l t e r M a t c h I n d e x   =   ( C A N _ R D T 0 R _ F M I   &   h c a n - > I n s t a n c e - > s F I F O M a i l B o x [ R x F i f o ] . R D T R )   > >   C A N _ R D T 0 R _ F M I _ P o s ;  
         p H e a d e r - > T i m e s t a m p   =   ( C A N _ R D T 0 R _ T I M E   &   h c a n - > I n s t a n c e - > s F I F O M a i l B o x [ R x F i f o ] . R D T R )   > >   C A N _ R D T 0 R _ T I M E _ P o s ;  
  
         / *   G e t   t h e   d a t a   * /  
         a D a t a [ 0 ]   =   ( u i n t 8 _ t ) ( ( C A N _ R D L 0 R _ D A T A 0   &   h c a n - > I n s t a n c e - > s F I F O M a i l B o x [ R x F i f o ] . R D L R )   > >   C A N _ R D L 0 R _ D A T A 0 _ P o s ) ;  
         a D a t a [ 1 ]   =   ( u i n t 8 _ t ) ( ( C A N _ R D L 0 R _ D A T A 1   &   h c a n - > I n s t a n c e - > s F I F O M a i l B o x [ R x F i f o ] . R D L R )   > >   C A N _ R D L 0 R _ D A T A 1 _ P o s ) ;  
         a D a t a [ 2 ]   =   ( u i n t 8 _ t ) ( ( C A N _ R D L 0 R _ D A T A 2   &   h c a n - > I n s t a n c e - > s F I F O M a i l B o x [ R x F i f o ] . R D L R )   > >   C A N _ R D L 0 R _ D A T A 2 _ P o s ) ;  
         a D a t a [ 3 ]   =   ( u i n t 8 _ t ) ( ( C A N _ R D L 0 R _ D A T A 3   &   h c a n - > I n s t a n c e - > s F I F O M a i l B o x [ R x F i f o ] . R D L R )   > >   C A N _ R D L 0 R _ D A T A 3 _ P o s ) ;  
         a D a t a [ 4 ]   =   ( u i n t 8 _ t ) ( ( C A N _ R D H 0 R _ D A T A 4   &   h c a n - > I n s t a n c e - > s F I F O M a i l B o x [ R x F i f o ] . R D H R )   > >   C A N _ R D H 0 R _ D A T A 4 _ P o s ) ;  
         a D a t a [ 5 ]   =   ( u i n t 8 _ t ) ( ( C A N _ R D H 0 R _ D A T A 5   &   h c a n - > I n s t a n c e - > s F I F O M a i l B o x [ R x F i f o ] . R D H R )   > >   C A N _ R D H 0 R _ D A T A 5 _ P o s ) ;  
         a D a t a [ 6 ]   =   ( u i n t 8 _ t ) ( ( C A N _ R D H 0 R _ D A T A 6   &   h c a n - > I n s t a n c e - > s F I F O M a i l B o x [ R x F i f o ] . R D H R )   > >   C A N _ R D H 0 R _ D A T A 6 _ P o s ) ;  
         a D a t a [ 7 ]   =   ( u i n t 8 _ t ) ( ( C A N _ R D H 0 R _ D A T A 7   &   h c a n - > I n s t a n c e - > s F I F O M a i l B o x [ R x F i f o ] . R D H R )   > >   C A N _ R D H 0 R _ D A T A 7 _ P o s ) ;  
  
         / *   R e l e a s e   t h e   F I F O   * /  
         i f   ( R x F i f o   = =   C A N _ R X _ F I F O 0 )   / *   R x   e l e m e n t   i s   a s s i g n e d   t o   R x   F I F O   0   * /  
         {  
             / *   R e l e a s e   R X   F I F O   0   * /  
             S E T _ B I T ( h c a n - > I n s t a n c e - > R F 0 R ,   C A N _ R F 0 R _ R F O M 0 ) ;  
         }  
         e l s e   / *   R x   e l e m e n t   i s   a s s i g n e d   t o   R x   F I F O   1   * /  
         {  
             / *   R e l e a s e   R X   F I F O   1   * /  
             S E T _ B I T ( h c a n - > I n s t a n c e - > R F 1 R ,   C A N _ R F 1 R _ R F O M 1 ) ;  
         }  
  
         / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         / *   U p d a t e   e r r o r   c o d e   * /  
         h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ N O T _ I N I T I A L I Z E D ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   R x   F I F O   f i l l   l e v e l .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a n   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ p a r a m     R x F i f o   R x   F I F O .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ a r g   C A N _ r e c e i v e _ F I F O _ n u m b e r .  
     *   @ r e t v a l   N u m b e r   o f   m e s s a g e s   a v a i l a b l e   i n   R x   F I F O .  
     * /  
 u i n t 3 2 _ t   H A L _ C A N _ G e t R x F i f o F i l l L e v e l ( C A N _ H a n d l e T y p e D e f   * h c a n ,   u i n t 3 2 _ t   R x F i f o )  
 {  
     u i n t 3 2 _ t   f i l l l e v e l   =   0 U ;  
     H A L _ C A N _ S t a t e T y p e D e f   s t a t e   =   h c a n - > S t a t e ;  
  
     / *   C h e c k   f u n c t i o n   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ C A N _ R X _ F I F O ( R x F i f o ) ) ;  
  
     i f   ( ( s t a t e   = =   H A L _ C A N _ S T A T E _ R E A D Y )   | |  
             ( s t a t e   = =   H A L _ C A N _ S T A T E _ L I S T E N I N G ) )  
     {  
         i f   ( R x F i f o   = =   C A N _ R X _ F I F O 0 )  
         {  
             f i l l l e v e l   =   h c a n - > I n s t a n c e - > R F 0 R   &   C A N _ R F 0 R _ F M P 0 ;  
         }  
         e l s e   / *   R x F i f o   = =   C A N _ R X _ F I F O 1   * /  
         {  
             f i l l l e v e l   =   h c a n - > I n s t a n c e - > R F 1 R   &   C A N _ R F 1 R _ F M P 1 ;  
         }  
     }  
  
     / *   R e t u r n   R x   F I F O   f i l l   l e v e l   * /  
     r e t u r n   f i l l l e v e l ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C A N _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4   I n t e r r u p t s   m a n a g e m e n t  
   *     @ b r i e f         I n t e r r u p t s   m a n a g e m e n t  
   *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                               # # # # #   I n t e r r u p t s   m a n a g e m e n t   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   H A L _ C A N _ A c t i v a t e N o t i f i c a t i o n             :   E n a b l e   i n t e r r u p t s  
             ( + )   H A L _ C A N _ D e a c t i v a t e N o t i f i c a t i o n         :   D i s a b l e   i n t e r r u p t s  
             ( + )   H A L _ C A N _ I R Q H a n d l e r                                 :   H a n d l e s   C A N   i n t e r r u p t   r e q u e s t  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   i n t e r r u p t s .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a n   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ p a r a m     A c t i v e I T s   i n d i c a t e s   w h i c h   i n t e r r u p t s   w i l l   b e   e n a b l e d .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   @ a r g   C A N _ I n t e r r u p t s .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ A c t i v a t e N o t i f i c a t i o n ( C A N _ H a n d l e T y p e D e f   * h c a n ,   u i n t 3 2 _ t   A c t i v e I T s )  
 {  
     H A L _ C A N _ S t a t e T y p e D e f   s t a t e   =   h c a n - > S t a t e ;  
  
     / *   C h e c k   f u n c t i o n   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ C A N _ I T ( A c t i v e I T s ) ) ;  
  
     i f   ( ( s t a t e   = =   H A L _ C A N _ S T A T E _ R E A D Y )   | |  
             ( s t a t e   = =   H A L _ C A N _ S T A T E _ L I S T E N I N G ) )  
     {  
         / *   E n a b l e   t h e   s e l e c t e d   i n t e r r u p t s   * /  
         _ _ H A L _ C A N _ E N A B L E _ I T ( h c a n ,   A c t i v e I T s ) ;  
  
         / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         / *   U p d a t e   e r r o r   c o d e   * /  
         h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ N O T _ I N I T I A L I Z E D ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   i n t e r r u p t s .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a n   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ p a r a m     I n a c t i v e I T s   i n d i c a t e s   w h i c h   i n t e r r u p t s   w i l l   b e   d i s a b l e d .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   @ a r g   C A N _ I n t e r r u p t s .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ D e a c t i v a t e N o t i f i c a t i o n ( C A N _ H a n d l e T y p e D e f   * h c a n ,   u i n t 3 2 _ t   I n a c t i v e I T s )  
 {  
     H A L _ C A N _ S t a t e T y p e D e f   s t a t e   =   h c a n - > S t a t e ;  
  
     / *   C h e c k   f u n c t i o n   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ C A N _ I T ( I n a c t i v e I T s ) ) ;  
  
     i f   ( ( s t a t e   = =   H A L _ C A N _ S T A T E _ R E A D Y )   | |  
             ( s t a t e   = =   H A L _ C A N _ S T A T E _ L I S T E N I N G ) )  
     {  
         / *   D i s a b l e   t h e   s e l e c t e d   i n t e r r u p t s   * /  
         _ _ H A L _ C A N _ D I S A B L E _ I T ( h c a n ,   I n a c t i v e I T s ) ;  
  
         / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         / *   U p d a t e   e r r o r   c o d e   * /  
         h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ N O T _ I N I T I A L I Z E D ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e s   C A N   i n t e r r u p t   r e q u e s t  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ C A N _ I R Q H a n d l e r ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     u i n t 3 2 _ t   e r r o r c o d e   =   H A L _ C A N _ E R R O R _ N O N E ;  
     u i n t 3 2 _ t   i n t e r r u p t s   =   R E A D _ R E G ( h c a n - > I n s t a n c e - > I E R ) ;  
     u i n t 3 2 _ t   m s r f l a g s   =   R E A D _ R E G ( h c a n - > I n s t a n c e - > M S R ) ;  
     u i n t 3 2 _ t   t s r f l a g s   =   R E A D _ R E G ( h c a n - > I n s t a n c e - > T S R ) ;  
     u i n t 3 2 _ t   r f 0 r f l a g s   =   R E A D _ R E G ( h c a n - > I n s t a n c e - > R F 0 R ) ;  
     u i n t 3 2 _ t   r f 1 r f l a g s   =   R E A D _ R E G ( h c a n - > I n s t a n c e - > R F 1 R ) ;  
     u i n t 3 2 _ t   e s r f l a g s   =   R E A D _ R E G ( h c a n - > I n s t a n c e - > E S R ) ;  
  
     / *   T r a n s m i t   M a i l b o x   e m p t y   i n t e r r u p t   m a n a g e m e n t   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
     i f   ( ( i n t e r r u p t s   &   C A N _ I T _ T X _ M A I L B O X _ E M P T Y )   ! =   0 U )  
     {  
         / *   T r a n s m i t   M a i l b o x   0   m a n a g e m e n t   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
         i f   ( ( t s r f l a g s   &   C A N _ T S R _ R Q C P 0 )   ! =   0 U )  
         {  
             / *   C l e a r   t h e   T r a n s m i s s i o n   C o m p l e t e   f l a g   ( a n d   T X O K 0 , A L S T 0 , T E R R 0   b i t s )   * /  
             _ _ H A L _ C A N _ C L E A R _ F L A G ( h c a n ,   C A N _ F L A G _ R Q C P 0 ) ;  
  
             i f   ( ( t s r f l a g s   &   C A N _ T S R _ T X O K 0 )   ! =   0 U )  
             {  
                 / *   T r a n s m i s s i o n   M a i l b o x   0   c o m p l e t e   c a l l b a c k   * /  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
                 / *   C a l l   r e g i s t e r e d   c a l l b a c k * /  
                 h c a n - > T x M a i l b o x 0 C o m p l e t e C a l l b a c k ( h c a n ) ;  
 # e l s e  
                 / *   C a l l   w e a k   ( s u r c h a r g e d )   c a l l b a c k   * /  
                 H A L _ C A N _ T x M a i l b o x 0 C o m p l e t e C a l l b a c k ( h c a n ) ;  
 # e n d i f   / *   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   * /  
             }  
             e l s e  
             {  
                 i f   ( ( t s r f l a g s   &   C A N _ T S R _ A L S T 0 )   ! =   0 U )  
                 {  
                     / *   U p d a t e   e r r o r   c o d e   * /  
                     e r r o r c o d e   | =   H A L _ C A N _ E R R O R _ T X _ A L S T 0 ;  
                 }  
                 e l s e   i f   ( ( t s r f l a g s   &   C A N _ T S R _ T E R R 0 )   ! =   0 U )  
                 {  
                     / *   U p d a t e   e r r o r   c o d e   * /  
                     e r r o r c o d e   | =   H A L _ C A N _ E R R O R _ T X _ T E R R 0 ;  
                 }  
                 e l s e  
                 {  
                     / *   T r a n s m i s s i o n   M a i l b o x   0   a b o r t   c a l l b a c k   * /  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
                     / *   C a l l   r e g i s t e r e d   c a l l b a c k * /  
                     h c a n - > T x M a i l b o x 0 A b o r t C a l l b a c k ( h c a n ) ;  
 # e l s e  
                     / *   C a l l   w e a k   ( s u r c h a r g e d )   c a l l b a c k   * /  
                     H A L _ C A N _ T x M a i l b o x 0 A b o r t C a l l b a c k ( h c a n ) ;  
 # e n d i f   / *   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   * /  
                 }  
             }  
         }  
  
         / *   T r a n s m i t   M a i l b o x   1   m a n a g e m e n t   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
         i f   ( ( t s r f l a g s   &   C A N _ T S R _ R Q C P 1 )   ! =   0 U )  
         {  
             / *   C l e a r   t h e   T r a n s m i s s i o n   C o m p l e t e   f l a g   ( a n d   T X O K 1 , A L S T 1 , T E R R 1   b i t s )   * /  
             _ _ H A L _ C A N _ C L E A R _ F L A G ( h c a n ,   C A N _ F L A G _ R Q C P 1 ) ;  
  
             i f   ( ( t s r f l a g s   &   C A N _ T S R _ T X O K 1 )   ! =   0 U )  
             {  
                 / *   T r a n s m i s s i o n   M a i l b o x   1   c o m p l e t e   c a l l b a c k   * /  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
                 / *   C a l l   r e g i s t e r e d   c a l l b a c k * /  
                 h c a n - > T x M a i l b o x 1 C o m p l e t e C a l l b a c k ( h c a n ) ;  
 # e l s e  
                 / *   C a l l   w e a k   ( s u r c h a r g e d )   c a l l b a c k   * /  
                 H A L _ C A N _ T x M a i l b o x 1 C o m p l e t e C a l l b a c k ( h c a n ) ;  
 # e n d i f   / *   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   * /  
             }  
             e l s e  
             {  
                 i f   ( ( t s r f l a g s   &   C A N _ T S R _ A L S T 1 )   ! =   0 U )  
                 {  
                     / *   U p d a t e   e r r o r   c o d e   * /  
                     e r r o r c o d e   | =   H A L _ C A N _ E R R O R _ T X _ A L S T 1 ;  
                 }  
                 e l s e   i f   ( ( t s r f l a g s   &   C A N _ T S R _ T E R R 1 )   ! =   0 U )  
                 {  
                     / *   U p d a t e   e r r o r   c o d e   * /  
                     e r r o r c o d e   | =   H A L _ C A N _ E R R O R _ T X _ T E R R 1 ;  
                 }  
                 e l s e  
                 {  
                     / *   T r a n s m i s s i o n   M a i l b o x   1   a b o r t   c a l l b a c k   * /  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
                     / *   C a l l   r e g i s t e r e d   c a l l b a c k * /  
                     h c a n - > T x M a i l b o x 1 A b o r t C a l l b a c k ( h c a n ) ;  
 # e l s e  
                     / *   C a l l   w e a k   ( s u r c h a r g e d )   c a l l b a c k   * /  
                     H A L _ C A N _ T x M a i l b o x 1 A b o r t C a l l b a c k ( h c a n ) ;  
 # e n d i f   / *   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   * /  
                 }  
             }  
         }  
  
         / *   T r a n s m i t   M a i l b o x   2   m a n a g e m e n t   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
         i f   ( ( t s r f l a g s   &   C A N _ T S R _ R Q C P 2 )   ! =   0 U )  
         {  
             / *   C l e a r   t h e   T r a n s m i s s i o n   C o m p l e t e   f l a g   ( a n d   T X O K 2 , A L S T 2 , T E R R 2   b i t s )   * /  
             _ _ H A L _ C A N _ C L E A R _ F L A G ( h c a n ,   C A N _ F L A G _ R Q C P 2 ) ;  
  
             i f   ( ( t s r f l a g s   &   C A N _ T S R _ T X O K 2 )   ! =   0 U )  
             {  
                 / *   T r a n s m i s s i o n   M a i l b o x   2   c o m p l e t e   c a l l b a c k   * /  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
                 / *   C a l l   r e g i s t e r e d   c a l l b a c k * /  
                 h c a n - > T x M a i l b o x 2 C o m p l e t e C a l l b a c k ( h c a n ) ;  
 # e l s e  
                 / *   C a l l   w e a k   ( s u r c h a r g e d )   c a l l b a c k   * /  
                 H A L _ C A N _ T x M a i l b o x 2 C o m p l e t e C a l l b a c k ( h c a n ) ;  
 # e n d i f   / *   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   * /  
             }  
             e l s e  
             {  
                 i f   ( ( t s r f l a g s   &   C A N _ T S R _ A L S T 2 )   ! =   0 U )  
                 {  
                     / *   U p d a t e   e r r o r   c o d e   * /  
                     e r r o r c o d e   | =   H A L _ C A N _ E R R O R _ T X _ A L S T 2 ;  
                 }  
                 e l s e   i f   ( ( t s r f l a g s   &   C A N _ T S R _ T E R R 2 )   ! =   0 U )  
                 {  
                     / *   U p d a t e   e r r o r   c o d e   * /  
                     e r r o r c o d e   | =   H A L _ C A N _ E R R O R _ T X _ T E R R 2 ;  
                 }  
                 e l s e  
                 {  
                     / *   T r a n s m i s s i o n   M a i l b o x   2   a b o r t   c a l l b a c k   * /  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
                     / *   C a l l   r e g i s t e r e d   c a l l b a c k * /  
                     h c a n - > T x M a i l b o x 2 A b o r t C a l l b a c k ( h c a n ) ;  
 # e l s e  
                     / *   C a l l   w e a k   ( s u r c h a r g e d )   c a l l b a c k   * /  
                     H A L _ C A N _ T x M a i l b o x 2 A b o r t C a l l b a c k ( h c a n ) ;  
 # e n d i f   / *   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   * /  
                 }  
             }  
         }  
     }  
  
     / *   R e c e i v e   F I F O   0   o v e r r u n   i n t e r r u p t   m a n a g e m e n t   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
     i f   ( ( i n t e r r u p t s   &   C A N _ I T _ R X _ F I F O 0 _ O V E R R U N )   ! =   0 U )  
     {  
         i f   ( ( r f 0 r f l a g s   &   C A N _ R F 0 R _ F O V R 0 )   ! =   0 U )  
         {  
             / *   S e t   C A N   e r r o r   c o d e   t o   R x   F i f o   0   o v e r r u n   e r r o r   * /  
             e r r o r c o d e   | =   H A L _ C A N _ E R R O R _ R X _ F O V 0 ;  
  
             / *   C l e a r   F I F O 0   O v e r r u n   F l a g   * /  
             _ _ H A L _ C A N _ C L E A R _ F L A G ( h c a n ,   C A N _ F L A G _ F O V 0 ) ;  
         }  
     }  
  
     / *   R e c e i v e   F I F O   0   f u l l   i n t e r r u p t   m a n a g e m e n t   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
     i f   ( ( i n t e r r u p t s   &   C A N _ I T _ R X _ F I F O 0 _ F U L L )   ! =   0 U )  
     {  
         i f   ( ( r f 0 r f l a g s   &   C A N _ R F 0 R _ F U L L 0 )   ! =   0 U )  
         {  
             / *   C l e a r   F I F O   0   f u l l   F l a g   * /  
             _ _ H A L _ C A N _ C L E A R _ F L A G ( h c a n ,   C A N _ F L A G _ F F 0 ) ;  
  
             / *   R e c e i v e   F I F O   0   f u l l   C a l l b a c k   * /  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
             / *   C a l l   r e g i s t e r e d   c a l l b a c k * /  
             h c a n - > R x F i f o 0 F u l l C a l l b a c k ( h c a n ) ;  
 # e l s e  
             / *   C a l l   w e a k   ( s u r c h a r g e d )   c a l l b a c k   * /  
             H A L _ C A N _ R x F i f o 0 F u l l C a l l b a c k ( h c a n ) ;  
 # e n d i f   / *   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
     }  
  
     / *   R e c e i v e   F I F O   0   m e s s a g e   p e n d i n g   i n t e r r u p t   m a n a g e m e n t   * * * * * * * * * * * * * * * * * * * * * /  
     i f   ( ( i n t e r r u p t s   &   C A N _ I T _ R X _ F I F O 0 _ M S G _ P E N D I N G )   ! =   0 U )  
     {  
         / *   C h e c k   i f   m e s s a g e   i s   s t i l l   p e n d i n g   * /  
         i f   ( ( h c a n - > I n s t a n c e - > R F 0 R   &   C A N _ R F 0 R _ F M P 0 )   ! =   0 U )  
         {  
             / *   R e c e i v e   F I F O   0   m e s s a g e   p e n d i n g   C a l l b a c k   * /  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
             / *   C a l l   r e g i s t e r e d   c a l l b a c k * /  
             h c a n - > R x F i f o 0 M s g P e n d i n g C a l l b a c k ( h c a n ) ;  
 # e l s e  
             / *   C a l l   w e a k   ( s u r c h a r g e d )   c a l l b a c k   * /  
             H A L _ C A N _ R x F i f o 0 M s g P e n d i n g C a l l b a c k ( h c a n ) ;  
 # e n d i f   / *   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
     }  
  
     / *   R e c e i v e   F I F O   1   o v e r r u n   i n t e r r u p t   m a n a g e m e n t   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
     i f   ( ( i n t e r r u p t s   &   C A N _ I T _ R X _ F I F O 1 _ O V E R R U N )   ! =   0 U )  
     {  
         i f   ( ( r f 1 r f l a g s   &   C A N _ R F 1 R _ F O V R 1 )   ! =   0 U )  
         {  
             / *   S e t   C A N   e r r o r   c o d e   t o   R x   F i f o   1   o v e r r u n   e r r o r   * /  
             e r r o r c o d e   | =   H A L _ C A N _ E R R O R _ R X _ F O V 1 ;  
  
             / *   C l e a r   F I F O 1   O v e r r u n   F l a g   * /  
             _ _ H A L _ C A N _ C L E A R _ F L A G ( h c a n ,   C A N _ F L A G _ F O V 1 ) ;  
         }  
     }  
  
     / *   R e c e i v e   F I F O   1   f u l l   i n t e r r u p t   m a n a g e m e n t   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
     i f   ( ( i n t e r r u p t s   &   C A N _ I T _ R X _ F I F O 1 _ F U L L )   ! =   0 U )  
     {  
         i f   ( ( r f 1 r f l a g s   &   C A N _ R F 1 R _ F U L L 1 )   ! =   0 U )  
         {  
             / *   C l e a r   F I F O   1   f u l l   F l a g   * /  
             _ _ H A L _ C A N _ C L E A R _ F L A G ( h c a n ,   C A N _ F L A G _ F F 1 ) ;  
  
             / *   R e c e i v e   F I F O   1   f u l l   C a l l b a c k   * /  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
             / *   C a l l   r e g i s t e r e d   c a l l b a c k * /  
             h c a n - > R x F i f o 1 F u l l C a l l b a c k ( h c a n ) ;  
 # e l s e  
             / *   C a l l   w e a k   ( s u r c h a r g e d )   c a l l b a c k   * /  
             H A L _ C A N _ R x F i f o 1 F u l l C a l l b a c k ( h c a n ) ;  
 # e n d i f   / *   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
     }  
  
     / *   R e c e i v e   F I F O   1   m e s s a g e   p e n d i n g   i n t e r r u p t   m a n a g e m e n t   * * * * * * * * * * * * * * * * * * * * * /  
     i f   ( ( i n t e r r u p t s   &   C A N _ I T _ R X _ F I F O 1 _ M S G _ P E N D I N G )   ! =   0 U )  
     {  
         / *   C h e c k   i f   m e s s a g e   i s   s t i l l   p e n d i n g   * /  
         i f   ( ( h c a n - > I n s t a n c e - > R F 1 R   &   C A N _ R F 1 R _ F M P 1 )   ! =   0 U )  
         {  
             / *   R e c e i v e   F I F O   1   m e s s a g e   p e n d i n g   C a l l b a c k   * /  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
             / *   C a l l   r e g i s t e r e d   c a l l b a c k * /  
             h c a n - > R x F i f o 1 M s g P e n d i n g C a l l b a c k ( h c a n ) ;  
 # e l s e  
             / *   C a l l   w e a k   ( s u r c h a r g e d )   c a l l b a c k   * /  
             H A L _ C A N _ R x F i f o 1 M s g P e n d i n g C a l l b a c k ( h c a n ) ;  
 # e n d i f   / *   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
     }  
  
     / *   S l e e p   i n t e r r u p t   m a n a g e m e n t   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
     i f   ( ( i n t e r r u p t s   &   C A N _ I T _ S L E E P _ A C K )   ! =   0 U )  
     {  
         i f   ( ( m s r f l a g s   &   C A N _ M S R _ S L A K I )   ! =   0 U )  
         {  
             / *   C l e a r   S l e e p   i n t e r r u p t   F l a g   * /  
             _ _ H A L _ C A N _ C L E A R _ F L A G ( h c a n ,   C A N _ F L A G _ S L A K I ) ;  
  
             / *   S l e e p   C a l l b a c k   * /  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
             / *   C a l l   r e g i s t e r e d   c a l l b a c k * /  
             h c a n - > S l e e p C a l l b a c k ( h c a n ) ;  
 # e l s e  
             / *   C a l l   w e a k   ( s u r c h a r g e d )   c a l l b a c k   * /  
             H A L _ C A N _ S l e e p C a l l b a c k ( h c a n ) ;  
 # e n d i f   / *   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
     }  
  
     / *   W a k e U p   i n t e r r u p t   m a n a g e m e n t   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
     i f   ( ( i n t e r r u p t s   &   C A N _ I T _ W A K E U P )   ! =   0 U )  
     {  
         i f   ( ( m s r f l a g s   &   C A N _ M S R _ W K U I )   ! =   0 U )  
         {  
             / *   C l e a r   W a k e U p   F l a g   * /  
             _ _ H A L _ C A N _ C L E A R _ F L A G ( h c a n ,   C A N _ F L A G _ W K U ) ;  
  
             / *   W a k e U p   C a l l b a c k   * /  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
             / *   C a l l   r e g i s t e r e d   c a l l b a c k * /  
             h c a n - > W a k e U p F r o m R x M s g C a l l b a c k ( h c a n ) ;  
 # e l s e  
             / *   C a l l   w e a k   ( s u r c h a r g e d )   c a l l b a c k   * /  
             H A L _ C A N _ W a k e U p F r o m R x M s g C a l l b a c k ( h c a n ) ;  
 # e n d i f   / *   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
     }  
  
     / *   E r r o r   i n t e r r u p t s   m a n a g e m e n t   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
     i f   ( ( i n t e r r u p t s   &   C A N _ I T _ E R R O R )   ! =   0 U )  
     {  
         i f   ( ( m s r f l a g s   &   C A N _ M S R _ E R R I )   ! =   0 U )  
         {  
             / *   C h e c k   E r r o r   W a r n i n g   F l a g   * /  
             i f   ( ( ( i n t e r r u p t s   &   C A N _ I T _ E R R O R _ W A R N I N G )   ! =   0 U )   & &  
                     ( ( e s r f l a g s   &   C A N _ E S R _ E W G F )   ! =   0 U ) )  
             {  
                 / *   S e t   C A N   e r r o r   c o d e   t o   E r r o r   W a r n i n g   * /  
                 e r r o r c o d e   | =   H A L _ C A N _ E R R O R _ E W G ;  
  
                 / *   N o   n e e d   f o r   c l e a r   o f   E r r o r   W a r n i n g   F l a g   a s   r e a d - o n l y   * /  
             }  
  
             / *   C h e c k   E r r o r   P a s s i v e   F l a g   * /  
             i f   ( ( ( i n t e r r u p t s   &   C A N _ I T _ E R R O R _ P A S S I V E )   ! =   0 U )   & &  
                     ( ( e s r f l a g s   &   C A N _ E S R _ E P V F )   ! =   0 U ) )  
             {  
                 / *   S e t   C A N   e r r o r   c o d e   t o   E r r o r   P a s s i v e   * /  
                 e r r o r c o d e   | =   H A L _ C A N _ E R R O R _ E P V ;  
  
                 / *   N o   n e e d   f o r   c l e a r   o f   E r r o r   P a s s i v e   F l a g   a s   r e a d - o n l y   * /  
             }  
  
             / *   C h e c k   B u s - o f f   F l a g   * /  
             i f   ( ( ( i n t e r r u p t s   &   C A N _ I T _ B U S O F F )   ! =   0 U )   & &  
                     ( ( e s r f l a g s   &   C A N _ E S R _ B O F F )   ! =   0 U ) )  
             {  
                 / *   S e t   C A N   e r r o r   c o d e   t o   B u s - O f f   * /  
                 e r r o r c o d e   | =   H A L _ C A N _ E R R O R _ B O F ;  
  
                 / *   N o   n e e d   f o r   c l e a r   o f   E r r o r   B u s - O f f   a s   r e a d - o n l y   * /  
             }  
  
             / *   C h e c k   L a s t   E r r o r   C o d e   F l a g   * /  
             i f   ( ( ( i n t e r r u p t s   &   C A N _ I T _ L A S T _ E R R O R _ C O D E )   ! =   0 U )   & &  
                     ( ( e s r f l a g s   &   C A N _ E S R _ L E C )   ! =   0 U ) )  
             {  
                 s w i t c h   ( e s r f l a g s   &   C A N _ E S R _ L E C )  
                 {  
                     c a s e   ( C A N _ E S R _ L E C _ 0 ) :  
                         / *   S e t   C A N   e r r o r   c o d e   t o   S t u f f   e r r o r   * /  
                         e r r o r c o d e   | =   H A L _ C A N _ E R R O R _ S T F ;  
                         b r e a k ;  
                     c a s e   ( C A N _ E S R _ L E C _ 1 ) :  
                         / *   S e t   C A N   e r r o r   c o d e   t o   F o r m   e r r o r   * /  
                         e r r o r c o d e   | =   H A L _ C A N _ E R R O R _ F O R ;  
                         b r e a k ;  
                     c a s e   ( C A N _ E S R _ L E C _ 1   |   C A N _ E S R _ L E C _ 0 ) :  
                         / *   S e t   C A N   e r r o r   c o d e   t o   A c k n o w l e d g e m e n t   e r r o r   * /  
                         e r r o r c o d e   | =   H A L _ C A N _ E R R O R _ A C K ;  
                         b r e a k ;  
                     c a s e   ( C A N _ E S R _ L E C _ 2 ) :  
                         / *   S e t   C A N   e r r o r   c o d e   t o   B i t   r e c e s s i v e   e r r o r   * /  
                         e r r o r c o d e   | =   H A L _ C A N _ E R R O R _ B R ;  
                         b r e a k ;  
                     c a s e   ( C A N _ E S R _ L E C _ 2   |   C A N _ E S R _ L E C _ 0 ) :  
                         / *   S e t   C A N   e r r o r   c o d e   t o   B i t   D o m i n a n t   e r r o r   * /  
                         e r r o r c o d e   | =   H A L _ C A N _ E R R O R _ B D ;  
                         b r e a k ;  
                     c a s e   ( C A N _ E S R _ L E C _ 2   |   C A N _ E S R _ L E C _ 1 ) :  
                         / *   S e t   C A N   e r r o r   c o d e   t o   C R C   e r r o r   * /  
                         e r r o r c o d e   | =   H A L _ C A N _ E R R O R _ C R C ;  
                         b r e a k ;  
                     d e f a u l t :  
                         b r e a k ;  
                 }  
  
                 / *   C l e a r   L a s t   e r r o r   c o d e   F l a g   * /  
                 C L E A R _ B I T ( h c a n - > I n s t a n c e - > E S R ,   C A N _ E S R _ L E C ) ;  
             }  
         }  
  
         / *   C l e a r   E R R I   F l a g   * /  
         _ _ H A L _ C A N _ C L E A R _ F L A G ( h c a n ,   C A N _ F L A G _ E R R I ) ;  
     }  
  
     / *   C a l l   t h e   E r r o r   c a l l   B a c k   i n   c a s e   o f   E r r o r s   * /  
     i f   ( e r r o r c o d e   ! =   H A L _ C A N _ E R R O R _ N O N E )  
     {  
         / *   U p d a t e   e r r o r   c o d e   i n   h a n d l e   * /  
         h c a n - > E r r o r C o d e   | =   e r r o r c o d e ;  
  
         / *   C a l l   E r r o r   c a l l b a c k   f u n c t i o n   * /  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
         / *   C a l l   r e g i s t e r e d   c a l l b a c k * /  
         h c a n - > E r r o r C a l l b a c k ( h c a n ) ;  
 # e l s e  
         / *   C a l l   w e a k   ( s u r c h a r g e d )   c a l l b a c k   * /  
         H A L _ C A N _ E r r o r C a l l b a c k ( h c a n ) ;  
 # e n d i f   / *   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C A N _ E x p o r t e d _ F u n c t i o n s _ G r o u p 5   C a l l b a c k   f u n c t i o n s  
   *     @ b r i e f       C A N   C a l l b a c k   f u n c t i o n s  
   *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                     # # # # #   C a l l b a c k   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   t h e   f o l l o w i n g   c a l l b a c k   f u n c t i o n s :  
             ( + )   H A L _ C A N _ T x M a i l b o x 0 C o m p l e t e C a l l b a c k  
             ( + )   H A L _ C A N _ T x M a i l b o x 1 C o m p l e t e C a l l b a c k  
             ( + )   H A L _ C A N _ T x M a i l b o x 2 C o m p l e t e C a l l b a c k  
             ( + )   H A L _ C A N _ T x M a i l b o x 0 A b o r t C a l l b a c k  
             ( + )   H A L _ C A N _ T x M a i l b o x 1 A b o r t C a l l b a c k  
             ( + )   H A L _ C A N _ T x M a i l b o x 2 A b o r t C a l l b a c k  
             ( + )   H A L _ C A N _ R x F i f o 0 M s g P e n d i n g C a l l b a c k  
             ( + )   H A L _ C A N _ R x F i f o 0 F u l l C a l l b a c k  
             ( + )   H A L _ C A N _ R x F i f o 1 M s g P e n d i n g C a l l b a c k  
             ( + )   H A L _ C A N _ R x F i f o 1 F u l l C a l l b a c k  
             ( + )   H A L _ C A N _ S l e e p C a l l b a c k  
             ( + )   H A L _ C A N _ W a k e U p F r o m R x M s g C a l l b a c k  
             ( + )   H A L _ C A N _ E r r o r C a l l b a c k  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     T r a n s m i s s i o n   M a i l b o x   0   c o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ C A N _ T x M a i l b o x 0 C o m p l e t e C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c a n ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C A N _ T x M a i l b o x 0 C o m p l e t e C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e  
                         u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     T r a n s m i s s i o n   M a i l b o x   1   c o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ C A N _ T x M a i l b o x 1 C o m p l e t e C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c a n ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C A N _ T x M a i l b o x 1 C o m p l e t e C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e  
                         u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     T r a n s m i s s i o n   M a i l b o x   2   c o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ C A N _ T x M a i l b o x 2 C o m p l e t e C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c a n ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C A N _ T x M a i l b o x 2 C o m p l e t e C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e  
                         u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     T r a n s m i s s i o n   M a i l b o x   0   C a n c e l l a t i o n   c a l l b a c k .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a n   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ C A N _ T x M a i l b o x 0 A b o r t C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c a n ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C A N _ T x M a i l b o x 0 A b o r t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e  
                         u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     T r a n s m i s s i o n   M a i l b o x   1   C a n c e l l a t i o n   c a l l b a c k .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a n   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ C A N _ T x M a i l b o x 1 A b o r t C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c a n ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C A N _ T x M a i l b o x 1 A b o r t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e  
                         u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     T r a n s m i s s i o n   M a i l b o x   2   C a n c e l l a t i o n   c a l l b a c k .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a n   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ C A N _ T x M a i l b o x 2 A b o r t C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c a n ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C A N _ T x M a i l b o x 2 A b o r t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e  
                         u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     R x   F I F O   0   m e s s a g e   p e n d i n g   c a l l b a c k .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ C A N _ R x F i f o 0 M s g P e n d i n g C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c a n ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C A N _ R x F i f o 0 M s g P e n d i n g C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e  
                         u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     R x   F I F O   0   f u l l   c a l l b a c k .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ C A N _ R x F i f o 0 F u l l C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c a n ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C A N _ R x F i f o 0 F u l l C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r  
                         f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     R x   F I F O   1   m e s s a g e   p e n d i n g   c a l l b a c k .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ C A N _ R x F i f o 1 M s g P e n d i n g C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c a n ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C A N _ R x F i f o 1 M s g P e n d i n g C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e  
                         u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     R x   F I F O   1   f u l l   c a l l b a c k .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ C A N _ R x F i f o 1 F u l l C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c a n ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C A N _ R x F i f o 1 F u l l C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r  
                         f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     S l e e p   c a l l b a c k .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ C A N _ S l e e p C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c a n ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C A N _ S l e e p C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     W a k e U p   f r o m   R x   m e s s a g e   c a l l b a c k .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ C A N _ W a k e U p F r o m R x M s g C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c a n ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C A N _ W a k e U p F r o m R x M s g C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e  
                         u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     E r r o r   C A N   c a l l b a c k .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ C A N _ E r r o r C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c a n ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C A N _ E r r o r C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C A N _ E x p o r t e d _ F u n c t i o n s _ G r o u p 6   P e r i p h e r a l   S t a t e   a n d   E r r o r   f u n c t i o n s  
   *     @ b r i e f       C A N   P e r i p h e r a l   S t a t e   f u n c t i o n s  
   *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                         # # # # #   P e r i p h e r a l   S t a t e   a n d   E r r o r   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o   :  
             ( + )   H A L _ C A N _ G e t S t a t e ( )     :   R e t u r n   t h e   C A N   s t a t e .  
             ( + )   H A L _ C A N _ G e t E r r o r ( )     :   R e t u r n   t h e   C A N   e r r o r   c o d e s   i f   a n y .  
             ( + )   H A L _ C A N _ R e s e t E r r o r ( ) :   R e s e t   t h e   C A N   e r r o r   c o d e s   i f   a n y .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   C A N   s t a t e .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ C A N _ S t a t e T y p e D e f   H A L _ C A N _ G e t S t a t e ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     H A L _ C A N _ S t a t e T y p e D e f   s t a t e   =   h c a n - > S t a t e ;  
  
     i f   ( ( s t a t e   = =   H A L _ C A N _ S T A T E _ R E A D Y )   | |  
             ( s t a t e   = =   H A L _ C A N _ S T A T E _ L I S T E N I N G ) )  
     {  
         / *   C h e c k   s l e e p   m o d e   a c k n o w l e d g e   f l a g   * /  
         i f   ( ( h c a n - > I n s t a n c e - > M S R   &   C A N _ M S R _ S L A K )   ! =   0 U )  
         {  
             / *   S l e e p   m o d e   i s   a c t i v e   * /  
             s t a t e   =   H A L _ C A N _ S T A T E _ S L E E P _ A C T I V E ;  
         }  
         / *   C h e c k   s l e e p   m o d e   r e q u e s t   f l a g   * /  
         e l s e   i f   ( ( h c a n - > I n s t a n c e - > M C R   &   C A N _ M C R _ S L E E P )   ! =   0 U )  
         {  
             / *   S l e e p   m o d e   r e q u e s t   i s   p e n d i n g   * /  
             s t a t e   =   H A L _ C A N _ S T A T E _ S L E E P _ P E N D I N G ;  
         }  
         e l s e  
         {  
             / *   N e i t h e r   s l e e p   m o d e   r e q u e s t   n o r   s l e e p   m o d e   a c k n o w l e d g e   * /  
         }  
     }  
  
     / *   R e t u r n   C A N   s t a t e   * /  
     r e t u r n   s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   C A N   e r r o r   c o d e .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   C A N   E r r o r   C o d e  
     * /  
 u i n t 3 2 _ t   H A L _ C A N _ G e t E r r o r ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     / *   R e t u r n   C A N   e r r o r   c o d e   * /  
     r e t u r n   h c a n - > E r r o r C o d e ;  
 }  
  
 / * *  
     *   @ b r i e f     R e s e t   t h e   C A N   e r r o r   c o d e .  
     *   @ p a r a m     h c a n   p o i n t e r   t o   a   C A N _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C A N .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ R e s e t E r r o r ( C A N _ H a n d l e T y p e D e f   * h c a n )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
     H A L _ C A N _ S t a t e T y p e D e f   s t a t e   =   h c a n - > S t a t e ;  
  
     i f   ( ( s t a t e   = =   H A L _ C A N _ S T A T E _ R E A D Y )   | |  
             ( s t a t e   = =   H A L _ C A N _ S T A T E _ L I S T E N I N G ) )  
     {  
         / *   R e s e t   C A N   e r r o r   c o d e   * /  
         h c a n - > E r r o r C o d e   =   0 U ;  
     }  
     e l s e  
     {  
         / *   U p d a t e   e r r o r   c o d e   * /  
         h c a n - > E r r o r C o d e   | =   H A L _ C A N _ E R R O R _ N O T _ I N I T I A L I Z E D ;  
  
         s t a t u s   =   H A L _ E R R O R ;  
     }  
  
     / *   R e t u r n   t h e   s t a t u s   * /  
     r e t u r n   s t a t u s ;  
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
 # e n d i f   / *   H A L _ C A N _ M O D U L E _ E N A B L E D   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   C A N 1   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  